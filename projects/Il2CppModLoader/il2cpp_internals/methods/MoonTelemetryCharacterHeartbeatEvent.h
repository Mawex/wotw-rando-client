using namespace app;

namespace app::methods::MoonTelemetryCharacterHeartbeatEvent {
IL2CPP_REGISTER_METHOD(0x0146A050, void, SynchronousInitialize, (MoonTelemetryCharacterHeartbeatEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146A170, void, AsynchronousInitialize, (MoonTelemetryCharacterHeartbeatEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146AA60, void, AddCleanupEvent, (TelemetryCleanupEvents__Enum event));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetAvailableMemory, (MoonTelemetryCharacterHeartbeatEvent * __this));
IL2CPP_REGISTER_METHOD(0x00756A30, String *, get_Name, (MoonTelemetryCharacterHeartbeatEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146AD10, void, SerializeToObject, (MoonTelemetryCharacterHeartbeatEvent * __this, JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x0146BF10, void, __ctor, (MoonTelemetryCharacterHeartbeatEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146C100, void, __cctor, (MethodInfo * method));
}
