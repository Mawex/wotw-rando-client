#include <interception_macros.h>

namespace app::methods::Mono_Security_Interface::Alert {
IL2CPP_REGISTER_METHOD(0x0052B590, AlertLevel__Enum_1, get_Level, (app::Alert_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x00504D80, AlertDescription__Enum, get_Description, (app::Alert_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A45F40, void, __ctor, (app::Alert_1 * this_ptr, app::AlertDescription__Enum description));
IL2CPP_REGISTER_METHOD(0x02A45FC0, void, inferAlertLevel, (app::Alert_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A46040, String *, ToString, (app::Alert_1 * this_ptr));
}
