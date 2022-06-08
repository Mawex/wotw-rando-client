using namespace app;

namespace app::methods::RootMotion::FinalIK::RotationLimitPolygonal {
IL2CPP_REGISTER_METHOD(0x02A220F0, void, OpenUserManual, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A221B0, void, OpenScriptReference, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A22270, void, SupportGroup, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A22330, void, ASThread, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A223F0, void, SetLimitPoints, (RotationLimitPolygonal * __this, RotationLimitPolygonal_LimitPoint__Array * points));
IL2CPP_REGISTER_METHOD(0x02A224B0, Quaternion, LimitRotation, (RotationLimitPolygonal * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A225A0, void, Start, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A228A0, void, ResetToDefault, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A23930, void, BuildReachCones, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A241B0, Vector3__Array *, SmoothPoints, (RotationLimitPolygonal * __this));
IL2CPP_REGISTER_METHOD(0x02A249C0, float, GetScalar, (RotationLimitPolygonal * __this, int32_t k));
IL2CPP_REGISTER_METHOD(0x02A24A10, Vector3, PointToTangentPlane, (RotationLimitPolygonal * __this, Vector3 p, float r));
IL2CPP_REGISTER_METHOD(0x02A24BC0, Vector3, TangentPointToSphere, (RotationLimitPolygonal * __this, Vector3 q, float r));
IL2CPP_REGISTER_METHOD(0x02A24DB0, Quaternion, LimitSwing, (RotationLimitPolygonal * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A252C0, int32_t, GetReachCone, (RotationLimitPolygonal * __this, Vector3 L));
IL2CPP_REGISTER_METHOD(0x02A255B0, void, __ctor, (RotationLimitPolygonal * __this));
}
