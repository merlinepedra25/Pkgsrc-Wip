$NetBSD$

--- media/base/scopedfd_helper.h.orig	2020-07-08 21:40:45.000000000 +0000
+++ media/base/scopedfd_helper.h
@@ -14,7 +14,7 @@ namespace media {
 // since the only current user is V4L2 we are limiting the scope to OS_LINUX so
 // the binary size does not inflate on non-using systems. Feel free to adapt
 // this and BUILD.gn as our needs evolve.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 
 // Return a new vector containing duplicates of |fds|, or PCHECKs in case of an
 // error.