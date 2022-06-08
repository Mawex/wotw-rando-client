#include <interception_macros.h>

namespace app::methods::UnityEngine::DebugLogHandler {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DebugLogHandler * __this));
IL2CPP_REGISTER_METHOD(0x0242D790, void, Internal_Log, (LogType__Enum level, String * msg, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x0242D800, void, Internal_LogException, (Exception * exception, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x0242D860, void, LogFormat, (DebugLogHandler * __this, LogType__Enum logType, Object_1 * context, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242D8E0, void, LogException, (DebugLogHandler * __this, Exception * exception, Object_1 * context));
IL2CPP_REGISTER_METHODINFO(0x0472E920, DebugLogHandler_LogException__MethodInfo);
}
