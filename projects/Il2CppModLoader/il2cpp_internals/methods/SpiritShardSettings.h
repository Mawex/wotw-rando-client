#include <interception_macros.h>

namespace app::methods::SpiritShardSettings {
IL2CPP_REGISTER_METHOD(0x00D68D90, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00D68E30, void, Awake, (SpiritShardSettings * __this));
IL2CPP_REGISTER_METHOD(0x00D69060, void, OnDestroy, (SpiritShardSettings * __this));
IL2CPP_REGISTER_METHOD(0x00D69110, bool, HasProperSettings, (SpiritShardSettings * __this, SpiritShardType__Enum shardType, UpgradablePropertyType__Enum propertyType));
IL2CPP_REGISTER_METHOD(0x00D69230, bool, HasSettingsForAbility, (SpiritShardSettings * __this, SpiritShardType__Enum shardType));
IL2CPP_REGISTER_METHOD(0x00D692E0, SpiritShardDescription *, GetUpgradableAbility, (SpiritShardSettings * __this, SpiritShardType__Enum shardType));
IL2CPP_REGISTER_METHOD(0x00D69380, bool, IsSpiritShardPassive, (SpiritShardSettings * __this, SpiritShardType__Enum shardType));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpiritShardSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
