using namespace app;

namespace app::methods::PetrifiedOwlBossDiveBombHorizontalBehaviour {
IL2CPP_REGISTER_METHOD(0x00418200, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F2B0, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F2C0, void, CopyData, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x0049F3D0, void, InitializeCancellableController, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F440, void, OnEntityInitialized, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049F9B0, void, OnEnter, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FA60, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FB60, void, OnExit, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FBA0, void, ModifyDesiredDamageDirectionMode, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this, DamageDealer_DamageDirectionMode__Enum * mode));
IL2CPP_REGISTER_METHOD(0x0049FBB0, Enum__Array *, GetEntries, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049FC50, Enum, Evaluate, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0049FCF0, void, __ctor, (PetrifiedOwlBossDiveBombHorizontalBehaviour * __this));
}
