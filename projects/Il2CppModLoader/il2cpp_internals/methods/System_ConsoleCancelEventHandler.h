using namespace app;

namespace app::methods::System::ConsoleCancelEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ConsoleCancelEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (ConsoleCancelEventHandler * __this, Object * sender, ConsoleCancelEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (ConsoleCancelEventHandler * __this, Object * sender, ConsoleCancelEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ConsoleCancelEventHandler * __this, IAsyncResult * result));
}
