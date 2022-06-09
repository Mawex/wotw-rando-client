#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::ReflectionMethodsCache_GetRayIntersectionAllCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02666910, RaycastHit2D__Array *, Invoke, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::Ray r, float f, int32_t i));
IL2CPP_REGISTER_METHOD(0x02666E70, IAsyncResult *, BeginInvoke, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::Ray r, float f, int32_t i, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, RaycastHit2D__Array *, EndInvoke, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::IAsyncResult * result));
}
