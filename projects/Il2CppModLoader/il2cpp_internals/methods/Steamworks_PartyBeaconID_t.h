#include <interception_macros.h>

namespace app::methods::Steamworks::PartyBeaconID_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (PartyBeaconID_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (PartyBeaconID_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00207040, bool, Equals, (PartyBeaconID_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (PartyBeaconID_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (PartyBeaconID_t x, PartyBeaconID_t y));
IL2CPP_REGISTER_METHOD(0x027E1820, bool, operator___, (PartyBeaconID_t x, PartyBeaconID_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, PartyBeaconID_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (PartyBeaconID_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (PartyBeaconID_t__Boxed * __this, PartyBeaconID_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (PartyBeaconID_t__Boxed * __this, PartyBeaconID_t other));
IL2CPP_REGISTER_METHOD(0x027E18D0, void, __cctor, ());
}
