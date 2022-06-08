#include <interception_macros.h>

namespace app::methods::UnityEngine::RaycastHit {
IL2CPP_REGISTER_METHOD(0x00244650, Collider *, get_collider, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_point, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_point, (RaycastHit__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_normal, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_normal, (RaycastHit__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00244660, Vector3, get_barycentricCoordinate, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002446A0, float, get_distance, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00122E20, void, set_distance, (RaycastHit__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001EB420, int32_t, get_triangleIndex, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x030AB350, Vector2, CalculateRaycastTexCoord, (Collider * collider, Vector2 uv, Vector3 pos, uint32_t face, int32_t textcoord));
IL2CPP_REGISTER_METHOD(0x002446B0, Vector2, get_textureCoord, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002446C0, Vector2, get_textureCoord2, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002446D0, Vector2, get_textureCoord1, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002446F0, Transform *, get_transform, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00244700, Rigidbody *, get_rigidbody, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00244710, Vector2, get_lightmapCoord, (RaycastHit__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x030ABA30, void, CalculateRaycastTexCoord_Injected, (Collider * collider, Vector2 * uv, Vector3 * pos, uint32_t face, int32_t textcoord, Vector2 * ret));
}
