$NetBSD$

From graphics/mesa-dri: update to 18.3.1

https://reviews.freebsd.org/D17872

--- src/amd/vulkan/radv_device.c.orig	2019-03-30 17:05:31.000000000 +0000
+++ src/amd/vulkan/radv_device.c
@@ -49,6 +49,14 @@
 #include "util/debug.h"
 #include "util/mesa-sha1.h"
 
+#ifndef CLOCK_MONOTONIC_RAW
+# ifdef CLOCK_MONOTONIC_FAST
+#  define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC_FAST
+# else
+#  define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
+# endif
+#endif
+
 static int
 radv_device_get_cache_uuid(enum radeon_family family, void *uuid)
 {
