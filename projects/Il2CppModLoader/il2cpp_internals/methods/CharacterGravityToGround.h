#include <interception_macros.h>

namespace app::methods::CharacterGravityToGround {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterGravityToGround * __this));
IL2CPP_REGISTER_METHOD(0x013006A0, CharacterGravity *, get_CharacterGravity, (CharacterGravityToGround * __this));
IL2CPP_REGISTER_METHOD(0x013006C0, PlatformMovement *, get_PlatformMovement, (CharacterGravityToGround * __this));
IL2CPP_REGISTER_METHOD(0x013006E0, void, Start, (CharacterGravityToGround * __this));
IL2CPP_REGISTER_METHOD(0x013007C0, void, UpdateCharacterState, (CharacterGravityToGround * __this));
IL2CPP_REGISTER_METHOD(0x01301010, void, SetTargetAngle, (CharacterGravityToGround * __this, float gravityAngle, bool forceChange));
IL2CPP_REGISTER_METHOD(0x01301110, void, UpdateAngle, (CharacterGravityToGround * __this));
IL2CPP_REGISTER_METHOD(0x013013A0, void, __ctor, (CharacterGravityToGround * __this));
}
