using namespace app;

namespace app::methods::MoonTelemetryClientBaseEvent {
IL2CPP_REGISTER_METHOD(0x0146C490, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FBBE0, DateTime, get_Time, (MoonTelemetryClientBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Time, (MoonTelemetryClientBaseEvent * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x0146C570, void, SynchronousInitialize, (MoonTelemetryClientBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146C670, void, AsynchronousInitialize, (MoonTelemetryClientBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146CFE0, void, SerializeToObject, (MoonTelemetryClientBaseEvent * __this, JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x0146D460, void, __ctor, (MoonTelemetryClientBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146D550, void, __cctor, (MethodInfo * method));
}
