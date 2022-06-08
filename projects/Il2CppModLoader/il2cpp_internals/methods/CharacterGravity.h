using namespace app;

namespace app::methods::CharacterGravity {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x01051AC0, CharacterPlatformMovement *, get_PlatformMovement, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, GravityPlatformMovementSettings *, get_CurrentSettings, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, GravityPlatformMovementSettings *, get_BaseSettings, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x01051AE0, void, UpdateCharacterState, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x01051EF0, void, UpdateSettings, (CharacterGravity * __this));
IL2CPP_REGISTER_METHOD(0x01051FC0, void, add_ModifyGravityPlatformMovementSettingsEvent, (CharacterGravity * __this, Action_1_GravityPlatformMovementSettings_ * value));
IL2CPP_REGISTER_METHOD(0x010520B0, void, remove_ModifyGravityPlatformMovementSettingsEvent, (CharacterGravity * __this, Action_1_GravityPlatformMovementSettings_ * value));
IL2CPP_REGISTER_METHOD(0x010521A0, void, Serialize, (CharacterGravity * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01052250, void, __ctor, (CharacterGravity * __this));
}
