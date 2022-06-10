#pragma once
#include <interception_macros.h>

namespace app::methods::LogCallbackHandler_LogEntry {
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, ctor, (app::LogCallbackHandler_LogEntry * this_ptr, app::String * condition, app::String * stack_trace, app::LogType__Enum log_type))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Condition, (app::LogCallbackHandler_LogEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_StackTrace, (app::LogCallbackHandler_LogEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::LogType__Enum, get_LogType, (app::LogCallbackHandler_LogEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03190890, app::String *, ToString, (app::LogCallbackHandler_LogEntry * this_ptr))
}
