using namespace app;

namespace app::methods::SpiderBossLocomotionTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x011B6B40, SpiderBossEntity *, get_SpiderBoss, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B6C10, bool, get_ShouldDoTurning, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B6D10, void, PlayAnimation, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, CanCancel, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00AB0300, void, OnCanFinishEnd, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ECC8, SpiderBossLocomotionTurningBehaviour_OnCanFinishEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, OnCanFinishStart, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C968, SpiderBossLocomotionTurningBehaviour_OnCanFinishStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B7260, bool, ShouldEndBehaviour, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B7290, void, OnExitTask, (SpiderBossLocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (SpiderBossLocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B7390, bool, ShouldPauseLocomotion, (SpiderBossLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B73A0, void, __ctor, (SpiderBossLocomotionTurningBehaviour * __this));
}
