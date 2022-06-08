#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ReflectionMethodsCache_GetRayIntersectionAllCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02666910, RaycastHit2D__Array *, Invoke, (ReflectionMethodsCache_GetRayIntersectionAllCallback * __this, Ray r, float f, int32_t i));
IL2CPP_REGISTER_METHOD(0x02666E70, IAsyncResult *, BeginInvoke, (ReflectionMethodsCache_GetRayIntersectionAllCallback * __this, Ray r, float f, int32_t i, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, RaycastHit2D__Array *, EndInvoke, (ReflectionMethodsCache_GetRayIntersectionAllCallback * __this, IAsyncResult * result));
}
