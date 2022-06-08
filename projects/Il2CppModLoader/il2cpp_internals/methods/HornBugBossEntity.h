using namespace app;

namespace app::methods::HornBugBossEntity {
IL2CPP_REGISTER_METHOD(0x00B62280, void, BlockedHitEffectPrefabInstantiation, (HornBugBossEntity * __this, List_1_DynamicInstantiationDescriptor_ * instantiations));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B62400, float, GetFacingDistToPoint, (HornBugBossEntity * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00B62580, float, get_FwdWallDist, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B62710, float, get_BwdWallDist, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B628A0, bool, get_IsOnScreen, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B62A20, bool, ShouldShowHealthBar, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0477C6D8, HornBugBossEntity_ShouldShowHealthBar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B62B20, void, OnAwake, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00443C10, void, OnDeathFinished, (HornBugBossEntity * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04733AC0, HornBugBossEntity_OnDeathFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B62D60, void, Start, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B62E70, void, DisableSelfCollision, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B62F80, void, Initialize, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B632C0, void, OnDestroy, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B63370, void, OnEnable, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B63460, void, OnDisable, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B63470, void, ResetLocomotion, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B635F0, void, DeactivateBoss, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B636F0, void, OnDied, (HornBugBossEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00B637F0, void, OnDamageBlocked, (HornBugBossEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00B63980, void, OnPostRestoreCheckpoint, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B63B30, void, OnFixedUpdate, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B64040, void, ResolveDamage, (HornBugBossEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00B64210, Vector3, get_TargetPosition, (HornBugBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B642E0, void, UpdateCrossDependentCooldowns, (HornBugBossEntity * __this, HornbugBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00B64480, void, HornbugBaseBehaviourEntered, (HornBugBossEntity * __this, HornbugBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00B64500, void, HornbugBaseBehaviourExecuted, (HornBugBossEntity * __this, HornbugBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00B64510, void, HornbugBaseBehaviourExited, (HornBugBossEntity * __this, HornbugBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00B645F0, float, GetUtilityForBehaviour, (HornBugBossEntity * __this, HornbugBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00B64D40, void, __ctor, (HornBugBossEntity * __this));
}
