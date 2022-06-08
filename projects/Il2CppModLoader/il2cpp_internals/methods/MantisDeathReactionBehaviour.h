#include <interception_macros.h>

namespace app::methods::MantisDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x009F7B20, void, OnInitializeTask, (MantisDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F7E10, void, StartDeathTimeline, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009F7FA0, void, StartTimeline, (MantisDeathReactionBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x009F7FE0, void, StopCurrentTimeline, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009F80E0, void, EndReaction, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047738C8, MantisDeathReactionBehaviour_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F8120, void, OnEnterTask, (MantisDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F84E0, BehaviourStatus__Enum, OnExecuteTask, (MantisDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F8640, void, OnExitTask, (MantisDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F8650, void, SetState, (MantisDeathReactionBehaviour * __this, MantisDeathReactionBehaviour_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x009F8BB0, void, UpdateState, (MantisDeathReactionBehaviour * __this, MantisDeathReactionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x009F8D00, void, EnterDrown, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009F9120, bool, InWater, (MantisDeathReactionBehaviour * __this, float checkOffset));
IL2CPP_REGISTER_METHOD(0x009F92F0, void, UpdateDrown, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009F9530, Vector3, ProcessRootMotion, (MantisDeathReactionBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x009F9580, void, __ctor, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009F9660, void, _OnInitializeTask_b__28_0, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04798680, MantisDeathReactionBehaviour__OnInitializeTask_b__28_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F96A0, void, _SetState_b__36_0, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04783CD0, MantisDeathReactionBehaviour__SetState_b__36_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F80E0, void, _EnterDrown_b__38_0, (MantisDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04719598, MantisDeathReactionBehaviour__EnterDrown_b__38_0__MethodInfo);
}
