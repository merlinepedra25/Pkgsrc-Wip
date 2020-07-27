$NetBSD$

--- chrome/browser/ui/views/frame/system_menu_model_delegate.cc.orig	2020-07-08 21:40:36.000000000 +0000
+++ chrome/browser/ui/views/frame/system_menu_model_delegate.cc
@@ -15,7 +15,7 @@
 #include "components/sessions/core/tab_restore_service.h"
 #include "ui/base/l10n/l10n_util.h"
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 #include "chrome/common/pref_names.h"
 #include "components/prefs/pref_service.h"
 #endif
@@ -30,7 +30,7 @@ SystemMenuModelDelegate::SystemMenuModel
 SystemMenuModelDelegate::~SystemMenuModelDelegate() {}
 
 bool SystemMenuModelDelegate::IsCommandIdChecked(int command_id) const {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   if (command_id == IDC_USE_SYSTEM_TITLE_BAR) {
     PrefService* prefs = browser_->profile()->GetPrefs();
     return !prefs->GetBoolean(prefs::kUseCustomChromeFrame);
@@ -44,7 +44,7 @@ bool SystemMenuModelDelegate::IsCommandI
 }
 
 bool SystemMenuModelDelegate::IsCommandIdVisible(int command_id) const {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   bool is_maximized = browser_->window()->IsMaximized();
   switch (command_id) {
     case IDC_MAXIMIZE_WINDOW:
