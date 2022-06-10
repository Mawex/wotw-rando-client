#pragma once
#include <interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::Telemetry::PlayFabTelemetryProvider {
    IL2CPP_REGISTER_METHOD(0x00CD9930, void, ctor, (app::PlayFabTelemetryProvider * this_ptr, app::INetworkConnectivityChecker * network_connectivity_checker))
    IL2CPP_REGISTER_METHOD(0x00CD9B90, void, Post_1, (app::PlayFabTelemetryProvider * this_ptr, app::MoonTelemetryEvent * evt))
    IL2CPP_REGISTER_METHOD(0x00CD9C80, void, Post_2, (app::PlayFabTelemetryProvider * this_ptr, app::String * name, app::Dictionary_2_System_String_System_Object_ * data))
    IL2CPP_REGISTER_METHOD(0x00CD9D70, void, PostImpl, (app::PlayFabTelemetryProvider * this_ptr, app::String * name, app::Object * payload))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
