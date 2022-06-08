#include <interception_macros.h>

namespace app::methods::PlayFab::Json::ReflectionUtils_GetDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ReflectionUtils_GetDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (ReflectionUtils_GetDelegate * __this, Object * source));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (ReflectionUtils_GetDelegate * __this, Object * source, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (ReflectionUtils_GetDelegate * __this, IAsyncResult * result));
}
