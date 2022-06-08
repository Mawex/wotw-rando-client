#include <interception_macros.h>

namespace app::methods::Mono::Security::Interface::Alert {
IL2CPP_REGISTER_METHOD(0x0052B590, AlertLevel__Enum_1, get_Level, (Alert_1 * __this));
IL2CPP_REGISTER_METHOD(0x00504D80, AlertDescription__Enum, get_Description, (Alert_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A45F40, void, __ctor, (Alert_1 * __this, AlertDescription__Enum description));
IL2CPP_REGISTER_METHOD(0x02A45FC0, void, inferAlertLevel, (Alert_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A46040, String *, ToString, (Alert_1 * __this));
}
