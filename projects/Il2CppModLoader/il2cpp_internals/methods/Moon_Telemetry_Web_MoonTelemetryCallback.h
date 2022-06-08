#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Web::MoonTelemetryCallback {
IL2CPP_REGISTER_METHOD(0x02E9A6F0, void, __ctor, (MoonTelemetryCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResult, (MoonTelemetryCallback * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnError, (MoonTelemetryCallback * __this, Exception * e));
IL2CPP_REGISTER_METHOD(0x02E9A840, SwaggerJSONParser *, get_Parser, (MoonTelemetryCallback * __this));
}
