using namespace app;

namespace app::methods::Moon::IkLimbPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (IkLimbPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B11E70, void, CacheSolver, (IkLimbPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B11F00, void, Awake, (IkLimbPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B12030, void, OnDrawGizmosSelected, (IkLimbPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B12AD0, void, Process, (IkLimbPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B13220, float, RayFracToPlane, (Vector3 rayOrigin, Vector3 rayDir, Vector3 planePoint, Vector3 planeNormal));
IL2CPP_REGISTER_METHOD(0x01B133E0, Vector3, RayPlaneIntersection, (Vector3 rayOrigin, Vector3 rayDir, Vector3 planePoint, Vector3 planeNormal));
IL2CPP_REGISTER_METHOD(0x01B13680, bool, PerformCachedCast, (IkLimbPostprocess * __this, Vector3 castOrigin, Vector3 castDir, float castDist, Vector3 * surfacePoint, Vector3 * surfaceNormal));
IL2CPP_REGISTER_METHOD(0x01B13930, void, CacheCast, (IkLimbPostprocess * __this, Vector3 castOrigin, Vector3 castDir, Vector3 surfacePoint, Vector3 surfaceNormal));
IL2CPP_REGISTER_METHOD(0x01B139A0, void, Cast, (IkLimbPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B140F0, float, ComputeGroundWeight, (IkLimbPostprocess * __this, Vector3 localPosition));
IL2CPP_REGISTER_METHOD(0x01B14200, Vector3, Perpendicular3, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x01B14250, void, __ctor, (IkLimbPostprocess * __this));
}
