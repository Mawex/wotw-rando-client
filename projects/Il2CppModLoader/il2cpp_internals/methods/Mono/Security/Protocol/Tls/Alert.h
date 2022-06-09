#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Alert {
    IL2CPP_REGISTER_METHOD(0x0052B590, app::AlertLevel__Enum, get_Level, (app::Alert * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00504D80, app::AlertDescription__Enum_1, get_Description, (app::Alert * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A4DC40, app::String *, get_Message, (app::Alert * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A4DC50, bool, get_IsWarning, (app::Alert * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A4DC60, bool, get_IsCloseNotify, (app::Alert * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A4DC80, void, __ctor_1, (app::Alert * this_ptr, app::AlertDescription__Enum_1 description));
    IL2CPP_REGISTER_METHOD(0x023BA2B0, void, __ctor_2, (app::Alert * this_ptr, app::AlertLevel__Enum level, app::AlertDescription__Enum_1 description));
    IL2CPP_REGISTER_METHOD(0x02A4DD00, app::AlertLevel__Enum, inferAlertLevel, (app::AlertDescription__Enum_1 description));
    IL2CPP_REGISTER_METHOD(0x02A4DD70, app::String *, GetAlertMessage, (app::AlertDescription__Enum_1 description));
}
