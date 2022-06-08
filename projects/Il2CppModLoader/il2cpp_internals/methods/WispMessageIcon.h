#include <interception_macros.h>

namespace app::methods::WispMessageIcon {
IL2CPP_REGISTER_METHOD(0x0057CCD0, void, SetWisp, (WispMessageIcon * __this, WispMessageIcon_Wisp__Enum wisp));
IL2CPP_REGISTER_METHOD(0x0057CE40, void, SetIcon, (WispMessageIcon * __this, Texture2D * icon));
IL2CPP_REGISTER_METHOD(0x0057CEF0, void, SetName, (WispMessageIcon * __this, MessageProvider * name));
IL2CPP_REGISTER_METHOD(0x0057CFB0, void, SetHeader, (WispMessageIcon * __this, MessageProvider * name));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WispMessageIcon * __this));
}
