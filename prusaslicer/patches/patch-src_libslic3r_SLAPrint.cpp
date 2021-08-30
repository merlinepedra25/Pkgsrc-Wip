$NetBSD$

Migrate away from features deprecated in tbb 2021.3.
Adapted from upstream git commit e13535f822b5efe0e3b471bc366e8d3ea96059d5.

--- src/libslic3r/SLAPrint.cpp.orig	2021-07-16 10:14:03.000000000 +0000
+++ src/libslic3r/SLAPrint.cpp
@@ -19,8 +19,6 @@
 #include <libnest2d/tools/benchmark.h>
 #endif
 
-//#include <tbb/spin_mutex.h>//#include "tbb/mutex.h"
-
 #include "I18N.hpp"
 
 //! macro used to mark string used at localization,
@@ -118,7 +116,7 @@ bool validate_pad(const TriangleMesh &pa
 
 void SLAPrint::clear()
 {
-    tbb::mutex::scoped_lock lock(this->state_mutex());
+    std::scoped_lock<std::mutex> lock(this->state_mutex());
     // The following call should stop background processing if it is running.
     this->invalidate_all_steps();
     for (SLAPrintObject *object : m_objects)
@@ -212,7 +210,7 @@ SLAPrint::ApplyStatus SLAPrint::apply(co
         update_apply_status(false);
 
     // Grab the lock for the Print / PrintObject milestones.
-    tbb::mutex::scoped_lock lock(this->state_mutex());
+    std::scoped_lock<std::mutex> lock(this->state_mutex());
 
     // The following call may stop the background processing.
     bool invalidate_all_model_objects = false;
@@ -514,7 +512,7 @@ SLAPrint::ApplyStatus SLAPrint::apply(co
 void SLAPrint::set_task(const TaskParams &params)
 {
     // Grab the lock for the Print / PrintObject milestones.
-    tbb::mutex::scoped_lock lock(this->state_mutex());
+    std::scoped_lock<std::mutex> lock(this->state_mutex());
 
     int n_object_steps = int(params.to_object_step) + 1;
     if (n_object_steps == 0)
@@ -884,7 +882,7 @@ bool SLAPrint::is_step_done(SLAPrintObje
 {
     if (m_objects.empty())
         return false;
-    tbb::mutex::scoped_lock lock(this->state_mutex());
+    std::scoped_lock<std::mutex> lock(this->state_mutex());
     for (const SLAPrintObject *object : m_objects)
         if (! object->is_step_done_unguarded(step))
             return false;
