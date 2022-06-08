using namespace app;

namespace app::methods::System::Threading::ThreadPool {
IL2CPP_REGISTER_METHOD(0x023449C0, void, GetAvailableThreads, (int32_t * workerThreads, int32_t * completionPortThreads));
IL2CPP_REGISTER_METHOD(0x023449D0, RegisteredWaitHandle *, RegisterWaitForSingleObject, (WaitHandle * waitObject, WaitOrTimerCallback * callBack, Object * state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce, StackCrawlMark__Enum * stackMark, bool compressStack));
IL2CPP_REGISTER_METHODINFO(0x04748568, ThreadPool_RegisterWaitForSingleObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02344F20, RegisteredWaitHandle *, RegisterWaitForSingleObject, (WaitHandle * waitObject, WaitOrTimerCallback * callBack, Object * state, int32_t millisecondsTimeOutInterval, bool executeOnlyOnce));
IL2CPP_REGISTER_METHODINFO(0x047770E0, ThreadPool_RegisterWaitForSingleObject_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02345040, RegisteredWaitHandle *, RegisterWaitForSingleObject, (WaitHandle * waitObject, WaitOrTimerCallback * callBack, Object * state, TimeSpan timeout, bool executeOnlyOnce));
IL2CPP_REGISTER_METHODINFO(0x0475E0F8, ThreadPool_RegisterWaitForSingleObject_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023451E0, bool, QueueUserWorkItem, (WaitCallback * callBack, Object * state));
IL2CPP_REGISTER_METHOD(0x02345210, bool, QueueUserWorkItem, (WaitCallback * callBack));
IL2CPP_REGISTER_METHOD(0x02345240, bool, UnsafeQueueUserWorkItem, (WaitCallback * callBack, Object * state));
IL2CPP_REGISTER_METHOD(0x02345270, bool, QueueUserWorkItemHelper, (WaitCallback * callBack, Object * state, StackCrawlMark__Enum * stackMark, bool compressStack));
IL2CPP_REGISTER_METHODINFO(0x04733B58, ThreadPool_QueueUserWorkItemHelper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02345550, void, UnsafeQueueCustomWorkItem, (IThreadPoolWorkItem * workItem, bool forceGlobal));
IL2CPP_REGISTER_METHOD(0x02345650, bool, TryPopCustomWorkItem, (IThreadPoolWorkItem * workItem));
IL2CPP_REGISTER_METHOD(0x02345810, IEnumerable_1_System_Threading_IThreadPoolWorkItem_ *, GetQueuedWorkItems, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02345920, IEnumerable_1_System_Threading_IThreadPoolWorkItem_ *, EnumerateQueuedWorkItems, (ThreadPoolWorkQueue_WorkStealingQueue__Array * wsQueues, ThreadPoolWorkQueue_QueueSegment * globalQueueTail));
IL2CPP_REGISTER_METHOD(0x02345AC0, bool, RequestWorkerThread, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02345AF0, void, EnsureVMInitialized, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023449C0, void, GetAvailableThreadsNative, (int32_t * workerThreads, int32_t * completionPortThreads));
IL2CPP_REGISTER_METHOD(0x02345DF0, bool, NotifyWorkItemComplete, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0173D7D0, void, ReportThreadStatus, (bool isWorking));
IL2CPP_REGISTER_METHOD(0x02345E70, void, NotifyWorkItemProgress, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023461E0, void, NotifyWorkItemProgressNative, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsThreadPoolHosted, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02346270, void, InitializeVMTp, (bool * enableWorkerTracking));
}
