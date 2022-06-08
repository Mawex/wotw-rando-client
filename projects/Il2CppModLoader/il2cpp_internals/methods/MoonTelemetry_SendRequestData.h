using namespace app;

namespace app::methods::MoonTelemetry_SendRequestData {
IL2CPP_REGISTER_METHOD(0x02E9FBD0, bool, get_IsProcessing, (MoonTelemetry_SendRequestData * __this));
IL2CPP_REGISTER_METHOD(0x02E9FBE0, bool, get_Ready, (MoonTelemetry_SendRequestData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (MoonTelemetry_SendRequestData * __this, String * body));
IL2CPP_REGISTER_METHOD(0x02E9FBF0, void, Send, (MoonTelemetry_SendRequestData * __this, Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * callback));
IL2CPP_REGISTER_METHOD(0x02E9FF80, MoonTelemetrySendRequest *, GetRequest, (MoonTelemetry_SendRequestData * __this));
}
