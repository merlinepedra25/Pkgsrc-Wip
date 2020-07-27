$NetBSD$

--- net/disk_cache/blockfile/disk_format.h.orig	2020-07-15 18:56:00.000000000 +0000
+++ net/disk_cache/blockfile/disk_format.h
@@ -149,7 +149,9 @@ struct RankingsNode {
 };
 #pragma pack(pop)
 
+#if !defined(OS_BSD)
 static_assert(sizeof(RankingsNode) == 36, "bad RankingsNode");
+#endif
 
 }  // namespace disk_cache
 
