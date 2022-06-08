using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverLookAt_LookAtBone {
IL2CPP_REGISTER_METHOD(0x02A066F0, void, __ctor, (IKSolverLookAt_LookAtBone * __this));
IL2CPP_REGISTER_METHOD(0x02C02360, void, __ctor, (IKSolverLookAt_LookAtBone * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02C02390, void, Initiate, (IKSolverLookAt_LookAtBone * __this, Transform * root));
IL2CPP_REGISTER_METHOD(0x02C02560, void, LookAt, (IKSolverLookAt_LookAtBone * __this, Vector3 direction, float weight));
IL2CPP_REGISTER_METHOD(0x02C02A40, Vector3, get_forward, (IKSolverLookAt_LookAtBone * __this));
}
