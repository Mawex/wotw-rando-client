#include <interception_macros.h>

namespace app::methods::SpiderBossLaserAttackCeiling {
IL2CPP_REGISTER_METHOD(0x011B1490, void, OnEnter, (SpiderBossLaserAttackCeiling * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B1820, BehaviourStatus__Enum, OnExecute, (SpiderBossLaserAttackCeiling * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B1840, void, OnExit, (SpiderBossLaserAttackCeiling * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B1B60, void, InitializeCancellableController, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHOD(0x011B1BD0, void, InitializeHitReactionController, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHOD(0x011B1C40, void, ChangeState, (SpiderBossLaserAttackCeiling * __this, SpiderBossLaserAttackCeiling_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateState, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHOD(0x011B1CA0, void, OnEnterTransition, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHOD(0x011B1CD0, void, OnEnterShootAndEnd, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHOD(0x011B1D00, void, OnTransitionTimelineEnded, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHODINFO(0x04790318, SpiderBossLaserAttackCeiling_OnTransitionTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B1D40, void, OnShootAndDescendTimelineEnded, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHODINFO(0x04732AA0, SpiderBossLaserAttackCeiling_OnShootAndDescendTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B1D60, void, UpdateAiming, (SpiderBossLaserAttackCeiling * __this, float angle));
IL2CPP_REGISTER_METHOD(0x011B1EC0, void, StartAttack, (SpiderBossLaserAttackCeiling * __this));
IL2CPP_REGISTER_METHOD(0x011B1480, void, __ctor, (SpiderBossLaserAttackCeiling * __this));
}
