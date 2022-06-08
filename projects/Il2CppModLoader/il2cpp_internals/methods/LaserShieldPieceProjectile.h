#include <interception_macros.h>

namespace app::methods::LaserShieldPieceProjectile {
IL2CPP_REGISTER_METHOD(0x00F0ABC0, int32_t, get_Count, ());
IL2CPP_REGISTER_METHOD(0x00F0AC70, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00F0AD50, float, get_CurrentZRotation, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanGoThroughPortals, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0AE40, void, Awake, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0AF60, void, OnEnable, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0B030, void, OnRecieveDamage, (LaserShieldPieceProjectile * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00F0B600, void, FixedUpdate, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0BCF0, void, UpdateVelocity, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0BFC0, void, UpdateAttackMode, (LaserShieldPieceProjectile * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F0C130, void, UpdateRepairMode, (LaserShieldPieceProjectile * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F0C9E0, void, OnDisable, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0CAB0, void, SetRepairMode, (LaserShieldPieceProjectile * __this, LaserShieldRotationController * shieldController, Transform * target, int32_t ringIndex, int32_t pieceModelIndex, int32_t connectedPieceIndex, Vector3 initialDirection));
IL2CPP_REGISTER_METHOD(0x00F0CFD0, void, SetAttackMode, (LaserShieldPieceProjectile * __this, LaserShieldRotationController * shieldController, Vector3 direction, int32_t ringIndex, int32_t pieceModelIndex, int32_t connectedPieceIndex));
IL2CPP_REGISTER_METHOD(0x00C75390, void, OnGoThroughPortal, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0D080, void, OnDamageDealt, (LaserShieldPieceProjectile * __this, DamageDealer * damageDealer, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x00F0D0F0, void, CallExplode, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0D110, void, SetRotation, (LaserShieldPieceProjectile * __this, float zRotation));
IL2CPP_REGISTER_METHOD(0x00F0D1C0, void, ShowAll, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0D2C0, void, HideAll, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0D3C0, void, Show, (LaserShieldPieceProjectile * __this, int32_t ringIndex, int32_t pieceIndex));
IL2CPP_REGISTER_METHOD(0x00F0D500, void, SetMode, (LaserShieldPieceProjectile * __this, LaserShieldPieceProjectile_Mode__Enum mode));
IL2CPP_REGISTER_METHOD(0x00F0D5D0, void, OnCollisionEnter, (LaserShieldPieceProjectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00F0D750, void, OnCollisionStay, (LaserShieldPieceProjectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00F0D8C0, bool, DidHitTowardsMovement, (LaserShieldPieceProjectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00F0DAA0, void, OnStuckStateEnter, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0DC50, void, OnPoolDespawned, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0DCC0, void, ClearOscilation, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0DDD0, void, ApplyStuckOscilation, (LaserShieldPieceProjectile * __this, float strength));
IL2CPP_REGISTER_METHOD(0x00F09DC0, void, SpawnEffect, (LaserShieldPieceProjectile * __this, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x00F0E0C0, void, __ctor, (LaserShieldPieceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00F0E510, void, __cctor, ());
}
