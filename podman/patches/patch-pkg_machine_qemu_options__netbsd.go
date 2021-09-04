$NetBSD$

--- pkg/machine/qemu/options_netbsd.go.orig	2021-09-04 13:34:34.955121865 +0000
+++ pkg/machine/qemu/options_netbsd.go
@@ -0,0 +1,13 @@
+package qemu
+
+import (
+	"os"
+)
+
+func getRuntimeDir() (string, error) {
+	tmpDir, ok := os.LookupEnv("TMPDIR")
+	if !ok {
+		tmpDir = "/tmp"
+	}
+	return tmpDir, nil
+}
