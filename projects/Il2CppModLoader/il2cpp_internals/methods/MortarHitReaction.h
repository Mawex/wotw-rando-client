#include <interception_macros.h>

namespace app::methods::MortarHitReaction {
IL2CPP_REGISTER_METHOD(0x0147D580, void, OnInitializeTask, (MortarHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147D650, void, OnEnterTask, (MortarHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147D7C0, BehaviourStatus__Enum, OnExecuteTask, (MortarHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147D870, void, OnExitTask, (MortarHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147D8A0, void, OnResetTask, (MortarHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147D8D0, void, HandleReasonToNotInterrupt, (MortarHitReaction * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x0147DA50, void, PlayAdditiveTimeline, (MortarHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x0147DD80, void, __ctor, (MortarHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, _PlayAdditiveTimeline_b__9_1, (MortarHitReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x047403F8, MortarHitReaction__PlayAdditiveTimeline_b__9_1__MethodInfo);
}
