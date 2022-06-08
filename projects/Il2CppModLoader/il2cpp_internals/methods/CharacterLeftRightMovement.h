#include <interception_macros.h>

namespace app::methods::CharacterLeftRightMovement {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01051AC0, PlatformMovement *, get_PlatformMovement, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301AA0, CharacterSpriteMirror *, get_SpriteMirror, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, HorizontalPlatformMovementSettings *, get_CurrentSettings, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, HorizontalPlatformMovementSettings *, get_BaseSettings, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FBD40, ICharacterTurningHandler *, get_TurningHandler, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301AE0, void, set_TurningHandler, (CharacterLeftRightMovement * __this, ICharacterTurningHandler * value));
IL2CPP_REGISTER_METHOD(0x01301B00, bool, get_TurningHandlerIsPlaying, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301BC0, void, Serialize, (CharacterLeftRightMovement * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01301C10, HorizontalPlatformMovementSettings_SpeedSet *, get_SpeedSet, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301C80, HorizontalPlatformMovementSettings_SpeedSet *, get_BaseSpeedSet, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301CF0, float, get_HorizontalInput, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B31760, void, set_HorizontalInput, (CharacterLeftRightMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01301D30, float, get_BaseHorizontalInput, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B31760, void, set_BaseHorizontalInput, (CharacterLeftRightMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301D40, void, ReverseHorizontalMovement, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01301EE0, void, FixedUpdate, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01302710, void, LateUpdate, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01302770, void, UpdateSettings, (CharacterLeftRightMovement * __this));
IL2CPP_REGISTER_METHOD(0x01302830, void, add_ModifyHorizontalPlatformMovementSettingsEvent, (CharacterLeftRightMovement * __this, Action_1_HorizontalPlatformMovementSettings_ * value));
IL2CPP_REGISTER_METHOD(0x01302920, void, remove_ModifyHorizontalPlatformMovementSettingsEvent, (CharacterLeftRightMovement * __this, Action_1_HorizontalPlatformMovementSettings_ * value));
IL2CPP_REGISTER_METHOD(0x01302A10, void, __ctor, (CharacterLeftRightMovement * __this));
}
