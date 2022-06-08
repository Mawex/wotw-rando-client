using namespace app;

namespace app::methods::System::Threading::ThreadPoolWorkQueue {
IL2CPP_REGISTER_METHOD(0x02346BA0, void, __ctor, (ThreadPoolWorkQueue * __this));
IL2CPP_REGISTER_METHOD(0x02346D00, ThreadPoolWorkQueueThreadLocals *, EnsureCurrentThreadHasQueue, (ThreadPoolWorkQueue * __this));
IL2CPP_REGISTER_METHOD(0x02346F00, void, EnsureThreadRequested, (ThreadPoolWorkQueue * __this));
IL2CPP_REGISTER_METHOD(0x02347000, void, MarkThreadRequestSatisfied, (ThreadPoolWorkQueue * __this));
IL2CPP_REGISTER_METHOD(0x02347030, void, Enqueue, (ThreadPoolWorkQueue * __this, IThreadPoolWorkItem * callback, bool forceGlobal));
IL2CPP_REGISTER_METHOD(0x02347310, bool, LocalFindAndPop, (ThreadPoolWorkQueue * __this, IThreadPoolWorkItem * callback));
IL2CPP_REGISTER_METHOD(0x02347400, void, Dequeue, (ThreadPoolWorkQueue * __this, ThreadPoolWorkQueueThreadLocals * tl, IThreadPoolWorkItem * * callback, bool * missedSteal));
IL2CPP_REGISTER_METHOD(0x02347680, bool, Dispatch, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02347AB0, void, __cctor, (MethodInfo * method));
}
