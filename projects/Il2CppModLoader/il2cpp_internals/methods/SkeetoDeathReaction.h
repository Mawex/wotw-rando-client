#include <interception_macros.h>

namespace app::methods::SkeetoDeathReaction {
IL2CPP_REGISTER_METHOD(0x0074DC90, SkeetoLocomotion *, get_Locomotion, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074DD70, void, OnCacheSerializedComponents, (SkeetoDeathReaction * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x0074DE50, void, OnInitializeTask, (SkeetoDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074DFE0, void, ResetTimeline, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074E240, void, OnHitGround, (SkeetoDeathReaction * __this, Vector3 pos, Collider * col));
IL2CPP_REGISTER_METHOD(0x0074E250, void, StartDeathTimeline, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074E3E0, void, OnLanded, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074E4D0, void, OnEnterTask, (SkeetoDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074E850, void, OnFinishedDeathStart, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04743DA0, SkeetoDeathReaction_OnFinishedDeathStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0074E3E0, void, EndReaction, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04751138, SkeetoDeathReaction_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0074E890, BehaviourStatus__Enum, OnExecuteTask, (SkeetoDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074EA50, void, OnExitTask, (SkeetoDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074EAA0, void, EnterDrown, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074EFA0, void, ExitDrown, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074EFB0, bool, InWater, (SkeetoDeathReaction * __this, float checkOffset));
IL2CPP_REGISTER_METHOD(0x0074F1A0, void, UpdateDrown, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0074F3E0, void, StartTimeline, (SkeetoDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0074F410, void, ResetTimeline, (SkeetoDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0074F630, void, __ctor, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, _EnterDrown_b__30_0, (SkeetoDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04751AA8, SkeetoDeathReaction__EnterDrown_b__30_0__MethodInfo);
}
