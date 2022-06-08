#include <interception_macros.h>

namespace app::methods::System::Threading::SemaphoreSlim_TaskNode {
IL2CPP_REGISTER_METHOD(0x0232D090, void, __ctor, (SemaphoreSlim_TaskNode * __this));
IL2CPP_REGISTER_METHOD(0x0232D1C0, void, IThreadPoolWorkItem_ExecuteWorkItem, (SemaphoreSlim_TaskNode * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (SemaphoreSlim_TaskNode * __this, ThreadAbortException * tae));
}
