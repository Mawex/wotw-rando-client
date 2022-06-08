using namespace app;

namespace app::methods::MantisGrayboxEntity {
IL2CPP_REGISTER_METHOD(0x009FC180, bool, get_IgnoreGoThroughs, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC2A0, void, set_IgnoreGoThroughs, (MantisGrayboxEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009FC3F0, bool, get_MeetsRetaliationConditions, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC420, void, set_MeetsRetaliationConditions, (MantisGrayboxEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009FC450, float, get_JumpAttackCooldown, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IgnoreAllowedZonesIfFreed, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AC0, MantisSpawnType__Enum, get_SpawnType, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC480, void, set_SpawnType, (MantisGrayboxEntity * __this, MantisSpawnType__Enum value));
IL2CPP_REGISTER_METHOD(0x009FC490, void, OnPoolSpawned, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC4C0, void, OnFixedUpdate, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC530, void, ResetEntity, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC560, void, Start, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC6D0, void, ResolveDamage, (MantisGrayboxEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x009FC730, void, SetTouchDamageWeight, (MantisGrayboxEntity * __this, DamageWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x009FC750, void, ResetTouchDamageWeight, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC780, Vector3, get_CameraTargetPosition, (MantisGrayboxEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FCBA0, void, __ctor, (MantisGrayboxEntity * __this));
}
