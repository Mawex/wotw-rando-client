#include <interception_macros.h>

namespace app::methods::PlayFab::Json::ReflectionUtils_SetDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ReflectionUtils_SetDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (ReflectionUtils_SetDelegate * __this, Object * source, Object * value));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (ReflectionUtils_SetDelegate * __this, Object * source, Object * value, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ReflectionUtils_SetDelegate * __this, IAsyncResult * result));
}
