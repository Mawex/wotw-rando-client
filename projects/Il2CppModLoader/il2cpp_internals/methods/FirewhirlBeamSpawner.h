#include <interception_macros.h>

namespace app::methods::FirewhirlBeamSpawner {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (FirewhirlBeamSpawner * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, SuspendableMask__Enum, get_Mask, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x012626F0, void, set_Mask, (FirewhirlBeamSpawner * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, GetPrewarmAmount, (FirewhirlBeamSpawner * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x012627A0, void, Awake, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01262B90, void, Start, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01262DA0, void, OnDisable, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01262DB0, void, OnDestroy, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263110, void, OnPostRestoreCheckpoint, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHODINFO(0x04745C20, FirewhirlBeamSpawner_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01263120, void, FixedUpdate, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263210, void, UpdateCastSound, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263390, void, PlayCastSound, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263480, void, StopCastSound, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263570, void, Spawn, (FirewhirlBeamSpawner * __this, Vector3 position, Vector3 direction, bool inAir_NOTUSED));
IL2CPP_REGISTER_METHOD(0x012636E0, void, UpdateBeamDamageDealing, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263B40, void, ClearBeams, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01263D40, void, UpdateSpawningBeams, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x012644F0, void, DealDamage, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01264840, Damage *, GetDamage, (FirewhirlBeamSpawner * __this, GameObject * targetObject));
IL2CPP_REGISTER_METHOD(0x01264BD0, void, DealDamageToObject, (FirewhirlBeamSpawner * __this, IDamageReciever * receiver, GameObject * targetObject));
IL2CPP_REGISTER_METHOD(0x01264DA0, void, DealDamageToObject, (FirewhirlBeamSpawner * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x01265080, bool, PointInsideListOfRect, (FirewhirlBeamSpawner * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x012651B0, void, OnDamageTrigger, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHODINFO(0x04742438, FirewhirlBeamSpawner_OnDamageTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012651F0, void, SpawnAreaDamage, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01265840, void, UpdateLightTranform, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x012661A0, void, OnDrawGizmos, (FirewhirlBeamSpawner * __this));
IL2CPP_REGISTER_METHOD(0x01266250, void, __ctor, (FirewhirlBeamSpawner * __this));
}
