#include <interception_macros.h>

namespace app::methods::Steamworks::SteamUserStats {
IL2CPP_REGISTER_METHOD(0x0279F9D0, bool, RequestCurrentStats, ());
IL2CPP_REGISTER_METHOD(0x0279FA80, bool, GetStat, (String * pchName, int32_t * pData));
IL2CPP_REGISTER_METHOD(0x0279FD70, bool, GetStat, (String * pchName, float * pData));
IL2CPP_REGISTER_METHOD(0x027A0060, bool, SetStat, (String * pchName, int32_t nData));
IL2CPP_REGISTER_METHOD(0x027A0350, bool, SetStat, (String * pchName, float fData));
IL2CPP_REGISTER_METHOD(0x027A0640, bool, UpdateAvgRateStat, (String * pchName, float flCountThisSession, double dSessionLength));
IL2CPP_REGISTER_METHOD(0x027A0950, bool, GetAchievement, (String * pchName, bool * pbAchieved));
IL2CPP_REGISTER_METHOD(0x027A0C50, bool, SetAchievement, (String * pchName));
IL2CPP_REGISTER_METHOD(0x027A0F30, bool, ClearAchievement, (String * pchName));
IL2CPP_REGISTER_METHOD(0x027A1210, bool, GetAchievementAndUnlockTime, (String * pchName, bool * pbAchieved, uint32_t * punUnlockTime));
IL2CPP_REGISTER_METHOD(0x027A1520, bool, StoreStats, ());
IL2CPP_REGISTER_METHOD(0x027A15D0, int32_t, GetAchievementIcon, (String * pchName));
IL2CPP_REGISTER_METHOD(0x027A18B0, String *, GetAchievementDisplayAttribute, (String * pchName, String * pchKey));
IL2CPP_REGISTER_METHOD(0x027A1D10, bool, IndicateAchievementProgress, (String * pchName, uint32_t nCurProgress, uint32_t nMaxProgress));
IL2CPP_REGISTER_METHOD(0x027A2010, uint32_t, GetNumAchievements, ());
IL2CPP_REGISTER_METHOD(0x027A20C0, String *, GetAchievementName, (uint32_t iAchievement));
IL2CPP_REGISTER_METHOD(0x027A2180, SteamAPICall_t, RequestUserStats, (CSteamID steamIDUser));
IL2CPP_REGISTER_METHOD(0x027A22C0, bool, GetUserStat, (CSteamID steamIDUser, String * pchName, int32_t * pData));
IL2CPP_REGISTER_METHOD(0x027A25C0, bool, GetUserStat, (CSteamID steamIDUser, String * pchName, float * pData));
IL2CPP_REGISTER_METHOD(0x027A28C0, bool, GetUserAchievement, (CSteamID steamIDUser, String * pchName, bool * pbAchieved));
IL2CPP_REGISTER_METHOD(0x027A2BD0, bool, GetUserAchievementAndUnlockTime, (CSteamID steamIDUser, String * pchName, bool * pbAchieved, uint32_t * punUnlockTime));
IL2CPP_REGISTER_METHOD(0x027A2ED0, bool, ResetAllStats, (bool bAchievementsToo));
IL2CPP_REGISTER_METHOD(0x027A2F90, SteamAPICall_t, FindOrCreateLeaderboard, (String * pchLeaderboardName, ELeaderboardSortMethod__Enum eLeaderboardSortMethod, ELeaderboardDisplayType__Enum eLeaderboardDisplayType));
IL2CPP_REGISTER_METHOD(0x027A32B0, SteamAPICall_t, FindLeaderboard, (String * pchLeaderboardName));
IL2CPP_REGISTER_METHOD(0x027A35B0, String *, GetLeaderboardName, (SteamLeaderboard_t hSteamLeaderboard));
IL2CPP_REGISTER_METHOD(0x027A3670, int32_t, GetLeaderboardEntryCount, (SteamLeaderboard_t hSteamLeaderboard));
IL2CPP_REGISTER_METHOD(0x027A3730, ELeaderboardSortMethod__Enum, GetLeaderboardSortMethod, (SteamLeaderboard_t hSteamLeaderboard));
IL2CPP_REGISTER_METHOD(0x027A37F0, ELeaderboardDisplayType__Enum, GetLeaderboardDisplayType, (SteamLeaderboard_t hSteamLeaderboard));
IL2CPP_REGISTER_METHOD(0x027A38B0, SteamAPICall_t, DownloadLeaderboardEntries, (SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest__Enum eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd));
IL2CPP_REGISTER_METHOD(0x027A3A20, SteamAPICall_t, DownloadLeaderboardEntriesForUsers, (SteamLeaderboard_t hSteamLeaderboard, CSteamID__Array * prgUsers, int32_t cUsers));
IL2CPP_REGISTER_METHOD(0x027A3B90, bool, GetDownloadedLeaderboardEntry, (SteamLeaderboardEntries_t hSteamLeaderboardEntries, int32_t index, LeaderboardEntry_t * pLeaderboardEntry, Int32__Array * pDetails, int32_t cDetailsMax));
IL2CPP_REGISTER_METHOD(0x027A3CA0, SteamAPICall_t, UploadLeaderboardScore, (SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod__Enum eLeaderboardUploadScoreMethod, int32_t nScore, Int32__Array * pScoreDetails, int32_t cScoreDetailsCount));
IL2CPP_REGISTER_METHOD(0x027A3E20, SteamAPICall_t, AttachLeaderboardUGC, (SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC));
IL2CPP_REGISTER_METHOD(0x027A3F70, SteamAPICall_t, GetNumberOfCurrentPlayers, ());
IL2CPP_REGISTER_METHOD(0x027A40A0, SteamAPICall_t, RequestGlobalAchievementPercentages, ());
IL2CPP_REGISTER_METHOD(0x027A41D0, int32_t, GetMostAchievedAchievementInfo, (String * * pchName, uint32_t unNameBufLen, float * pflPercent, bool * pbAchieved));
IL2CPP_REGISTER_METHOD(0x027A43A0, int32_t, GetNextMostAchievedAchievementInfo, (int32_t iIteratorPrevious, String * * pchName, uint32_t unNameBufLen, float * pflPercent, bool * pbAchieved));
IL2CPP_REGISTER_METHOD(0x027A4580, bool, GetAchievementAchievedPercent, (String * pchName, float * pflPercent));
IL2CPP_REGISTER_METHOD(0x027A4870, SteamAPICall_t, RequestGlobalStats, (int32_t nHistoryDays));
IL2CPP_REGISTER_METHOD(0x027A49B0, bool, GetGlobalStat, (String * pchStatName, int64_t * pData));
IL2CPP_REGISTER_METHOD(0x027A4CA0, bool, GetGlobalStat, (String * pchStatName, double * pData));
IL2CPP_REGISTER_METHOD(0x027A4F90, int32_t, GetGlobalStatHistory, (String * pchStatName, Int64__Array * pData, uint32_t cubData));
IL2CPP_REGISTER_METHOD(0x027A5290, int32_t, GetGlobalStatHistory, (String * pchStatName, Double__Array * pData, uint32_t cubData));
}
