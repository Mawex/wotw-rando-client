#include <interception_macros.h>

namespace app::methods::MoonTelemetrySpawnEvent {
IL2CPP_REGISTER_METHOD(0x01472DB0, void, __ctor, (MoonTelemetrySpawnEvent * __this, MoonTelemetrySpawnEvent_SpawnReason__Enum reason));
IL2CPP_REGISTER_METHOD(0x0049F2B0, String *, get_Name, (MoonTelemetrySpawnEvent * __this));
IL2CPP_REGISTER_METHOD(0x01472E90, void, SerializeToObject, (MoonTelemetrySpawnEvent * __this, JsonBuilder_Object obj));
}
