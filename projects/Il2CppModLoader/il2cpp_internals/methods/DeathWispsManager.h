#include <interception_macros.h>

namespace app::methods::DeathWispsManager {
IL2CPP_REGISTER_METHOD(0x00DDFBB0, SeinDeathsManager *, get_DeathsManager, (DeathWispsManager * __this));
IL2CPP_REGISTER_METHOD(0x00DDFC30, void, Awake, (DeathWispsManager * __this));
IL2CPP_REGISTER_METHOD(0x00DDFDD0, void, OnDestroy, (DeathWispsManager * __this));
IL2CPP_REGISTER_METHOD(0x00DDFF70, void, OnGameReset, (DeathWispsManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A690, DeathWispsManager_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DDFF80, void, Refresh, ());
IL2CPP_REGISTER_METHOD(0x00DE0060, void, FixedUpdate, (DeathWispsManager * __this));
IL2CPP_REGISTER_METHOD(0x00DE02B0, void, UpdateWisps, (DeathWispsManager * __this));
IL2CPP_REGISTER_METHOD(0x00DE0950, void, __ctor, (DeathWispsManager * __this));
}
