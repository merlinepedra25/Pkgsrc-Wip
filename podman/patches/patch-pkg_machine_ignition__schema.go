$NetBSD$

--- pkg/machine/ignition_schema.go.orig	2021-08-30 19:15:26.000000000 +0000
+++ pkg/machine/ignition_schema.go
@@ -1,4 +1,4 @@
-// +build amd64,linux arm64,linux amd64,darwin arm64,darwin
+// +build amd64,!windows arm64,!windows
 
 package machine
 
