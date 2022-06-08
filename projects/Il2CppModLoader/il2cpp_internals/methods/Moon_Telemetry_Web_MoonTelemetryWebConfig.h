using namespace app;

namespace app::methods::Moon::Telemetry::Web::MoonTelemetryWebConfig {
IL2CPP_REGISTER_METHOD(0x02E9AC10, bool, get_IsInited, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9ACC0, String *, get_UNITY_VERSION, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9AD60, void, set_UNITY_VERSION, (String * value));
IL2CPP_REGISTER_METHOD(0x02E9AE10, Dictionary_2_System_String_System_String_ *, get_HEADERS, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9AEB0, void, set_HEADERS, (Dictionary_2_System_String_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x02E9AF60, void, Init, (WebImpl__Enum impl));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartThreadHandler, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopThreadhandler, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonTelemetryWebConfig * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
