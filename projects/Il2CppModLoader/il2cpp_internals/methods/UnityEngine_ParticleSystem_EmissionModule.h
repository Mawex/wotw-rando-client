using namespace app;

namespace app::methods::UnityEngine::ParticleSystem_EmissionModule {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (ParticleSystem_EmissionModule__Boxed * __this, ParticleSystem * particleSystem));
IL2CPP_REGISTER_METHOD(0x002472A0, void, set_enabled, (ParticleSystem_EmissionModule__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002472B0, bool, get_enabled, (ParticleSystem_EmissionModule__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00247310, void, set_rateOverTime, (ParticleSystem_EmissionModule__Boxed * __this, ParticleSystem_MinMaxCurve value));
IL2CPP_REGISTER_METHOD(0x00247380, ParticleSystem_MinMaxCurve, get_rateOverTime, (ParticleSystem_EmissionModule__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00247410, float, get_rateOverTimeMultiplier, (ParticleSystem_EmissionModule__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00247470, void, set_rateOverTimeMultiplier, (ParticleSystem_EmissionModule__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00247480, void, set_rateOverDistance, (ParticleSystem_EmissionModule__Boxed * __this, ParticleSystem_MinMaxCurve value));
IL2CPP_REGISTER_METHOD(0x002474F0, ParticleSystem_MinMaxCurve, get_rateOverDistance, (ParticleSystem_EmissionModule__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00247580, void, SetBursts, (ParticleSystem_EmissionModule__Boxed * __this, ParticleSystem_Burst__Array * bursts));
IL2CPP_REGISTER_METHOD(0x002475A0, void, SetBursts, (ParticleSystem_EmissionModule__Boxed * __this, ParticleSystem_Burst__Array * bursts, int32_t size));
IL2CPP_REGISTER_METHOD(0x002475B0, int32_t, GetBursts, (ParticleSystem_EmissionModule__Boxed * __this, ParticleSystem_Burst__Array * bursts));
IL2CPP_REGISTER_METHOD(0x002475C0, void, SetBurst, (ParticleSystem_EmissionModule__Boxed * __this, int32_t index, ParticleSystem_Burst burst));
IL2CPP_REGISTER_METHOD(0x00247650, ParticleSystem_Burst, GetBurst, (ParticleSystem_EmissionModule__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002476A0, int32_t, get_burstCount, (ParticleSystem_EmissionModule__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00247700, void, set_burstCount, (ParticleSystem_EmissionModule__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x03133ED0, void, SetEnabled, (ParticleSystem * system, bool value));
IL2CPP_REGISTER_METHOD(0x03133F30, bool, GetEnabled, (ParticleSystem * system));
IL2CPP_REGISTER_METHOD(0x03133F80, int32_t, GetBurstCount, (ParticleSystem * system));
IL2CPP_REGISTER_METHOD(0x03133FD0, void, SetRateOverTime, (ParticleSystem * system, ParticleSystem_MinMaxCurve * curve));
IL2CPP_REGISTER_METHOD(0x03134030, void, GetRateOverTime, (ParticleSystem * system, ParticleSystem_MinMaxCurve * curve));
IL2CPP_REGISTER_METHOD(0x03134090, void, SetRateOverTimeMultiplier, (ParticleSystem * system, float value));
IL2CPP_REGISTER_METHOD(0x031340F0, float, GetRateOverTimeMultiplier, (ParticleSystem * system));
IL2CPP_REGISTER_METHOD(0x03134140, void, SetRateOverDistance, (ParticleSystem * system, ParticleSystem_MinMaxCurve * curve));
IL2CPP_REGISTER_METHOD(0x031341A0, void, GetRateOverDistance, (ParticleSystem * system, ParticleSystem_MinMaxCurve * curve));
IL2CPP_REGISTER_METHOD(0x03134200, void, SetBurstCount, (ParticleSystem * system, int32_t value));
IL2CPP_REGISTER_METHOD(0x03134260, void, SetBurst, (ParticleSystem * system, int32_t index, ParticleSystem_Burst burst));
IL2CPP_REGISTER_METHOD(0x031342D0, void, INTERNAL_CALL_SetBurst, (ParticleSystem * system, int32_t index, ParticleSystem_Burst * burst));
IL2CPP_REGISTER_METHOD(0x03134340, ParticleSystem_Burst, GetBurst, (ParticleSystem * system, int32_t index));
IL2CPP_REGISTER_METHOD(0x03134400, void, INTERNAL_CALL_GetBurst, (ParticleSystem * system, int32_t index, ParticleSystem_Burst * value));
}
