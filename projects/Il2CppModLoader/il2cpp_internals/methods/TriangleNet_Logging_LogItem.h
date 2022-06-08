#include <interception_macros.h>

namespace app::methods::TriangleNet::Logging::LogItem {
IL2CPP_REGISTER_METHOD(0x002FA280, DateTime, get_Time, (LogItem * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, LogLevel__Enum, get_Level, (LogItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Message, (LogItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Info, (LogItem * __this));
IL2CPP_REGISTER_METHOD(0x0262A0B0, void, __ctor, (LogItem * __this, LogLevel__Enum level, String * message));
IL2CPP_REGISTER_METHOD(0x0262A160, void, __ctor, (LogItem * __this, LogLevel__Enum level, String * message, String * info));
}
