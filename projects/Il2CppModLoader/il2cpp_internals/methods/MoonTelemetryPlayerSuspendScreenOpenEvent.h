#include <interception_macros.h>

namespace app::methods::MoonTelemetryPlayerSuspendScreenOpenEvent {
IL2CPP_REGISTER_METHOD(0x01470B90, void, SynchronousInitialize, (MoonTelemetryPlayerSuspendScreenOpenEvent * __this));
IL2CPP_REGISTER_METHOD(0x01470BA0, void, AsynchronousInitialize, (MoonTelemetryPlayerSuspendScreenOpenEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_Name, (MoonTelemetryPlayerSuspendScreenOpenEvent * __this));
IL2CPP_REGISTER_METHOD(0x01470C60, void, SerializeToObject, (MoonTelemetryPlayerSuspendScreenOpenEvent * __this, JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x01470D60, void, __ctor, (MoonTelemetryPlayerSuspendScreenOpenEvent * __this));
}
