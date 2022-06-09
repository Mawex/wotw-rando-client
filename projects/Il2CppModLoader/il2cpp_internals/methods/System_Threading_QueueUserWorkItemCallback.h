#include <interception_macros.h>

namespace app::methods::System_Threading::QueueUserWorkItemCallback {
    IL2CPP_REGISTER_METHOD(0x02329510, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x02329670, void, __ctor, (app::QueueUserWorkItemCallback * this_ptr, app::WaitCallback * wait_callback, app::Object * state_obj, bool compress_stack, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x02329790, void, IThreadPoolWorkItem_ExecuteWorkItem, (app::QueueUserWorkItemCallback * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (app::QueueUserWorkItemCallback * this_ptr, app::ThreadAbortException * tae));
    IL2CPP_REGISTER_METHOD(0x023298B0, void, WaitCallback_Context, (app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x04770C48, QueueUserWorkItemCallback_WaitCallback_Context__MethodInfo);
}
