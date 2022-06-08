#include <interception_macros.h>

namespace app::methods::System::CurrentSystemTimeZone {
IL2CPP_REGISTER_METHOD(0x028A0BF0, void, __ctor, (CurrentSystemTimeZone * __this));
IL2CPP_REGISTER_METHOD(0x028A0C90, bool, GetTimeZoneData, (int32_t year, Int64__Array * * data, String__Array * * names, bool * daylight_inverted));
}
