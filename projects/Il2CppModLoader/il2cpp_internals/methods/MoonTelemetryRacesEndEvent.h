using namespace app;

namespace app::methods::MoonTelemetryRacesEndEvent {
IL2CPP_REGISTER_METHOD(0x01470E30, void, __ctor, (MoonTelemetryRacesEndEvent * __this, float time, int32_t place, ITrialData * data));
IL2CPP_REGISTER_METHOD(0x006A63A0, String *, get_Name, (MoonTelemetryRacesEndEvent * __this));
IL2CPP_REGISTER_METHOD(0x01470F60, void, SerializeToObject, (MoonTelemetryRacesEndEvent * __this, JsonBuilder_Object obj));
}
