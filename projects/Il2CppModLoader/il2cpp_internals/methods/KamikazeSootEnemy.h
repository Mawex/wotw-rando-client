#include <interception_macros.h>

namespace app::methods::KamikazeSootEnemy {
IL2CPP_REGISTER_METHOD(0x00E60AA0, bool, CanBeOptimized, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E60AE0, void, ForceAttackPlayer, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E60B30, bool, DamageTypeIsBash, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047703F8, KamikazeSootEnemy_DamageTypeIsBash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E60C80, void, Start, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E62640, void, OnModifyDamage, (KamikazeSootEnemy * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0476FE48, KamikazeSootEnemy_OnModifyDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E628A0, void, FixedUpdate, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0093E970, void, OnTimedRespawn, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E62B60, void, UpdateRotation, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E62D40, void, AccelerateForwards, (KamikazeSootEnemy * __this, float acceleration, float maxSpeed));
IL2CPP_REGISTER_METHOD(0x00E62E00, void, ApplyGravity, (KamikazeSootEnemy * __this, float gravity, float maxFallSpeed));
IL2CPP_REGISTER_METHOD(0x00E62E70, void, Decelerate, (KamikazeSootEnemy * __this, float deceleration));
IL2CPP_REGISTER_METHOD(0x00E62ED0, void, OnWallCollision, (KamikazeSootEnemy * __this, Vector3 normal, float strength, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x0476DEA8, KamikazeSootEnemy_OnWallCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E62EE0, void, OnGroundCollision, (KamikazeSootEnemy * __this, Vector3 normal, float strength, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x0470CE08, KamikazeSootEnemy_OnGroundCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E62F00, void, OnDamageDealt, (KamikazeSootEnemy * __this, DamageDealer * dealer, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04729668, KamikazeSootEnemy_OnDamageDealt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E63040, void, SelfDestruct, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E63420, bool, InRange, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04727CA8, KamikazeSootEnemy_InRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E635B0, bool, OutOfRange, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E63660, void, __ctor, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E637B0, void, _Start_b__14_0, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047896A8, KamikazeSootEnemy__Start_b__14_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00728F70, bool, _Start_b__14_1, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04780100, KamikazeSootEnemy__Start_b__14_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E63810, bool, _Start_b__14_2, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B0D0, KamikazeSootEnemy__Start_b__14_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E63860, void, _Start_b__14_3, (KamikazeSootEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04724068, KamikazeSootEnemy__Start_b__14_3__MethodInfo);
}
