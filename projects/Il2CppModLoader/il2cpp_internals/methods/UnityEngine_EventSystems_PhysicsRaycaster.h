#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::PhysicsRaycaster {
IL2CPP_REGISTER_METHOD(0x01F215C0, void, __ctor, (PhysicsRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x01F21C90, Camera *, get_eventCamera, (PhysicsRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x01F21DA0, int32_t, get_depth, (PhysicsRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x01F21EE0, int32_t, get_finalEventMask, (PhysicsRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x01F22020, LayerMask, get_eventMask, (PhysicsRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_eventMask, (PhysicsRaycaster * __this, LayerMask value));
IL2CPP_REGISTER_METHOD(0x01F22030, int32_t, get_maxRayIntersections, (PhysicsRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_maxRayIntersections, (PhysicsRaycaster * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F22040, bool, ComputeRayAndDistance, (PhysicsRaycaster * __this, PointerEventData * eventData, Ray * ray, int32_t * eventDisplayIndex, float * distanceToClipPlane));
IL2CPP_REGISTER_METHOD(0x01F225E0, void, Raycast, (PhysicsRaycaster * __this, PointerEventData * eventData, List_1_UnityEngine_EventSystems_RaycastResult_ * resultAppendList));
IL2CPP_REGISTER_METHOD(0x01F22CE0, int32_t, _Raycast_m__0, (RaycastHit r1, RaycastHit r2));
IL2CPP_REGISTER_METHODINFO(0x04743C80, PhysicsRaycaster__Raycast_m__0__MethodInfo);
}
