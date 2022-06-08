using namespace app;

namespace app::methods::SpiderBossLaserAttack {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHOD(0x011AFCB0, bool, get_IsAttacking, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHOD(0x011AFDF0, void, OnEnter, (SpiderBossLaserAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B03A0, void, StartAttack, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHOD(0x011B0510, void, StopAttack, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHOD(0x011B0660, BehaviourStatus__Enum, OnExecute, (SpiderBossLaserAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B0750, void, OnExit, (SpiderBossLaserAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B0DB0, void, UpdateAngle, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHOD(0x011B0F00, void, UpdateAiming, (SpiderBossLaserAttack * __this, float angle));
IL2CPP_REGISTER_METHOD(0x011B0FB0, void, InstantiateChargeFX, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x04716D18, SpiderBossLaserAttack_InstantiateChargeFX__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B1390, void, DestroyChargeFX, (SpiderBossLaserAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x04777788, SpiderBossLaserAttack_DestroyChargeFX__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B1480, void, __ctor, (SpiderBossLaserAttack * __this));
}
