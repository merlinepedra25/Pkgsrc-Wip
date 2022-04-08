$NetBSD$

pthread_setname_np() on NetBSD is not the same as on FreeBSD and OpenBSD.

--- lib/FXThread.cpp.orig	2022-02-15 03:49:40.000000000 +0000
+++ lib/FXThread.cpp
@@ -911,7 +911,7 @@ FXbool FXThread::description(const FXStr
     return 0<=fxSetThreadDescription((HANDLE)tid,udesc);
 #elif defined(__APPLE__)
     return pthread_setname_np(desc.text())==0;
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__)
     pthread_setname_np((pthread_t)tid,desc.text());
     return true;
 #elif defined(HAVE_PTHREAD_SETNAME_NP)
