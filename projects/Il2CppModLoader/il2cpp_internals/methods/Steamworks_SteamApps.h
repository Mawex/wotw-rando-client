#include <interception_macros.h>

namespace app::methods::Steamworks::SteamApps {
IL2CPP_REGISTER_METHOD(0x027E27D0, bool, BIsSubscribed, ());
IL2CPP_REGISTER_METHOD(0x027E27F0, bool, BIsLowViolence, ());
IL2CPP_REGISTER_METHOD(0x027E2810, bool, BIsCybercafe, ());
IL2CPP_REGISTER_METHOD(0x027E2830, bool, BIsVACBanned, ());
IL2CPP_REGISTER_METHOD(0x027E2850, String *, GetCurrentGameLanguage, ());
IL2CPP_REGISTER_METHOD(0x027E2880, String *, GetAvailableGameLanguages, ());
IL2CPP_REGISTER_METHOD(0x027E28B0, bool, BIsSubscribedApp, (AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027E28E0, bool, BIsDlcInstalled, (AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027E2910, uint32_t, GetEarliestPurchaseUnixTime, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027E2940, bool, BIsSubscribedFromFreeWeekend, ());
IL2CPP_REGISTER_METHOD(0x027E2960, int32_t, GetDLCCount, ());
IL2CPP_REGISTER_METHOD(0x027E2980, bool, BGetDLCDataByIndex, (int32_t iDLC, AppId_t * pAppID, bool * pbAvailable, String * * pchName, int32_t cchNameBufferSize));
IL2CPP_REGISTER_METHOD(0x027E2AD0, void, InstallDLC, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027E2B00, void, UninstallDLC, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027E2B30, void, RequestAppProofOfPurchaseKey, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027E2B60, bool, GetCurrentBetaName, (String * * pchName, int32_t cchNameBufferSize));
IL2CPP_REGISTER_METHOD(0x027E2C80, bool, MarkContentCorrupt, (bool bMissingFilesOnly));
IL2CPP_REGISTER_METHOD(0x027E2CB0, uint32_t, GetInstalledDepots, (AppId_t appID, DepotId_t__Array * pvecDepots, uint32_t cMaxDepots));
IL2CPP_REGISTER_METHOD(0x027E2D00, uint32_t, GetAppInstallDir, (AppId_t appID, String * * pchFolder, uint32_t cchFolderBufferSize));
IL2CPP_REGISTER_METHOD(0x027E2E30, bool, BIsAppInstalled, (AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027E2E60, CSteamID, GetAppOwner, ());
IL2CPP_REGISTER_METHOD(0x027E2F10, String *, GetLaunchQueryParam, (String * pchKey));
IL2CPP_REGISTER_METHOD(0x027E3120, bool, GetDlcDownloadProgress, (AppId_t nAppID, uint64_t * punBytesDownloaded, uint64_t * punBytesTotal));
IL2CPP_REGISTER_METHOD(0x027E3170, int32_t, GetAppBuildId, ());
IL2CPP_REGISTER_METHOD(0x027E3190, void, RequestAllProofOfPurchaseKeys, ());
IL2CPP_REGISTER_METHOD(0x027E31B0, SteamAPICall_t, GetFileDetails, (String * pszFileName));
IL2CPP_REGISTER_METHOD(0x027E33D0, int32_t, GetLaunchCommandLine, (String * * pszCommandLine, int32_t cubCommandLine));
IL2CPP_REGISTER_METHOD(0x027E34F0, bool, BIsSubscribedFromFamilySharing, ());
}
