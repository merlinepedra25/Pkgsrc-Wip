$NetBSD$

--- base/process/process_unittest.cc.orig	2020-07-08 21:40:31.000000000 +0000
+++ base/process/process_unittest.cc
@@ -148,7 +148,7 @@ TEST_F(ProcessTest, CreationTimeOtherPro
   // was spawned and a time recorded after it was spawned. However, since the
   // base::Time and process creation clocks don't match, tolerate some error.
   constexpr base::TimeDelta kTolerance =
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       // On Linux, process creation time is relative to boot time which has a
       // 1-second resolution. Tolerate 1 second for the imprecise boot time and
       // 100 ms for the imprecise clock.
