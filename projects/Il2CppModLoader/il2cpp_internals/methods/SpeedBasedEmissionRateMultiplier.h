#include <interception_macros.h>

namespace app::methods::SpeedBasedEmissionRateMultiplier {
IL2CPP_REGISTER_METHOD(0x00EF7FE0, void, OnPoolSpawned, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF80F0, void, Awake, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF8210, void, Start, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF82F0, void, FixedUpdate, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x008C1CB0, void, HaltEmission, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF86C0, void, HaltEmissionForAFrame, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF8760, void, UnhaltEmission, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF8800, void, BoostEmissionRateForAFrame, (SpeedBasedEmissionRateMultiplier * __this, float factor));
IL2CPP_REGISTER_METHOD(0x00EF88B0, void, UnbumpEmissionRate, (SpeedBasedEmissionRateMultiplier * __this));
IL2CPP_REGISTER_METHOD(0x00EF88C0, void, __ctor, (SpeedBasedEmissionRateMultiplier * __this));
}
