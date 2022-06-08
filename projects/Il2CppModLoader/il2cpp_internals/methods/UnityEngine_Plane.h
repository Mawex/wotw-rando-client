using namespace app;

namespace app::methods::UnityEngine::Plane {
IL2CPP_REGISTER_METHOD(0x00216460, void, __ctor, (Plane__Boxed * __this, Vector3 inNormal, Vector3 inPoint));
IL2CPP_REGISTER_METHOD(0x002164A0, void, __ctor, (Plane__Boxed * __this, Vector3 a, Vector3 b, Vector3 c));
IL2CPP_REGISTER_METHOD(0x00216500, float, GetDistanceToPoint, (Plane__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00216530, bool, Raycast, (Plane__Boxed * __this, Ray ray, float * enter));
IL2CPP_REGISTER_METHOD(0x00216560, String *, ToString, (Plane__Boxed * __this));
}
