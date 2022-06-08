#include <interception_macros.h>

namespace app::methods::KwolokBossWormSpitBehaviour {
IL2CPP_REGISTER_METHOD(0x012F9400, bool, CanCancel, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F9450, void, OnEntityInitialized, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F9610, void, OnDestroy, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F97E0, void, OnKwolokHealthReachedZero, (KwolokBossWormSpitBehaviour * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x047276B8, KwolokBossWormSpitBehaviour_OnKwolokHealthReachedZero__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012F9990, void, OnEnter, (KwolokBossWormSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012F9DF0, void, FixedUpdate, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F9E00, BehaviourStatus__Enum, OnExecute, (KwolokBossWormSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012F9F40, void, OnExit, (KwolokBossWormSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012FA290, float, ComputeUtility, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012FA450, void, OnSpawnTrigger, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04745FF0, KwolokBossWormSpitBehaviour_OnSpawnTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012FA460, void, LaunchBabySandWorm, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012FA950, bool, UpdateWorms, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012FAB40, void, ToggleCollisionEnabled, (KwolokBossWormSpitBehaviour * __this, Collider__Array * colliders1, Collider__Array * colliders2, bool enabled));
IL2CPP_REGISTER_METHOD(0x012FAD60, void, SetCurrentDirection, (KwolokBossWormSpitBehaviour * __this, KwolokBossWormSpitBehaviour_Direction__Enum dir));
IL2CPP_REGISTER_METHOD(0x012FAEC0, Vector3, GetWormSpitDirection, (KwolokBossWormSpitBehaviour * __this, KwolokBossWormSpitBehaviour_Direction__Enum dir));
IL2CPP_REGISTER_METHOD(0x01251800, void, ModifyDesiredLookAngle, (KwolokBossWormSpitBehaviour * __this, float * angle));
IL2CPP_REGISTER_METHODINFO(0x04788770, KwolokBossWormSpitBehaviour_ModifyDesiredLookAngle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012FB080, void, ClearMoveRequest, (KwolokBossWormSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012FB0E0, void, __ctor, (KwolokBossWormSpitBehaviour * __this));
}
