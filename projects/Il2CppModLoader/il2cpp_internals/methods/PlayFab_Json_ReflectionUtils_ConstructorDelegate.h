#include <interception_macros.h>

namespace app::methods::PlayFab_Json::ReflectionUtils_ConstructorDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::Object__Array * args));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::Object__Array * args, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::IAsyncResult * result));
}
