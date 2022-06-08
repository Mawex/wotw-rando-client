#include <interception_macros.h>

namespace app::methods::Steamworks::SteamLeaderboardEntries_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (SteamLeaderboardEntries_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (SteamLeaderboardEntries_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FFE90, bool, Equals, (SteamLeaderboardEntries_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (SteamLeaderboardEntries_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (SteamLeaderboardEntries_t x, SteamLeaderboardEntries_t y));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (SteamLeaderboardEntries_t x, SteamLeaderboardEntries_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, SteamLeaderboardEntries_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (SteamLeaderboardEntries_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (SteamLeaderboardEntries_t__Boxed * __this, SteamLeaderboardEntries_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (SteamLeaderboardEntries_t__Boxed * __this, SteamLeaderboardEntries_t other));
}
