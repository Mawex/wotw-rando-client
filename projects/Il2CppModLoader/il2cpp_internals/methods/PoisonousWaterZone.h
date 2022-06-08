#include <interception_macros.h>

namespace app::methods::PoisonousWaterZone {
IL2CPP_REGISTER_METHOD(0x00C57630, bool, get_IsPlayerInside, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C57740, bool, IsPointInsidePoisonousWater, (PoisonousWaterZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00C57930, bool, IsPlayerInsidePoisonousWater, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C57B40, bool, IsPointInsidePoisonousWaterZone, (Vector2 point, PoisonousWaterZone * * zone));
IL2CPP_REGISTER_METHOD(0x00C57D10, void, OnEnable, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C57DD0, void, OnDisable, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C57E90, void, Awake, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C58110, void, Update, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C581F0, void, OnAfterUdpate, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C58230, void, UdpateMetaBall, (PoisonousWaterZone * __this, MetaballRenderer_IMetaball * currentBall));
IL2CPP_REGISTER_METHOD(0x00C587F0, bool, CanDealDamage, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C58800, void, AddPoisonWaterBlob, (PoisonousWaterZone * __this, Vector2 position, float radiusMultiplier, bool forced));
IL2CPP_REGISTER_METHOD(0x00C58A40, void, DealDamage, (PoisonousWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x00C58D40, void, __ctor, (PoisonousWaterZone * __this));
}
