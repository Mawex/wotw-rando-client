#include <interception_macros.h>

namespace app::methods::UnityEngine::RaycastHit {
IL2CPP_REGISTER_METHOD(0x00244650, Collider *, get_collider, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_point, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_point, (app::RaycastHit__Boxed * this_ptr, app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_normal, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_normal, (app::RaycastHit__Boxed * this_ptr, app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x00244660, Vector3, get_barycentricCoordinate, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x002446A0, float, get_distance, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00122E20, void, set_distance, (app::RaycastHit__Boxed * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x001EB420, int32_t, get_triangleIndex, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x030AB350, Vector2, CalculateRaycastTexCoord, (app::Collider * collider, app::Vector2 uv, app::Vector3 pos, uint32_t face, int32_t textcoord));
IL2CPP_REGISTER_METHOD(0x002446B0, Vector2, get_textureCoord, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x002446C0, Vector2, get_textureCoord2, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x002446D0, Vector2, get_textureCoord1, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x002446F0, Transform *, get_transform, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00244700, Rigidbody *, get_rigidbody, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00244710, Vector2, get_lightmapCoord, (app::RaycastHit__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x030ABA30, void, CalculateRaycastTexCoord_Injected, (app::Collider * collider, app::Vector2 * uv, app::Vector3 * pos, uint32_t face, int32_t textcoord, app::Vector2 * ret));
}
