#include <interception_macros.h>

namespace app::methods::UnityEngine::Bounds {
IL2CPP_REGISTER_METHOD(0x001EB560, void, __ctor, (Bounds__Boxed * __this, Vector3 center, Vector3 size));
IL2CPP_REGISTER_METHOD(0x001EB5A0, int32_t, GetHashCode, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB5B0, bool, Equals, (Bounds__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x001EB5C0, bool, Equals, (Bounds__Boxed * __this, Bounds other));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_center, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_center, (Bounds__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB620, Vector3, get_size, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB650, void, set_size, (Bounds__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_extents, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_extents, (Bounds__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB6B0, Vector3, get_min, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB6E0, void, set_min, (Bounds__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB740, Vector3, get_max, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB770, void, set_max, (Bounds__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x024202F0, bool, operator___, (Bounds lhs, Bounds rhs));
IL2CPP_REGISTER_METHOD(0x02420430, bool, operator___, (Bounds lhs, Bounds rhs));
IL2CPP_REGISTER_METHOD(0x001EB7D0, void, SetMinMax, (Bounds__Boxed * __this, Vector3 min, Vector3 max));
IL2CPP_REGISTER_METHOD(0x001EB810, void, Encapsulate, (Bounds__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x001EB840, void, Encapsulate, (Bounds__Boxed * __this, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x001EB870, void, Expand, (Bounds__Boxed * __this, float amount));
IL2CPP_REGISTER_METHOD(0x001EB880, void, Expand, (Bounds__Boxed * __this, Vector3 amount));
IL2CPP_REGISTER_METHOD(0x001EB8B0, bool, Intersects, (Bounds__Boxed * __this, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x001EB8E0, bool, IntersectRay, (Bounds__Boxed * __this, Ray ray, float * distance));
IL2CPP_REGISTER_METHOD(0x001EB970, String *, ToString, (Bounds__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBB10, bool, Contains, (Bounds__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x001EBB80, float, SqrDistance, (Bounds__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x02420E40, bool, IntersectRayAABB, (Ray ray, Bounds bounds, float * dist));
IL2CPP_REGISTER_METHOD(0x001EBBF0, Vector3, ClosestPoint, (Bounds__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x02420EB0, bool, Contains_Injected, (Bounds * _unity_self, Vector3 * point));
IL2CPP_REGISTER_METHOD(0x02420F10, float, SqrDistance_Injected, (Bounds * _unity_self, Vector3 * point));
IL2CPP_REGISTER_METHOD(0x02420F70, bool, IntersectRayAABB_Injected, (Ray * ray, Bounds * bounds, float * dist));
IL2CPP_REGISTER_METHOD(0x02420FE0, void, ClosestPoint_Injected, (Bounds * _unity_self, Vector3 * point, Vector3 * ret));
}
