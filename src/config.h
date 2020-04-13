#ifndef GISH_CONFIG_H
#define GISH_CONFIG_H

#define DISABLE_AUDIO
#define DISABLE_OGG
#define SDL2

#ifdef __linux__
 #define LINUX 1
#endif

#ifdef _WIN32
  #define WINDOWS 1
#endif

#ifdef NXDK
  #define XBOX 1
#endif

#ifdef __APPLE__
  #define MAC 1
#endif

#ifdef MAC
  #define __MACOSX__
#endif

#ifdef WINDOWS
  #define INLINE _inline
#else
  #define INLINE inline
#endif

#ifdef XBOX
  #define chdir(...) 0 //FIXME: !!!
  #define SDL_GL_SwapBuffers(...) assert(0)
#endif

#ifndef PATH_MAX
#define PATH_MAX 256
#endif

#ifndef min
#define min(x1,x2) ((x1) > (x2) ? (x2):(x1))
#endif

#ifndef max
#define max(x1,x2) ((x1) > (x2) ? (x1):(x2))
#endif

typedef enum {FALSE = 0, TRUE = 1} bool;

#endif /* GISH_CONFIG_H */
