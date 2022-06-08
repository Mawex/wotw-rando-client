#include <interception_macros.h>

namespace app::methods::ChakramProjectile {
IL2CPP_REGISTER_METHOD(0x0103CD30, void, Awake, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103CEB0, void, OnDisable, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103CFA0, void, Initialize, (ChakramProjectile * __this, SeinChakramSpell * seinChakramSpell));
IL2CPP_REGISTER_METHOD(0x0103D280, void, FixedUpdate, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103D300, void, ChangeState, (ChakramProjectile * __this, ChakramProjectile_ChakramState__Enum state));
IL2CPP_REGISTER_METHOD(0x0103D970, void, UpdateForward, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103E050, void, UpdateHold, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103E230, void, UpdateSpin, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103E840, void, UpdateReturn, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103F220, bool, TrySpin, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103F350, void, TryStayCloseToTarget, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103F880, void, ExplodeProjectile, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103FB70, void, OnRicochet, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0103FCE0, void, OnDamageDealt, (ChakramProjectile * __this, DamageDealer * damageDealer, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x01040060, IBowAttackable *, GetClosestTarget, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x010406F0, void, PlayVfx, (ChakramProjectile * __this, Projectile_ExplodeCollisionInfo * collision));
IL2CPP_REGISTER_METHOD(0x01040890, void, PlayVfx, (ChakramProjectile * __this, Vector3 location, Vector2 normal, SurfaceMaterialType__Enum surfaceMaterialType));
IL2CPP_REGISTER_METHOD(0x01040A00, void, UpdateDamage, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x01040AA0, void, SetDamageOwner, (ChakramProjectile * __this, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x01040AD0, void, OnTriggerEnter, (ChakramProjectile * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x01040C90, void, DestroyProjectile, (ChakramProjectile * __this));
IL2CPP_REGISTER_METHOD(0x01040DA0, void, __ctor, (ChakramProjectile * __this));
}
