#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::ReflectionMethodsCache_RaycastAllCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02666910, RaycastHit__Array *, Invoke, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::Ray r, float f, int32_t i));
IL2CPP_REGISTER_METHOD(0x02668490, IAsyncResult *, BeginInvoke, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::Ray r, float f, int32_t i, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, RaycastHit__Array *, EndInvoke, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::IAsyncResult * result));
}
