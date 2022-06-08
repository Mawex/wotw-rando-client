using namespace app;

namespace app::methods::PetrifiedOwlBossDiveBombVerticalBehaviour {
IL2CPP_REGISTER_METHOD(0x00418200, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F2B0, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x004A0B60, void, CopyData, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x004A0C70, void, OnEntityInitialized, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F3D0, void, InitializeCancellableController, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F9B0, void, OnEnter, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FA60, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FB60, void, OnExit, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FBA0, void, ModifyDesiredDamageDirectionMode, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this, DamageDealer_DamageDirectionMode__Enum * mode));
IL2CPP_REGISTER_METHOD(0x004A11E0, Enum__Array *, GetEntries, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x004A1280, Enum, Evaluate, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x004A1320, void, __ctor, (PetrifiedOwlBossDiveBombVerticalBehaviour * __this));
}
