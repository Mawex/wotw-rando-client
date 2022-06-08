using namespace app;

namespace app::methods::System::UnhandledExceptionEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnhandledExceptionEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UnhandledExceptionEventHandler * __this, Object * sender, UnhandledExceptionEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UnhandledExceptionEventHandler * __this, Object * sender, UnhandledExceptionEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnhandledExceptionEventHandler * __this, IAsyncResult * result));
}
