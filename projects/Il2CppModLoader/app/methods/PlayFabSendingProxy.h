#pragma once
#include <interception_macros.h>

namespace app::methods::PlayFabSendingProxy {
    IL2CPP_REGISTER_METHOD(0x02EA04A0, app::Action_1_MoonTelemetryEvent_ *, get_Proxy, ())
    IL2CPP_REGISTER_METHOD(0x02EA0540, void, set_Proxy, (app::Action_1_MoonTelemetryEvent_ * value))
    IL2CPP_REGISTER_METHOD(0x02EA05F0, void, Send, (app::MoonTelemetryEvent * moon_telemetry_event))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
