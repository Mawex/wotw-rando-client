using namespace app;

namespace app::methods::RootMotion::FinalIK::GrounderIK {
IL2CPP_REGISTER_METHOD(0x02069C80, void, OpenUserManual, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x02069D40, void, OpenScriptReference, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x02069E00, void, ResetPosition, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x02069E20, bool, IsReadyToInitiate, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x02069FF0, void, OnDisable, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x0206A190, void, Update, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x0206A640, void, Initiate, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x0206AE30, void, OnSolverUpdate, (GrounderIK * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EC10, GrounderIK_OnSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0206B290, void, SetLegIK, (GrounderIK * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0206B4E0, void, OnPostSolverUpdate, (GrounderIK * __this));
IL2CPP_REGISTER_METHODINFO(0x0472FE28, GrounderIK_OnPostSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0206B810, void, OnDestroy, (GrounderIK * __this));
IL2CPP_REGISTER_METHOD(0x0206BBC0, void, __ctor, (GrounderIK * __this));
}
