#include <interception_macros.h>

namespace app::methods::MinerEntity {
IL2CPP_REGISTER_METHOD(0x014489D0, bool, get_CanHaveShield, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448A80, bool, get_IsProtectedByShield, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448A90, bool, get_HasShield, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448AA0, bool, get_IsFacingLeft, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448AD0, bool, get_IsFacingRight, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448B00, MinerSpawnType__Enum, get_SpawnType, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448B10, void, set_SpawnType, (MinerEntity * __this, MinerSpawnType__Enum value));
IL2CPP_REGISTER_METHOD(0x01448B20, void, OnAwake, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448BC0, void, OnEnable, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448BE0, void, Start, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01448CA0, void, OnFixedUpdate, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01449080, void, LateUpdate, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01449510, void, ResetEntity, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x014495F0, void, OnCacheSerializedComponents, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01449690, void, ResolveDamage, (MinerEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x01448B10, void, SetSpawnType, (MinerEntity * __this, MinerSpawnType__Enum spawnType));
IL2CPP_REGISTER_METHOD(0x01449710, void, UpdateGoThroughPlatformInteraction, (MinerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB7080, void, __ctor, (MinerEntity * __this));
}
