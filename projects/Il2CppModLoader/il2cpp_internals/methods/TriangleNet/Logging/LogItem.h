#include <interception_macros.h>

namespace app::methods::TriangleNet::Logging::LogItem {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DateTime, get_Time, (app::LogItem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::LogLevel__Enum, get_Level, (app::LogItem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Message, (app::LogItem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_Info, (app::LogItem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0262A0B0, void, __ctor_1, (app::LogItem * this_ptr, app::LogLevel__Enum level, app::String * message));
    IL2CPP_REGISTER_METHOD(0x0262A160, void, __ctor_2, (app::LogItem * this_ptr, app::LogLevel__Enum level, app::String * message, app::String * info));
}
