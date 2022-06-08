#include <interception_macros.h>

namespace app::methods::SteamManager {
IL2CPP_REGISTER_METHOD(0x009BF2B0, SteamManager *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x009BF470, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x009BF550, bool, get_Initialized, ());
IL2CPP_REGISTER_METHOD(0x009BF570, void, SteamAPIDebugTextHook, (int32_t nSeverity, StringBuilder * pchDebugText));
IL2CPP_REGISTER_METHOD(0x009BF610, void, Awake, (SteamManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ABE0, SteamManager_Awake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BFA30, void, OnEnable, (SteamManager * __this));
IL2CPP_REGISTER_METHOD(0x009BFB00, void, OnDestroy, (SteamManager * __this));
IL2CPP_REGISTER_METHOD(0x009BFBE0, void, Update, (SteamManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SteamManager * __this));
}
