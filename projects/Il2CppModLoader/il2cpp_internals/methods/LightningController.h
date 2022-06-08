#include <interception_macros.h>

namespace app::methods::LightningController {
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_InvalidateParentTimelineCache, (LightningController * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_InvalidateParentTimelineCache, (LightningController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00FA35B0, void, Start, (LightningController * __this));
IL2CPP_REGISTER_METHOD(0x00FA35F0, void, FixedUpdate, (LightningController * __this));
IL2CPP_REGISTER_METHOD(0x00FA3690, void, InitiateLightningEvent, (LightningController * __this, LightningController_LightningEvent lightningEvent));
IL2CPP_REGISTER_METHOD(0x00FA3B00, float, GetRandomValue, (LightningController * __this, FloatRange_1 range));
IL2CPP_REGISTER_METHOD(0x00FA3C00, LightningController_LightningEvent, GetNextLightningEvent, (LightningController * __this));
IL2CPP_REGISTER_METHOD(0x00FA3FC0, void, __ctor, (LightningController * __this));
}
