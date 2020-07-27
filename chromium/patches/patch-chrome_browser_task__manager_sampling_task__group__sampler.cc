$NetBSD$

--- chrome/browser/task_manager/sampling/task_group_sampler.cc.orig	2020-07-08 21:40:35.000000000 +0000
+++ chrome/browser/task_manager/sampling/task_group_sampler.cc
@@ -43,7 +43,7 @@ TaskGroupSampler::TaskGroupSampler(
     const OnCpuRefreshCallback& on_cpu_refresh,
     const OnSwappedMemRefreshCallback& on_swapped_mem_refresh,
     const OnIdleWakeupsCallback& on_idle_wakeups,
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
     const OnOpenFdCountCallback& on_open_fd_count,
 #endif  // defined(OS_LINUX) || defined(OS_MACOSX)
     const OnProcessPriorityCallback& on_process_priority)
@@ -53,7 +53,7 @@ TaskGroupSampler::TaskGroupSampler(
       on_cpu_refresh_callback_(on_cpu_refresh),
       on_swapped_mem_refresh_callback_(on_swapped_mem_refresh),
       on_idle_wakeups_callback_(on_idle_wakeups),
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
       on_open_fd_count_callback_(on_open_fd_count),
 #endif  // defined(OS_LINUX) || defined(OS_MACOSX)
       on_process_priority_callback_(on_process_priority) {
@@ -85,7 +85,7 @@ void TaskGroupSampler::Refresh(int64_t r
         base::BindOnce(on_swapped_mem_refresh_callback_));
   }
 
-#if defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   if (TaskManagerObserver::IsResourceRefreshEnabled(REFRESH_TYPE_IDLE_WAKEUPS,
                                                     refresh_flags)) {
     base::PostTaskAndReplyWithResult(
@@ -95,7 +95,7 @@ void TaskGroupSampler::Refresh(int64_t r
   }
 #endif  // defined(OS_MACOSX) || defined(OS_LINUX)
 
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
   if (TaskManagerObserver::IsResourceRefreshEnabled(REFRESH_TYPE_FD_COUNT,
                                                     refresh_flags)) {
     base::PostTaskAndReplyWithResult(
@@ -145,7 +145,7 @@ int TaskGroupSampler::RefreshIdleWakeups
   return process_metrics_->GetIdleWakeupsPerSecond();
 }
 
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
 int TaskGroupSampler::RefreshOpenFdCount() {
   DCHECK(worker_pool_sequenced_checker_.CalledOnValidSequence());
 
