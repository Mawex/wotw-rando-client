#include <interception_macros.h>

namespace app::methods::CharacterJumpSustain {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterJumpSustain * __this));
IL2CPP_REGISTER_METHOD(0x01301620, CharacterGravity *, get_CharacterGravity, (CharacterJumpSustain * __this));
IL2CPP_REGISTER_METHOD(0x01051AC0, PlatformMovement *, get_PlatformMovement, (CharacterJumpSustain * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (CharacterJumpSustain * __this));
IL2CPP_REGISTER_METHOD(0x01301640, void, Serialize, (CharacterJumpSustain * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x013016D0, void, UpdateCharacterState, (CharacterJumpSustain * __this));
IL2CPP_REGISTER_METHOD(0x01301A60, void, SetAmountOfSpeedToLose, (CharacterJumpSustain * __this, float speed, float jumpStopDecelerationMultiplier, bool disableSustainForThisJump));
IL2CPP_REGISTER_METHOD(0x0102C720, void, DisableSustainForCurrentJump, (CharacterJumpSustain * __this));
IL2CPP_REGISTER_METHOD(0x01301A80, void, __ctor, (CharacterJumpSustain * __this));
}
