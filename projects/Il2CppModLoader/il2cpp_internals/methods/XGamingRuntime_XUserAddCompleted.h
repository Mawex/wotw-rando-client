using namespace app;

namespace app::methods::XGamingRuntime::XUserAddCompleted {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XUserAddCompleted * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (XUserAddCompleted * __this, int32_t hresult, XUserHandle * userHandle));
IL2CPP_REGISTER_METHOD(0x030BB4C0, IAsyncResult *, BeginInvoke, (XUserAddCompleted * __this, int32_t hresult, XUserHandle * userHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XUserAddCompleted * __this, IAsyncResult * result));
}
