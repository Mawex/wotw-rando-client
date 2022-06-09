#include <interception_macros.h>

namespace app::methods::System_Threading::ThreadPoolWorkQueue {
IL2CPP_REGISTER_METHOD(0x02346BA0, void, __ctor, (app::ThreadPoolWorkQueue * this_ptr));
IL2CPP_REGISTER_METHOD(0x02346D00, ThreadPoolWorkQueueThreadLocals *, EnsureCurrentThreadHasQueue, (app::ThreadPoolWorkQueue * this_ptr));
IL2CPP_REGISTER_METHOD(0x02346F00, void, EnsureThreadRequested, (app::ThreadPoolWorkQueue * this_ptr));
IL2CPP_REGISTER_METHOD(0x02347000, void, MarkThreadRequestSatisfied, (app::ThreadPoolWorkQueue * this_ptr));
IL2CPP_REGISTER_METHOD(0x02347030, void, Enqueue, (app::ThreadPoolWorkQueue * this_ptr, app::IThreadPoolWorkItem * callback, bool force_global));
IL2CPP_REGISTER_METHOD(0x02347310, bool, LocalFindAndPop, (app::ThreadPoolWorkQueue * this_ptr, app::IThreadPoolWorkItem * callback));
IL2CPP_REGISTER_METHOD(0x02347400, void, Dequeue, (app::ThreadPoolWorkQueue * this_ptr, app::ThreadPoolWorkQueueThreadLocals * tl, app::IThreadPoolWorkItem * * callback, app::bool * missed_steal));
IL2CPP_REGISTER_METHOD(0x02347680, bool, Dispatch, ());
IL2CPP_REGISTER_METHOD(0x02347AB0, void, __cctor, ());
}
