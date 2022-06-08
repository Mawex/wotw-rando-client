#include <interception_macros.h>

namespace app::methods::SeinSoulFlame {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DB4F0, void, add_OnSoulFlameCast, (Action * value));
IL2CPP_REGISTER_METHOD(0x005DB630, void, remove_OnSoulFlameCast, (Action * value));
IL2CPP_REGISTER_METHOD(0x005DB770, bool, get_SoulFlameExists, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DB810, Vector3, get_SoulFlamePosition, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DB900, void, OnAwake, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DBBB0, void, OnGameReset, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHODINFO(0x047372B8, SeinSoulFlame_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005DBBC0, void, OnRestoreCheckpoint, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHODINFO(0x04710640, SeinSoulFlame_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005DBC20, void, OnDestroy, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DBF60, void, FillSoulFlameBar, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DBF70, bool, get_InsideCheckpointMarker, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC0A0, SeinSoulFlame_SoulFlamePlacementSafety__Enum, get_IsSafeToCastSoulFlame, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC3F0, float, get_BarValue, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC410, float, get_CooldownRemaining, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC420, bool, get_ShowFlameOnUI, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_SoulFlameCost, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC4F0, bool, get_CanAffordSoulFlame, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC530, bool, get_AllowedToAccessSkillTree, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC580, bool, get_PlayerCouldSoulFlame, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DC790, void, HandleNagging, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DCEA0, void, HandleDelayOnGround, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DD010, void, UpdateCharacterState, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DDB40, void, CastSoulFlame, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DE230, void, HandleCharging, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DE800, void, HandleCooldown, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DE960, void, HandleCheckpointMarkerVisibility, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DEC70, void, HandleSkillTreeHint, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DEF60, void, HideOtherMessages, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DF080, void, OnSetReferenceToSein, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DF0A0, void, Serialize, (SeinSoulFlame * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005DF590, void, SpawnSoulFlame, (SeinSoulFlame * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x005DF6E0, void, DestroySoulFlame, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DF7F0, void, __ctor, (SeinSoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x005DF970, void, __cctor, ());
}
