#include <interception_macros.h>

namespace app::methods::Moon::LizardDodgeRollBehaviour {
IL2CPP_REGISTER_METHOD(0x01104240, void, OnEnter, (LizardDodgeRollBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00754B80, void, Finished, (LizardDodgeRollBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04794398, LizardDodgeRollBehaviour_Finished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecute, (LizardDodgeRollBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011045F0, void, OnExit, (LizardDodgeRollBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, RootMotionRollBackModifier, (LizardDodgeRollBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (LizardDodgeRollBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01104640, bool, IsBlockingInterruption, (LizardDodgeRollBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x01104680, void, __ctor, (LizardDodgeRollBehaviour * __this));
}
