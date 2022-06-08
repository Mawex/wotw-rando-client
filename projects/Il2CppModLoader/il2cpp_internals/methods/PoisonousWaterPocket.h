#include <interception_macros.h>

namespace app::methods::PoisonousWaterPocket {
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_DamageDealt, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_DamageDealt, (PoisonousWaterPocket * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x014324E0, float, get_NormalizedDuration, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x01432520, bool, get_IsPlayerInside, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x01432630, void, OnEnableRuntime, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x014326F0, void, OnDisableRuntime, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x014327B0, bool, IsPointInsidePoisonousWater, (Vector2 point, float maxLifetime));
IL2CPP_REGISTER_METHOD(0x014329A0, void, OnZoneUpdate, (PoisonousWaterPocket * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01432E70, void, HandlePosition, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x01433580, bool, CanDealDamage, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x014336D0, void, PlayTimeline, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x01433720, void, DealDamage, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x01433A30, void, RefreshBounds, (PoisonousWaterPocket * __this));
IL2CPP_REGISTER_METHOD(0x01433D40, void, __ctor, (PoisonousWaterPocket * __this));
}
