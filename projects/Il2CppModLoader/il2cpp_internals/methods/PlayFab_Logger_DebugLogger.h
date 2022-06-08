using namespace app;

namespace app::methods::PlayFab::Logger::DebugLogger {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (DebugLogger * __this, LogLevel__Enum_1 minLogLevel));
IL2CPP_REGISTER_METHOD(0x01853B50, void, Critical, (DebugLogger * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01853B80, void, Debug, (DebugLogger * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01853BB0, void, Error, (DebugLogger * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01853BE0, void, Information, (DebugLogger * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01853C10, void, Trace, (DebugLogger * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01853C30, void, Warning, (DebugLogger * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01853C60, void, Log, (DebugLogger * __this, LogLevel__Enum_1 logLevel, String * format, Object__Array * args));
}
