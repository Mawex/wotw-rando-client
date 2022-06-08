using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverLimb {
IL2CPP_REGISTER_METHOD(0x02BFC570, void, MaintainRotation, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFC620, void, MaintainBend, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFC670, void, OnInitiateVirtual, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFCF00, void, OnUpdateVirtual, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFD0F0, void, OnPostSolveVirtual, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFD3E0, void, __ctor, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFD4A0, void, __ctor, (IKSolverLimb * __this, AvatarIKGoal__Enum goal));
IL2CPP_REGISTER_METHOD(0x02BFD570, IKSolverLimb_AxisDirection__Array *, get_axisDirections, (IKSolverLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BFD590, void, StoreAxisDirections, (IKSolverLimb * __this, IKSolverLimb_AxisDirection__Array * * axisDirections));
IL2CPP_REGISTER_METHOD(0x02BFDD10, Vector3, GetModifiedBendNormal, (IKSolverLimb * __this));
}
