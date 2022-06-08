using namespace app;

namespace app::methods::XGamingRuntime::XUserChangeEventCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XUserChangeEventCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (XUserChangeEventCallback * __this, XUserLocalId userLocalId, XUserChangeEvent__Enum eventType));
IL2CPP_REGISTER_METHOD(0x030BB590, IAsyncResult *, BeginInvoke, (XUserChangeEventCallback * __this, XUserLocalId userLocalId, XUserChangeEvent__Enum eventType, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XUserChangeEventCallback * __this, IAsyncResult * result));
}
