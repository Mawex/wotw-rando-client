using namespace app;

namespace app::methods::Steamworks::SteamAPI {
IL2CPP_REGISTER_METHOD(0x027E1F00, bool, Init, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01600E60, void, Shutdown, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01600EF0, bool, RestartAppIfNecessary, (AppId_t unOwnAppID));
IL2CPP_REGISTER_METHOD(0x01600F90, void, ReleaseCurrentThreadMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016011C0, void, RunCallbacks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01601500, bool, IsSteamRunning, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016016E0, HSteamUser, GetHSteamUserCurrent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01601800, HSteamPipe, GetHSteamPipe, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01601930, HSteamUser, GetHSteamUser, (MethodInfo * method));
}
