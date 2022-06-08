#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossFight1FeatherFlurryBehaviour {
IL2CPP_REGISTER_METHOD(0x01766FA0, bool, get_TookTooMuchDamage, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0065FBA0, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0065FBC0, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01766FC0, void, CopyData, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x01767130, void, OnEntityInitialized, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01767580, void, OnEnter, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01767920, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01767A20, void, OnExit, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01767D90, void, OnDamageReceived, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this, DamageResult damage));
IL2CPP_REGISTER_METHODINFO(0x0475D408, PetrifiedOwlBossFight1FeatherFlurryBehaviour_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01767DD0, void, OnShootEvent, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04716110, PetrifiedOwlBossFight1FeatherFlurryBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01768080, void, __ctor, (PetrifiedOwlBossFight1FeatherFlurryBehaviour * __this));
}
