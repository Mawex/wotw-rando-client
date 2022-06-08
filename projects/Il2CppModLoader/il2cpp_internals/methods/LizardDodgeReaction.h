#include <interception_macros.h>

namespace app::methods::LizardDodgeReaction {
IL2CPP_REGISTER_METHOD(0x00FAC100, void, OnInitializeTask, (LizardDodgeReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAC1C0, void, OnEnterTask, (LizardDodgeReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (LizardDodgeReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAC3F0, void, OnExitTask, (LizardDodgeReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (LizardDodgeReaction * __this));
IL2CPP_REGISTER_METHOD(0x00FAC420, bool, CanInterrupt, (LizardDodgeReaction * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00FAC430, void, StartDodgeRoll, (LizardDodgeReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, RootMotionRollBackModifier, (LizardDodgeReaction * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04787ED0, LizardDodgeReaction_RootMotionRollBackModifier__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FAC740, void, __ctor, (LizardDodgeReaction * __this));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, _StartDodgeRoll_b__14_0, (LizardDodgeReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x0472DCC0, LizardDodgeReaction__StartDodgeRoll_b__14_0__MethodInfo);
}
