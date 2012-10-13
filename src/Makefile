# cd /cygdrive/l/dingoo/native/dingoo_hugo/src/
# rm -f `find . -name \*.o`
# make -f Makefile.dingoo_native
# make -B -f Makefile.dingoo_native    # Force

# Define the applications properties here:

APP_NAME = ../hugo_dingoo



# Define the compiler settings here:

CPP       = mipsel-linux-g++
CC        = mipsel-linux-gcc
LD        = mipsel-linux-ld

SOURCE    = .

INCLUDE   = -I$(DINGOO_SDK)/include -I$(DINGOO_SDK)/include/SDL -I../lib
INCLUDE   += -I$(DINGOO_SDK)/include/zlib -I$(DINGOO_SDK)/include/png -I./ -I./core -I./core/psp

W_OPTS    = -Wall -Wextra -finline-functions -fomit-frame-pointer -msoft-float -fno-builtin -fno-exceptions
CPP_OPTS  = -G0 -O3 $(INCLUDE) -mips32 -mno-abicalls -fno-pic $(W_OPTS) -D_DEBUG -DMPU_JZ4740 -c
CC_OPTS   = -G0 -O3 $(INCLUDE) -mips32 -mno-abicalls -fno-pic $(W_OPTS) -D_DEBUG -DMPU_JZ4740 -c
CC_OPTS   += -DNDEBUG=1  ## allow assert() calls to be removed, if left fails to build with Dingoo native

CC_OPTS   += -DDINGOO_NATIVE=1
CC_OPTS   += -DUSE_SDL_TIMER=1
#CC_OPTS   += -DDISABLE_HUGO_GZ_SUPPORT
CC_OPTS   += -DNO_STDIO_REDIRECT -DMPU_JZ4740 -DHUGO_VERSION=\"$(HUGO_VERSION)\" -mips32 -O3 -D_GNU_SOURCE=1 -D_REENTRANT -DIS_LITTLE_ENDIAN -DBPP16 -DLSB_FIRST -DSOUND  -DNO_STDIO_REDIRECT -O2
#CC_OPTS   += -DDINGUX_MODE 
#CC_OPTS   += -DUNIX 

CC_OPTS_A = $(CC_OPTS) -D_ASSEMBLER_

LIB_PATH  = $(DINGOO_SDK)/lib
LIBS      =  -lSDL -lpng -lm -lz -lsml -lc -ljz4740 -lgcc

LD_SCRIPT = $(DINGOO_SDK)/lib/dingoo.xn
LD_OPTS   = -nodefaultlibs --script $(LD_SCRIPT) -L$(LIB_PATH) $(LIBS) -o $(APP_NAME).elf



# Find all source files

SRC_CPP = $(foreach dir, $(SOURCE), $(wildcard $(dir)/*.cpp))
SRC_C   = gp2x_psp.c \
dingoonative.c \
cpudingux.c \
Hugo.c \
psp_main.c \
psp_sdl.c \
psp_font.c \
psp_kbd.c \
psp_menu.c \
psp_danzeff.c \
psp_menu_set.c \
psp_menu_help.c \
psp_menu_cheat.c \
psp_menu_list.c \
psp_menu_kbd.c \
psp_menu_joy.c \
psp_editor.c \
psp_fmgr.c \
psp_audio.c \
psp_joy.c \
core/psp/osd_psp_cd.c \
core/psp/osd_psp_mix.c \
core/psp/osd_psp_gfx.c \
core/psp/osd_psp_snd.c \
core/psp/osd_psp_machine.c \
core/psp/osd_psp_keyboard.c \
core/cd.c \
core/dis.c \
core/edit_ram.c \
core/followop.c \
core/format.c \
core/gfx.c \
core/h6280.c \
core/hard_pce.c \
core/hugo.c \
core/list_rom.c \
core/lsmp3.c \
core/mix.c \
core/optable.c \
core/pce.c \
core/pcecd.c \
core/sound.c \
core/sprite.c \
core/utils.c \
core/hcd.c  \
core/miniunz.c  \
core/unzip.c  \
core/bios.c core/cheat.c core/debug.c core/iniconfig.c core/bp.c

SRC_S   = $(foreach dir, $(SOURCE), $(wildcard $(dir)/*.S))
OBJ_CPP = $(patsubst %.cpp, %.o, $(SRC_CPP))
OBJ_C   = $(patsubst %.c, %.o, $(SRC_C))
OBJ_S   = $(patsubst %.S, %.o, $(SRC_S))
OBJ     = $(OBJ_CPP) $(OBJ_C) $(OBJ_S)


HUGO_VERSION=1.1.0






# Compile rules.

.PHONY : all

all : $(APP_NAME).app

$(APP_NAME).app : $(APP_NAME).elf
	$(DINGOO_SDK)/tools/elf2app/elf2app $(APP_NAME)

$(APP_NAME).elf : $(OBJ)
	$(LD) $(OBJ) $(LD_OPTS)

$(OBJ_CPP) : %.o : %.cpp
	$(CPP) $(CPP_OPTS) -o $@ $<

$(OBJ_C) : %.o : %.c
	$(CC) $(CC_OPTS) -o $@ $<

$(OBJ_S) : %.o : %.S
	$(CC) $(CC_OPTS_A) -o $@ $<

 .c.o:
	$(CC) $(CC_OPTS) -o $@ $<


# Clean rules

.PHONY : clean

clean :
	rm -f $(OBJ) $(APP_NAME).elf $(APP_NAME).bin $(APP_NAME).app
