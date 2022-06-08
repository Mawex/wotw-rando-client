using namespace app;

namespace app::methods::MoonTelemetryRacesStartEvent {
IL2CPP_REGISTER_METHOD(0x01471130, void, __ctor, (MoonTelemetryRacesStartEvent * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x01471220, MoonTelemetryRacesStartEvent_RaceID__Enum, ParseName, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x0049F2B0, String *, get_Name, (MoonTelemetryRacesStartEvent * __this));
IL2CPP_REGISTER_METHOD(0x01471530, void, SerializeToObject, (MoonTelemetryRacesStartEvent * __this, JsonBuilder_Object obj));
}
