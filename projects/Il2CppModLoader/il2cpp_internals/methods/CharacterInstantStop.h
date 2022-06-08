#include <interception_macros.h>

namespace app::methods::CharacterInstantStop {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterInstantStop * __this));
IL2CPP_REGISTER_METHOD(0x01046700, CharacterLeftRightMovement *, get_LeftRightMovement, (CharacterInstantStop * __this));
IL2CPP_REGISTER_METHOD(0x00B39300, PlatformMovement *, get_PlatformMovement, (CharacterInstantStop * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (CharacterInstantStop * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (CharacterInstantStop * __this));
IL2CPP_REGISTER_METHOD(0x013013D0, void, LockForDuration, (CharacterInstantStop * __this, float duration));
IL2CPP_REGISTER_METHOD(0x013013E0, void, Serialize, (CharacterInstantStop * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01301430, void, UpdateCharacterState, (CharacterInstantStop * __this));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (CharacterInstantStop * __this));
}
