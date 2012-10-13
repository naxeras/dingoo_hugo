/*
** fake dingux routines for dingoo native
     dingoonative.c
     dingoonative.h
-DDINGOO_NATIVE=1
*/

# ifndef _DINGOONATIVE_H_
# define _DINGOONATIVE_H_

#ifdef DINGOO_NATIVE

#define DIRSEP "\\"
#define DIRSEP_CHAR '\\'

#ifndef BUFSIZ
    #define BUFSIZ 255
#endif /*BUFSIZ */

/*
struct stat {
    int dingoo_fake;
    unsigned long  st_mtime;
    unsigned int   st_mode;
};

int stat (const char * X, struct stat *Y);

unsigned int sleep(unsigned int seconds);
*/

#else /* DINGOO_NATIVE */
    #define DIRSEP "/"
    #define DIRSEP_CHAR '/'
#endif /* DINGOO_NATIVE */

# endif /* _DINGOONATIVE_H_ */
