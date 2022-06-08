using namespace app;

namespace app::methods::Steamworks::SteamGameServerApps {
IL2CPP_REGISTER_METHOD(0x027F46A0, bool, BIsSubscribed, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F46C0, bool, BIsLowViolence, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F46E0, bool, BIsCybercafe, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4700, bool, BIsVACBanned, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4720, String *, GetCurrentGameLanguage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4750, String *, GetAvailableGameLanguages, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4780, bool, BIsSubscribedApp, (AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027F47B0, bool, BIsDlcInstalled, (AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027F47E0, uint32_t, GetEarliestPurchaseUnixTime, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027F4810, bool, BIsSubscribedFromFreeWeekend, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4830, int32_t, GetDLCCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4850, bool, BGetDLCDataByIndex, (int32_t iDLC, AppId_t * pAppID, bool * pbAvailable, String * * pchName, int32_t cchNameBufferSize));
IL2CPP_REGISTER_METHOD(0x027F49A0, void, InstallDLC, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027F49D0, void, UninstallDLC, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027F4A00, void, RequestAppProofOfPurchaseKey, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x027F4A30, bool, GetCurrentBetaName, (String * * pchName, int32_t cchNameBufferSize));
IL2CPP_REGISTER_METHOD(0x027F4B50, bool, MarkContentCorrupt, (bool bMissingFilesOnly));
IL2CPP_REGISTER_METHOD(0x027F4B80, uint32_t, GetInstalledDepots, (AppId_t appID, DepotId_t__Array * pvecDepots, uint32_t cMaxDepots));
IL2CPP_REGISTER_METHOD(0x027F4BD0, uint32_t, GetAppInstallDir, (AppId_t appID, String * * pchFolder, uint32_t cchFolderBufferSize));
IL2CPP_REGISTER_METHOD(0x027F4D00, bool, BIsAppInstalled, (AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027F4D30, CSteamID, GetAppOwner, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F4DE0, String *, GetLaunchQueryParam, (String * pchKey));
IL2CPP_REGISTER_METHOD(0x027F4FF0, bool, GetDlcDownloadProgress, (AppId_t nAppID, uint64_t * punBytesDownloaded, uint64_t * punBytesTotal));
IL2CPP_REGISTER_METHOD(0x027F5040, int32_t, GetAppBuildId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F5060, void, RequestAllProofOfPurchaseKeys, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F5080, SteamAPICall_t, GetFileDetails, (String * pszFileName));
IL2CPP_REGISTER_METHOD(0x027F52A0, int32_t, GetLaunchCommandLine, (String * * pszCommandLine, int32_t cubCommandLine));
IL2CPP_REGISTER_METHOD(0x027F53C0, bool, BIsSubscribedFromFamilySharing, (MethodInfo * method));
}
