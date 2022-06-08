using namespace app;

namespace app::methods::ShardLogic {
IL2CPP_REGISTER_METHOD(0x005AAD40, float, CalculateCooldown, (float cooldown, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x005AAE70, bool, ShouldPierce, (int32_t count, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x005AAFB0, bool, GetExplosionBlastDamage, (GameObject * source, IAttackable * target, AbilityType__Enum abilityType, Damage * * damage));
IL2CPP_REGISTER_METHOD(0x005AB650, int32_t, GetProjectilesCount, (AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x005AB740, float, GetProjectilesDamageMultiplier, (AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x005AB830, float, GetCurrentShardPropertyValue, (AbilityType__Enum abilityType, SpiritShardType__Enum shardType, UpgradablePropertyType__Enum propertyType));
IL2CPP_REGISTER_METHOD(0x005ABA00, bool, GetCurrentBooleanShardPropertyValue, (AbilityType__Enum abilityType, SpiritShardType__Enum shardType, UpgradablePropertyType__Enum propertyType));
IL2CPP_REGISTER_METHOD(0x005ABB20, bool, HasShardSettingsForPropertyForCurrentLevel, (AbilityType__Enum abilityType, SpiritShardType__Enum shardType, UpgradablePropertyType__Enum propertyType));
IL2CPP_REGISTER_METHOD(0x005ABCC0, float, GetCurrentlGlobalShardPropertyValue, (SpiritShardType__Enum shardType, UpgradablePropertyType__Enum propertyType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ShardLogic * __this));
}
