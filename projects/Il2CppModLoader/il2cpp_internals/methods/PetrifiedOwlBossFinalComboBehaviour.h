using namespace app;

namespace app::methods::PetrifiedOwlBossFinalComboBehaviour {
IL2CPP_REGISTER_METHOD(0x0068A180, bool, CanSpawnSeekers, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01396CD0, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176CE70, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176CE80, void, OnEntityInitialized, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176DB20, void, OnEnter, (PetrifiedOwlBossFinalComboBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0176DCB0, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossFinalComboBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0176DF20, void, OnExit, (PetrifiedOwlBossFinalComboBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0176DF60, void, ModifyDesiredDamageDirectionMode, (PetrifiedOwlBossFinalComboBehaviour * __this, DamageDealer_DamageDirectionMode__Enum * mode));
IL2CPP_REGISTER_METHOD(0x0176DFC0, bool, CanTakeDamage, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176E000, Vector3, RandomOffsetPosition, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176E320, void, UpdateShooting, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176E4C0, void, Shoot, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176E890, Projectile *, SpawnProjectile, (PetrifiedOwlBossFinalComboBehaviour * __this, Vector2 shootPoint, Vector3 shootVelocity, float gravity, float damage, ProjectileSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x0176EAC0, Enum__Array *, GetEntries, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176EB60, Enum, Evaluate, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossFinalComboBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176EC00, void, __ctor, (PetrifiedOwlBossFinalComboBehaviour * __this));
}
