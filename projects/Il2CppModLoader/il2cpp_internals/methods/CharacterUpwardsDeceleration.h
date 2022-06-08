#include <interception_macros.h>

namespace app::methods::CharacterUpwardsDeceleration {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterUpwardsDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x01051AC0, PlatformMovement *, get_PlatformMovement, (CharacterUpwardsDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x006E35F0, void, Reset, (CharacterUpwardsDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x01316D40, void, UpdateCharacterState, (CharacterUpwardsDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x01316F80, void, Serialize, (CharacterUpwardsDeceleration * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (CharacterUpwardsDeceleration * __this));
}
