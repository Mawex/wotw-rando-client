using namespace app;

namespace app::methods::System::Threading::QueueUserWorkItemCallback {
IL2CPP_REGISTER_METHOD(0x02329510, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02329670, void, __ctor, (QueueUserWorkItemCallback * __this, WaitCallback * waitCallback, Object * stateObj, bool compressStack, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02329790, void, IThreadPoolWorkItem_ExecuteWorkItem, (QueueUserWorkItemCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (QueueUserWorkItemCallback * __this, ThreadAbortException * tae));
IL2CPP_REGISTER_METHOD(0x023298B0, void, WaitCallback_Context, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x04770C48, QueueUserWorkItemCallback_WaitCallback_Context__MethodInfo);
}
