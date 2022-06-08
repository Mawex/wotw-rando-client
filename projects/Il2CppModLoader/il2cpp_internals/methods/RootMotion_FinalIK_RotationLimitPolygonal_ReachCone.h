using namespace app;

namespace app::methods::RootMotion::FinalIK::RotationLimitPolygonal_ReachCone {
IL2CPP_REGISTER_METHOD(0x02A25710, Vector3, get_o, (RotationLimitPolygonal_ReachCone * __this));
IL2CPP_REGISTER_METHOD(0x02A25760, Vector3, get_a, (RotationLimitPolygonal_ReachCone * __this));
IL2CPP_REGISTER_METHOD(0x02A257B0, Vector3, get_b, (RotationLimitPolygonal_ReachCone * __this));
IL2CPP_REGISTER_METHOD(0x02A25800, Vector3, get_c, (RotationLimitPolygonal_ReachCone * __this));
IL2CPP_REGISTER_METHOD(0x02A25850, void, __ctor, (RotationLimitPolygonal_ReachCone * __this, Vector3 _o, Vector3 _a, Vector3 _b, Vector3 _c));
IL2CPP_REGISTER_METHOD(0x02A25A60, bool, get_isValid, (RotationLimitPolygonal_ReachCone * __this));
IL2CPP_REGISTER_METHOD(0x02A25A70, void, Calculate, (RotationLimitPolygonal_ReachCone * __this));
}
