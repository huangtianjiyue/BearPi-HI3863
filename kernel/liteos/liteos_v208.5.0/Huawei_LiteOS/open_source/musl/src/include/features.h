#ifndef FEATURES_H
#define FEATURES_H

#include "../../include/features.h"

#ifdef __LITEOS__
#define weak
#else
#define weak __attribute__((__weak__))
#endif
#define hidden __attribute__((__visibility__("hidden")))
#define weak_alias(old, new) \
	extern __typeof(old) new __attribute__((__weak__, __alias__(#old)))

#endif