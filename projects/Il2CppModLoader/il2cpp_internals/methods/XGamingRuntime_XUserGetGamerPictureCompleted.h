#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XUserGetGamerPictureCompleted {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XUserGetGamerPictureCompleted * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (XUserGetGamerPictureCompleted * __this, int32_t hresult, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x030BB660, IAsyncResult *, BeginInvoke, (XUserGetGamerPictureCompleted * __this, int32_t hresult, Byte__Array * buffer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XUserGetGamerPictureCompleted * __this, IAsyncResult * result));
}
