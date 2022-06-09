#include <interception_macros.h>

namespace app::methods::PlayFab_Json::ReflectionUtils_GetDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ReflectionUtils_GetDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (app::ReflectionUtils_GetDelegate * this_ptr, app::Object * source));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::ReflectionUtils_GetDelegate * this_ptr, app::Object * source, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (app::ReflectionUtils_GetDelegate * this_ptr, app::IAsyncResult * result));
}
