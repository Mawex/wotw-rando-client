#include <interception_macros.h>

namespace app::methods::Steamworks::SteamAPICall_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (SteamAPICall_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (SteamAPICall_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0020B2E0, bool, Equals, (SteamAPICall_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (SteamAPICall_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (SteamAPICall_t x, SteamAPICall_t y));
IL2CPP_REGISTER_METHOD(0x027E1FA0, bool, operator___, (SteamAPICall_t x, SteamAPICall_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, SteamAPICall_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (SteamAPICall_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (SteamAPICall_t__Boxed * __this, SteamAPICall_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (SteamAPICall_t__Boxed * __this, SteamAPICall_t other));
IL2CPP_REGISTER_METHOD(0x027E2050, void, __cctor, ());
}
