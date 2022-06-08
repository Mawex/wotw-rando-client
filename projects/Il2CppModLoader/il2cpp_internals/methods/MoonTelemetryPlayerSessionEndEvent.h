using namespace app;

namespace app::methods::MoonTelemetryPlayerSessionEndEvent {
IL2CPP_REGISTER_METHOD(0x0146F610, void, __ctor, (MoonTelemetryPlayerSessionEndEvent * __this, RestartReason__Enum restartReason, float sessionDuration));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_Name, (MoonTelemetryPlayerSessionEndEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146F710, void, SerializeToObject, (MoonTelemetryPlayerSessionEndEvent * __this, JsonBuilder_Object obj));
}
