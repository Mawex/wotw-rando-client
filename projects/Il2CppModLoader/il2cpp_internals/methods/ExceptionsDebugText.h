#include <interception_macros.h>

namespace app::methods::ExceptionsDebugText {
IL2CPP_REGISTER_METHOD(0x009836C0, void, EnsureImguiRegistered, (ExceptionsDebugText * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x009837C0, void, Awake, (ExceptionsDebugText * __this));
IL2CPP_REGISTER_METHOD(0x009838E0, void, OnEnable, (ExceptionsDebugText * __this));
IL2CPP_REGISTER_METHOD(0x00983A60, void, OnDisable, (ExceptionsDebugText * __this));
IL2CPP_REGISTER_METHOD(0x00983BD0, void, OnLogMessageReceived, (ExceptionsDebugText * __this, String * condition, String * stacktrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04785370, ExceptionsDebugText_OnLogMessageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00983C00, void, Update, (ExceptionsDebugText * __this));
IL2CPP_REGISTER_METHOD(0x00984060, void, OnGUI, (ExceptionsDebugText * __this));
IL2CPP_REGISTER_METHOD(0x00984580, void, __ctor, (ExceptionsDebugText * __this));
}
