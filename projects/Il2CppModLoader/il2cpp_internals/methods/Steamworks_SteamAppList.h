using namespace app;

namespace app::methods::Steamworks::SteamAppList {
IL2CPP_REGISTER_METHOD(0x027E2260, uint32_t, GetNumInstalledApps, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027E2310, uint32_t, GetInstalledApps, (AppId_t__Array * pvecAppID, uint32_t unMaxAppIDs));
IL2CPP_REGISTER_METHOD(0x027E23E0, int32_t, GetAppName, (AppId_t nAppID, String * * pchName, int32_t cchNameMax));
IL2CPP_REGISTER_METHOD(0x027E2580, int32_t, GetAppInstallDir, (AppId_t nAppID, String * * pchDirectory, int32_t cchNameMax));
IL2CPP_REGISTER_METHOD(0x027E2720, int32_t, GetAppBuildId, (AppId_t nAppID));
}
