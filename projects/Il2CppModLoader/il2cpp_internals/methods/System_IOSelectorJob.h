using namespace app;

namespace app::methods::System::IOSelectorJob {
IL2CPP_REGISTER_METHOD(0x0200ADC0, void, __ctor, (IOSelectorJob * __this, IOOperation__Enum operation, IOAsyncCallback * callback, IOAsyncResult * state));
IL2CPP_REGISTER_METHOD(0x0200ADD0, void, IThreadPoolWorkItem_ExecuteWorkItem, (IOSelectorJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (IOSelectorJob * __this, ThreadAbortException * tae));
IL2CPP_REGISTER_METHOD(0x0200AE00, void, MarkDisposed, (IOSelectorJob * __this));
}
