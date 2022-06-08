#include <interception_macros.h>

namespace app::methods::PiranhaHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00418200, EntityDamageEvent *, get_DamageEvent, (PiranhaHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008760C0, void, set_DamageEvent, (PiranhaHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x0115EFC0, void, HandleReasonToNotInterrupt, (PiranhaHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x0115F260, void, OnInitializeTask, (PiranhaHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115F330, void, OnEnterTask, (PiranhaHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (PiranhaHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115F790, void, OnExitTask, (PiranhaHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115F7D0, void, PlayTimeline, (PiranhaHitReactionBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x0115F910, void, ResetTimeline, (PiranhaHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (PiranhaHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0115FA00, void, __ctor, (PiranhaHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, _OnEnterTask_b__11_0, (PiranhaHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047523C8, PiranhaHitReactionBehaviour__OnEnterTask_b__11_0__MethodInfo);
}
