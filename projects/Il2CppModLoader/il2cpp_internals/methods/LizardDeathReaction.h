using namespace app;

namespace app::methods::LizardDeathReaction {
IL2CPP_REGISTER_METHOD(0x00FA9E50, void, OnCacheSerializedComponents, (LizardDeathReaction * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00FA9F10, void, OnInitializeTask, (LizardDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAA080, void, StartTimeline, (LizardDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00FAA0B0, void, ResetTimeline, (LizardDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00FAA2D0, void, OnEnterTask, (LizardDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAA9E0, BehaviourStatus__Enum, OnExecuteTask, (LizardDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAABA0, void, OnExitTask, (LizardDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAABF0, void, SetState, (LizardDeathReaction * __this, LizardDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00FAACB0, void, EnterState, (LizardDeathReaction * __this, LizardDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00FAAD20, void, ExitState, (LizardDeathReaction * __this, LizardDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00FAAD50, void, UpdateState, (LizardDeathReaction * __this, LizardDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00FAAF90, void, EnterLaunch, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB120, void, EnterSpin, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB150, void, EnterLand, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB2E0, void, EnterDrown, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitLaunch, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitSpin, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitLand, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitDrown, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB710, void, UpdateLaunch, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB790, void, UpdateSpin, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB7F0, bool, DidLand, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB8D0, void, UpdateLand, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAB9B0, bool, InWater, (LizardDeathReaction * __this, float checkOffset));
IL2CPP_REGISTER_METHOD(0x00FABB80, void, UpdateDrown, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FABDB0, Vector3, ProcessRootMotion, (LizardDeathReaction * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x00FABDC0, void, EndReaction, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FABE80, void, __ctor, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FABF40, void, _EnterLaunch_b__40_0, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E600, LizardDeathReaction__EnterLaunch_b__40_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FABFB0, void, _EnterLand_b__42_0, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x047950D0, LizardDeathReaction__EnterLand_b__42_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FABFB0, void, _EnterDrown_b__43_0, (LizardDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04785728, LizardDeathReaction__EnterDrown_b__43_0__MethodInfo);
}
