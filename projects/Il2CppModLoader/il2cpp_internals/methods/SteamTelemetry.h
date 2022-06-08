#include <interception_macros.h>

namespace app::methods::SteamTelemetry {
IL2CPP_REGISTER_METHOD(0x009BFC70, void, Awake, (SteamTelemetry * __this));
IL2CPP_REGISTER_METHOD(0x009BFF70, void, Update, (SteamTelemetry * __this));
IL2CPP_REGISTER_METHOD(0x009C0080, void, Send, (SteamTelemetry * __this, TelemetryEvent__Enum eventId, String * body));
IL2CPP_REGISTER_METHOD(0x009C0230, IEnumerator *, SendRoutine, (SteamTelemetry * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x009C0380, String *, GetJson, (SteamTelemetry * __this, int32_t eventId, String * body));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SteamTelemetry * __this));
IL2CPP_REGISTER_METHOD(0x009C0880, void, __cctor, ());
}
