using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::Telemetry::PlayFabTelemetryProvider {
IL2CPP_REGISTER_METHOD(0x00CD9930, void, __ctor, (PlayFabTelemetryProvider * __this, INetworkConnectivityChecker * networkConnectivityChecker));
IL2CPP_REGISTER_METHOD(0x00CD9B90, void, Post, (PlayFabTelemetryProvider * __this, MoonTelemetryEvent * evt));
IL2CPP_REGISTER_METHOD(0x00CD9C80, void, Post, (PlayFabTelemetryProvider * __this, String * name, Dictionary_2_System_String_System_Object_ * data));
IL2CPP_REGISTER_METHOD(0x00CD9D70, void, PostImpl, (PlayFabTelemetryProvider * __this, String * name, Object * payload));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
