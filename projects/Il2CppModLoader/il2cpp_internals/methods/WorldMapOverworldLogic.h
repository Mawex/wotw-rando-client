#include <interception_macros.h>

namespace app::methods::WorldMapOverworldLogic {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameReset, (WorldMapOverworldLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x047513C0, WorldMapOverworldLogic_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00584920, void, Awake, (WorldMapOverworldLogic * __this));
IL2CPP_REGISTER_METHOD(0x00584AC0, void, OnDestroy, (WorldMapOverworldLogic * __this));
IL2CPP_REGISTER_METHOD(0x00584C50, Vector3, WorldToOverworld, (WorldMapOverworldLogic * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00584FA0, float, GetWorldToOverworldDepth, (WorldMapOverworldLogic * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WorldMapOverworldLogic * __this));
}
