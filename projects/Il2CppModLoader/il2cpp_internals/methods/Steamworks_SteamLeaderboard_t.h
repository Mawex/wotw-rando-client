#include <interception_macros.h>

namespace app::methods::Steamworks::SteamLeaderboard_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (SteamLeaderboard_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (SteamLeaderboard_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FFF60, bool, Equals, (SteamLeaderboard_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (SteamLeaderboard_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (SteamLeaderboard_t x, SteamLeaderboard_t y));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (SteamLeaderboard_t x, SteamLeaderboard_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, SteamLeaderboard_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (SteamLeaderboard_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (SteamLeaderboard_t__Boxed * __this, SteamLeaderboard_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (SteamLeaderboard_t__Boxed * __this, SteamLeaderboard_t other));
}
