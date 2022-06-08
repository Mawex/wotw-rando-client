using namespace app;

namespace app::methods::System::Threading::WaitCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (WaitCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (WaitCallback * __this, Object * state));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (WaitCallback * __this, Object * state, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (WaitCallback * __this, IAsyncResult * result));
}
