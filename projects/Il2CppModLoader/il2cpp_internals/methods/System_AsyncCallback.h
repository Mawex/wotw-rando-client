using namespace app;

namespace app::methods::System::AsyncCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AsyncCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (AsyncCallback * __this, IAsyncResult * ar));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (AsyncCallback * __this, IAsyncResult * ar, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AsyncCallback * __this, IAsyncResult * result));
}
