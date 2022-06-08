#include <interception_macros.h>

namespace app::methods::LogCallbackHandler_LogEntry {
IL2CPP_REGISTER_METHOD(0x00E332C0, void, __ctor, (LogCallbackHandler_LogEntry * __this, String * condition, String * stackTrace, LogType__Enum logType));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Condition, (LogCallbackHandler_LogEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_StackTrace, (LogCallbackHandler_LogEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, LogType__Enum, get_LogType, (LogCallbackHandler_LogEntry * __this));
IL2CPP_REGISTER_METHOD(0x03190890, String *, ToString, (LogCallbackHandler_LogEntry * __this));
}
