#include "auto-config.h"
#include "alpha/xm-alpha.h"
#include "alpha/xm-linux.h"

#define bcopy(a,b,c) memcpy (b,a,c)
#define bzero(a,b) memset (a,0,b)
#define bcmp(a,b,c) memcmp (a,b,c)

#define index strchr
#define rindex strrchr

#define DEFAULT_TARGET_VERSION  "2.8.1"
#if 0
#define DEFAULT_TARGET_MACHINE  "ns32k"
#define PREFIX "/ns32k"
#endif
#define DEFAULT_TARGET_MACHINE  "i386"

#define    strcasecmp      stricmp
