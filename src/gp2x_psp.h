/* FIXMEedit with dingoo_write changes */

# ifndef __GP2X_PSP_H__
# define __GP2X_PSP_H__

# ifdef __cplusplus
extern "C" {
# endif

#include "global.h"

typedef struct gp2xCtrlData {
  int    Buttons;
  u32    TimeStamp;

} gp2xCtrlData;

typedef struct gp2xCtrlData SceCtrlData;

# define GP2X_CTRL_UP         0x00001
# define GP2X_CTRL_RIGHT      0x00002
# define GP2X_CTRL_DOWN       0x00004
# define GP2X_CTRL_LEFT       0x00008
# define GP2X_CTRL_TRIANGLE   0x00010
# define GP2X_CTRL_CIRCLE     0x00020
# define GP2X_CTRL_CROSS      0x00040
# define GP2X_CTRL_SQUARE     0x00080
# define GP2X_CTRL_SELECT     0x00100
# define GP2X_CTRL_START      0x00200
# define GP2X_CTRL_LTRIGGER   0x00400
# define GP2X_CTRL_RTRIGGER   0x00800
# define GP2X_CTRL_FIRE       0x01000
# define GP2X_CTRL_VOLUP      0x02000
# define GP2X_CTRL_VOLDOWN    0x04000
# define GP2X_CTRL_MASK       0x07fff

# define GP2X_CTRL_A          GP2X_CTRL_SQUARE
# define GP2X_CTRL_B          GP2X_CTRL_CIRCLE
# define GP2X_CTRL_Y          GP2X_CTRL_TRIANGLE
# define GP2X_CTRL_X          GP2X_CTRL_CROSS

# define PSP_CTRL_UP         GP2X_CTRL_UP        
# define PSP_CTRL_RIGHT      GP2X_CTRL_RIGHT     
# define PSP_CTRL_DOWN       GP2X_CTRL_DOWN      
# define PSP_CTRL_LEFT       GP2X_CTRL_LEFT      
# define PSP_CTRL_TRIANGLE   GP2X_CTRL_TRIANGLE  
# define PSP_CTRL_CIRCLE     GP2X_CTRL_CIRCLE    
# define PSP_CTRL_CROSS      GP2X_CTRL_CROSS     
# define PSP_CTRL_SQUARE     GP2X_CTRL_SQUARE    
# define PSP_CTRL_SELECT     GP2X_CTRL_SELECT    
# define PSP_CTRL_START      GP2X_CTRL_START     
# define PSP_CTRL_LTRIGGER   GP2X_CTRL_LTRIGGER  
# define PSP_CTRL_RTRIGGER   GP2X_CTRL_RTRIGGER  
# define PSP_CTRL_FIRE       GP2X_CTRL_FIRE      
# define PSP_CTRL_VOLUP      GP2X_CTRL_VOLUP     
# define PSP_CTRL_VOLDOWN    GP2X_CTRL_VOLDOWN   
# define PSP_CTRL_MASK       GP2X_CTRL_MASK      

#if defined(WIZ_MODE) || defined(GP2X_MODE)

//gp2x buttons codes

#define GP2X_UP              (0)
#define GP2X_DOWN            (4)
#define GP2X_LEFT            (2)
#define GP2X_RIGHT           (6)
#define GP2X_UPLEFT          (1)
#define GP2X_UPRIGHT         (7)
#define GP2X_DOWNLEFT        (3)
#define GP2X_DOWNRIGHT       (5)

#define GP2X_A               (12)
#define GP2X_B               (13)
#define GP2X_X               (14)
#define GP2X_Y               (15)
#define GP2X_L               (10)
#define GP2X_R               (11)
#define GP2X_FIRE            (18)
#define GP2X_START           (9)        
#define GP2X_SELECT          (8)
#define GP2X_VOLUP           (16)
#define GP2X_VOLDOWN         (17)

#elif defined(DINGUX_MODE)

# if 0 // original mapping
#define GP2X_UP              (103)
#define GP2X_DOWN            (108)
#define GP2X_LEFT            (105)
#define GP2X_RIGHT           (106)
#define GP2X_UPLEFT          (-1)
#define GP2X_UPRIGHT         (-2)
#define GP2X_DOWNLEFT        (-3)
#define GP2X_DOWNRIGHT       (-4)

#define GP2X_A               (29)
#define GP2X_B               (56)
#define GP2X_X               (57)
#define GP2X_Y               (42)
#define GP2X_L               (15)
#define GP2X_R               (14)
#define GP2X_FIRE            (-5)
#define GP2X_START           (28)        
#define GP2X_SELECT          (1)
#define GP2X_VOLUP           (-6)
#define GP2X_VOLDOWN         (-7)
# endif

#define GP2X_UP              (103)
#define GP2X_DOWN            (108)
#define GP2X_LEFT            (105)
#define GP2X_RIGHT           (106)

#define GP2X_A               (42)
#define GP2X_B               (29)
#define GP2X_X               (56)
#define GP2X_Y               (57)
#define GP2X_L               (15)
#define GP2X_R               (14)
#define GP2X_START           (28)        
#define GP2X_SELECT          ( 1)

#define GP2X_UPLEFT          (-1)
#define GP2X_UPRIGHT         (-2)
#define GP2X_DOWNLEFT        (-3)
#define GP2X_DOWNRIGHT       (-4)
#define GP2X_FIRE            (-5)
#define GP2X_VOLUP           (-6)
#define GP2X_VOLDOWN         (-7)

#else

#ifdef DINGOO_NATIVE 
/* from sml/control.h */
#define CONTROL_POWER         7 /*!< the power slider (does not track the HOLD position) */

#define CONTROL_BUTTON_A      31 /*!< the A button */
#define CONTROL_BUTTON_B      21 /*!< the B button */
#define CONTROL_BUTTON_X      16 /*!< the X button; Gemei X760+ triangle */
#define CONTROL_BUTTON_Y      6  /*!< the Y button; Gemei X760+ X */
#define CONTROL_BUTTON_START  11 /*!< the START button (does not exist on the Gemei X760+) */
#define CONTROL_BUTTON_SELECT 10 /*!< the SELECT button (does not exist on the Gemei X760+) */

#define CONTROL_TRIGGER_LEFT  8  /*!< the left shoulder button (does not exist on the Gemei X760+) */
#define CONTROL_TRIGGER_RIGHT 29 /*!< the right shoulder button (does not exist on the Gemei X760+) */

#define CONTROL_DPAD_UP       20 /*!< the UP button on the directional pad */
#define CONTROL_DPAD_DOWN     27 /*!< the DOWN button on the directional pad */
#define CONTROL_DPAD_LEFT     28 /*!< the LEFT button on the directional pad */
#define CONTROL_DPAD_RIGHT    18 /*!< the RIGHT button on the directional pad */


#define GP2X_UP              (CONTROL_DPAD_UP)
#define GP2X_DOWN            (CONTROL_DPAD_DOWN)
#define GP2X_LEFT            (CONTROL_DPAD_LEFT)
#define GP2X_RIGHT           (CONTROL_DPAD_RIGHT)

/*
#define GP2X_A               (CONTROL_BUTTON_A)  Dingoo A is Y 
#define GP2X_B               (CONTROL_BUTTON_B)  Dingoo B is A 
#define GP2X_X               (CONTROL_BUTTON_X)  Dingoo X is B 
#define GP2X_Y               (CONTROL_BUTTON_Y)  Dingoo Y is X 
*/


/*
GP2X keys/buttons physical placement:

 Y
A B
 X

Dingoo buttons physical placement:

 X
Y A
 B
*/


#define GP2X_A               (CONTROL_BUTTON_Y) /* Dingoo A is Y */
#define GP2X_B               (CONTROL_BUTTON_A) /* Dingoo B is A */
#define GP2X_X               (CONTROL_BUTTON_B) /* Dingoo X is B */
#define GP2X_Y               (CONTROL_BUTTON_X) /* Dingoo Y is X */

#define GP2X_L               (CONTROL_TRIGGER_LEFT)
#define GP2X_R               (CONTROL_TRIGGER_RIGHT)
#ifndef GEMEI_X760
/* Dingoo A320 */
#define GP2X_START           (CONTROL_BUTTON_START)
#define GP2X_SELECT          (CONTROL_BUTTON_SELECT)
#else /* GEMEI_X760 */
#define GP2X_START           (CONTROL_BUTTON_X && CONTROL_DPAD_LEFT)
#define GP2X_SELECT          (CONTROL_POWER)
#endif /* GEMEI_X760 */

#define GP2X_UPLEFT          (-1)
#define GP2X_UPRIGHT         (-2)
#define GP2X_DOWNLEFT        (-3)
#define GP2X_DOWNRIGHT       (-4)
#define GP2X_FIRE            (-5)
#define GP2X_VOLUP           (-6)
#define GP2X_VOLDOWN         (-7)

#else /* DINGOO_NATIVE */


//some keys of the keyboard to emulate gp2x


#define GP2X_UPLEFT         79 //SDLK_KP7
#define GP2X_UPRIGHT        81 //SDLK_KP9

# if 0
#define GP2X_UP             80 //SDLK_KP8
#define GP2X_LEFT           83 //SDLK_KP4
#define GP2X_RIGHT          85 //SDLK_KP6
#define GP2X_DOWN           88 //SDLK_KP2
# else
#define GP2X_UP             30 //SDLK_KP8
#define GP2X_LEFT           43 //SDLK_KP4
#define GP2X_RIGHT          45 //SDLK_KP6
#define GP2X_DOWN           58 //SDLK_KP2
# endif

#define GP2X_DOWNLEFT       87 //SDLK_KP1
#define GP2X_DOWNRIGHT      89 //SDLK_KP3

# if 0
#define GP2X_A              38 //SDLK_a
#define GP2X_B              56 //SDLK_b
#define GP2X_X              53 //SDLK_x
#define GP2X_Y              29 //SDLK_y
# else
#define GP2X_A              38 //SDLK_a
#define GP2X_B              40 //SDLK_d
#define GP2X_X              53 //SDLK_x
#define GP2X_Y              25 //SDLK_w
# endif
#define GP2X_L              46 //SDLK_l
#define GP2X_R              27 //SDLK_r
#define GP2X_FIRE           65 //SDLK_SPACE
#define GP2X_START          36 //SDLK_RETURN
#define GP2X_SELECT         39  //SDLK_s
#define GP2X_VOLUP         86     //SDLK_KP_PLUS
#define GP2X_VOLDOWN       82    //SDLK_KP_MINUS
#endif /* DINGOO_NATIVE */

#endif

#define GP2X_NOEVENT -1

#define DELAY_KEY_FIRST 250
#define DELAY_KEY_REPEAT 80
    
  extern int  gp2xCtrlReadBufferPositive(gp2xCtrlData* c, int v);
  extern int  gp2xCtrlPeekBufferPositive(gp2xCtrlData* c, int v);
  extern void gp2xPowerSetClockFrequency(int freq);

# define scePowerSetClockFrequency(A,B,C) gp2xPowerSetClockFrequency((A))

  extern int  gp2xGetSoundVolume();
  extern void gp2xDecreaseVolume();
  extern void gp2xIncreaseVolume();

# if defined(GP2X_MODE)
  extern int  gp2xInsmodMMUhack();
  extern int  gp2xRmmodMMUhack();
# endif

# ifdef __cplusplus
}
# endif

# endif
