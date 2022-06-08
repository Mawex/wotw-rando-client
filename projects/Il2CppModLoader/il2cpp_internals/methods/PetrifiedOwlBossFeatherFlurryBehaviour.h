#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossFeatherFlurryBehaviour {
IL2CPP_REGISTER_METHOD(0x01763DD0, Vector3, get_AttackPosition, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01763F60, void, CopyData, (PetrifiedOwlBossFeatherFlurryBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017640F0, void, OnEnter, (PetrifiedOwlBossFeatherFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x017644B0, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossFeatherFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01764520, void, OnExit, (PetrifiedOwlBossFeatherFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01764800, void, OnShootEvent, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04760510, PetrifiedOwlBossFeatherFlurryBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01764AB0, void, SpawnFlurryCone, (int32_t totalProj, int32_t uniformDistributedProj, Vector3 origin, Vector3 target, Vector3 leftBound, Vector3 rightBound, Vector2 speedRange, float gravity, float damage, ProjectileSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x01765130, Projectile *, SpawnProjectile, (Vector2 shootPoint, Vector3 shootVelocity, ProjectileSpawner * spawner, float gravity, float damage));
IL2CPP_REGISTER_METHOD(0x01765350, Enum__Array *, GetEntries, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017653F0, Enum, Evaluate, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01765490, void, __ctor, (PetrifiedOwlBossFeatherFlurryBehaviour * __this));
}
