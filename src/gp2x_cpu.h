
#if defined(GP2X_MODE)
#include "cpugp2x.h"
#elif defined(WIZ_MODE)
#include "cpuwiz.h"
#elif defined(DINGUX_MODE) || defined(DINGOO_NATIVE)
#include "cpudingux.h"
#else
#include "cpuno.h"
#endif
