#include <interception_macros.h>

namespace app::methods::BugHornEntity {
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x00805AB0, void, EffectsPrefabInstantiation, (BugHornEntity * __this, List_1_DynamicInstantiationDescriptor_ * instantiations));
IL2CPP_REGISTER_METHOD(0x00805CF0, bool, get_IsFluttering, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805D00, bool, get_WasFLutteringInterrupted, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805D10, bool, get_CanRam, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805EC0, bool, get_CanFlutter, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805ED0, void, set_CanFlutter, (BugHornEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00805EE0, bool, get_CanHaveShield, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805F90, bool, get_IsProtectedByShield, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805FA0, bool, get_HasShield, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805FB0, void, SetVariationType, (BugHornEntity * __this, BugHornEntity_BugHornType__Enum variationType));
IL2CPP_REGISTER_METHOD(0x00806030, void, ResolveDamage, (BugHornEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x008061F0, void, ResetEntity, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806430, void, EnableGroundLocomotion, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806440, void, EnableAirLocomotion, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806450, Locomotion *, GetActiveLocomotion, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806440, void, OnFlutteringTakeOffEnded, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806430, void, OnFlutteringLandEnded, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806430, void, OnFlutteringSlamReachedGround, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFlutteringSlamEnded, (BugHornEntity * __this, float duration));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DisableHorn, (BugHornEntity * __this, BugHornEntity_HornSettings settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnableHorn, (BugHornEntity * __this, BugHornEntity_HornSettings setting));
IL2CPP_REGISTER_METHOD(0x00806480, void, OnFlutteringInterrupted, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x00806490, void, OnShotDownFallStarted, (BugHornEntity * __this));
IL2CPP_REGISTER_METHOD(0x008064B0, void, SpawnSlamChargeEffect, (BugHornEntity * __this, float damage, DamageWeight__Enum weight));
IL2CPP_REGISTER_METHOD(0x00807610, GameObject *, SpawnSlamChargeEffect, (BugHornEntity * __this, GameObject * prefab, Vector3 position, Quaternion rotation, float damage, DamageWeight__Enum weight, Transform * forceDirectionPosition));
IL2CPP_REGISTER_METHOD(0x00807800, void, SpawnSlamChargeEffectDistortion, (BugHornEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x008079B0, void, __ctor, (BugHornEntity * __this));
}
