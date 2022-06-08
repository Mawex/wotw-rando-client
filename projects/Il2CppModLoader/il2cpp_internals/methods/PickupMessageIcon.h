#include <interception_macros.h>

namespace app::methods::PickupMessageIcon {
IL2CPP_REGISTER_METHOD(0x01159630, void, SetIcon, (PickupMessageIcon * __this, Texture2D * icon));
IL2CPP_REGISTER_METHOD(0x011596E0, void, SetName, (PickupMessageIcon * __this, MessageProvider * name));
IL2CPP_REGISTER_METHOD(0x011597A0, void, SetSubText, (PickupMessageIcon * __this, PickupMessageIcon_PickupType__Enum type));
IL2CPP_REGISTER_METHOD(0x011598C0, void, SetDescription, (PickupMessageIcon * __this, MessageProvider * description));
IL2CPP_REGISTER_METHOD(0x01159980, void, SetFromContext, (PickupMessageIcon * __this, PickupContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PickupMessageIcon * __this));
}
