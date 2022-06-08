using namespace app;

namespace app::methods::CharacterAirNoDeceleration {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_NoDeceleration, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_NoDeceleration, (CharacterAirNoDeceleration * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01046700, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x00B39300, PlatformMovement *, get_PlatformMovement, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x01046720, void, Start, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x010468B0, void, OnDestroy, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x01046A40, void, ModifyHorizontalPlatformMovementSettings, (CharacterAirNoDeceleration * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04710298, CharacterAirNoDeceleration_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01046A80, void, UpdateCharacterState, (CharacterAirNoDeceleration * __this));
IL2CPP_REGISTER_METHOD(0x01046BD0, void, Serialize, (CharacterAirNoDeceleration * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (CharacterAirNoDeceleration * __this));
}
