#include <interception_macros.h>

namespace app::methods::HornBugBossJumpBehaviour {
IL2CPP_REGISTER_METHOD(0x00B65480, void, SetupTimelines, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B65EB0, void, PlayTimeline, (HornBugBossJumpBehaviour * __this, MoonTimeline * timeline, float timeScale));
IL2CPP_REGISTER_METHOD(0x00B65F10, bool, Update2, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B661F0, void, OnStopEvent, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047481E8, HornBugBossJumpBehaviour_OnStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B666B0, void, PlayTakeOff, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B667A0, void, Flip, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047794E8, HornBugBossJumpBehaviour_Flip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B667F0, void, UpdateJumpTarget, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B670F0, void, UpdateJumpSpeed, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B67490, Vector3, get_OriginalTarget, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B674B0, void, set_OriginalTarget, (HornBugBossJumpBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00B41E60, int32_t, get_AmountOfBounces, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B674D0, void, set_AmountOfBounces, (HornBugBossJumpBehaviour * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00B674E0, void, OnValidate, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B674F0, void, OnEntityInitialized, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B675F0, void, OnEnter, (HornBugBossJumpBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageDealt, (HornBugBossJumpBehaviour * __this, DamageDealer * arg1, DamageResult arg2));
IL2CPP_REGISTER_METHODINFO(0x047448F0, HornBugBossJumpBehaviour_OnDamageDealt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B67940, BehaviourStatus__Enum, OnExecute, (HornBugBossJumpBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B67980, void, OnExit, (HornBugBossJumpBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B67D30, void, SpawnImpactEffect, (HornBugBossJumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B682C0, void, __ctor, (HornBugBossJumpBehaviour * __this));
}
