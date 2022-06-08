#include <interception_macros.h>

namespace app::methods::Steamworks::SteamGameServerStats {
IL2CPP_REGISTER_METHOD(0x027FD120, SteamAPICall_t, RequestUserStats, (CSteamID steamIDUser));
IL2CPP_REGISTER_METHOD(0x027FD260, bool, GetUserStat, (CSteamID steamIDUser, String * pchName, int32_t * pData));
IL2CPP_REGISTER_METHOD(0x027FD560, bool, GetUserStat, (CSteamID steamIDUser, String * pchName, float * pData));
IL2CPP_REGISTER_METHOD(0x027FD860, bool, GetUserAchievement, (CSteamID steamIDUser, String * pchName, bool * pbAchieved));
IL2CPP_REGISTER_METHOD(0x027FDB70, bool, SetUserStat, (CSteamID steamIDUser, String * pchName, int32_t nData));
IL2CPP_REGISTER_METHOD(0x027FDE70, bool, SetUserStat, (CSteamID steamIDUser, String * pchName, float fData));
IL2CPP_REGISTER_METHOD(0x027FE170, bool, UpdateUserAvgRateStat, (CSteamID steamIDUser, String * pchName, float flCountThisSession, double dSessionLength));
IL2CPP_REGISTER_METHOD(0x027FE480, bool, SetUserAchievement, (CSteamID steamIDUser, String * pchName));
IL2CPP_REGISTER_METHOD(0x027FE770, bool, ClearUserAchievement, (CSteamID steamIDUser, String * pchName));
IL2CPP_REGISTER_METHOD(0x027FEA60, SteamAPICall_t, StoreUserStats, (CSteamID steamIDUser));
}
