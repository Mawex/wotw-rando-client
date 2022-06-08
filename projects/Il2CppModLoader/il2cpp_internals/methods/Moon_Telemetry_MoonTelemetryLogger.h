using namespace app;

namespace app::methods::Moon::Telemetry::MoonTelemetryLogger {
IL2CPP_REGISTER_METHOD(0x02E99E00, bool, get_s_isDebug, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E99EA0, void, Log, (Object * message, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x02E99F30, void, LogWarning, (String * text, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x02E99FC0, void, LogError, (String * text, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x02E9A080, void, OnThreadStarted, (Thread * thread));
IL2CPP_REGISTER_METHOD(0x02E9A3A0, void, OnThreadStopped, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9A470, void, PostThreadState, (Object * sender, ElapsedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x047770D0, MoonTelemetryLogger_PostThreadState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E9A650, void, __cctor, (MethodInfo * method));
}
