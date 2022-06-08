using namespace app;

namespace app::methods::Steamworks::GameServer {
IL2CPP_REGISTER_METHOD(0x015FAEF0, bool, Init, (uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, EServerMode__Enum eServerMode, String * pchVersionString));
IL2CPP_REGISTER_METHOD(0x015FB200, void, Shutdown, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FB390, void, RunCallbacks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FB420, void, ReleaseCurrentThreadMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FB4B0, bool, BSecure, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FB540, CSteamID, GetSteamID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FB650, HSteamPipe, GetHSteamPipe, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FB6E0, HSteamUser, GetHSteamUser, (MethodInfo * method));
}
