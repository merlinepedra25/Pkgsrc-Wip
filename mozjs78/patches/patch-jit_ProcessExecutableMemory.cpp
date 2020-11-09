$NetBSD: patch-jit_ProcessExecutableMemory.cpp,v 1.1 2020/11/05 16:35:25 nia Exp $

PaX MPROTECT safety for NetBSD.

--- jit/ProcessExecutableMemory.cpp.orig	2020-09-25 09:22:55.000000000 +0000
+++ jit/ProcessExecutableMemory.cpp
@@ -362,9 +362,16 @@ static void* ReserveProcessExecutableMem
   // Note that randomAddr is just a hint: if the address is not available
   // mmap will pick a different address.
   void* randomAddr = ComputeRandomAllocationAddress();
+#ifdef MPROTECT
+  void* p = MozTaggedAnonymousMmap(randomAddr, bytes,
+                                   PROT_MPROTECT(PROT_EXEC | PROT_WRITE | PROT_READ), 
+                                   MAP_NORESERVE | MAP_PRIVATE | MAP_ANON, -1,
+                                   0, "js-executable-memory");
+#else
   void* p = MozTaggedAnonymousMmap(randomAddr, bytes, PROT_NONE,
                                    MAP_NORESERVE | MAP_PRIVATE | MAP_ANON, -1,
                                    0, "js-executable-memory");
+#endif
   if (p == MAP_FAILED) {
     return nullptr;
   }
@@ -409,8 +416,12 @@ static unsigned ProtectionSettingToFlags
 
 static MOZ_MUST_USE bool CommitPages(void* addr, size_t bytes,
                                      ProtectionSetting protection) {
-  void* p = MozTaggedAnonymousMmap(
-      addr, bytes, ProtectionSettingToFlags(protection),
+  void* p = MozTaggedAnonymousMmap(addr, bytes,
+#ifdef PROT_MPROTECT
+      ProtectionSettingToFlags(protection) | PROT_MPROTECT(PROT_EXEC | PROT_WRITE | PROT_READ),
+#else
+      ProtectionSettingToFlags(protection),
+#endif
       MAP_FIXED | MAP_PRIVATE | MAP_ANON, -1, 0, "js-executable-memory");
   if (p == MAP_FAILED) {
     return false;
