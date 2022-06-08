using namespace app;

namespace app::methods::SeinCutsceneBlocked {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E35E0, void, ChangeState, (SeinCutsceneBlocked * __this, SeinCutsceneBlocked_State__Enum state));
IL2CPP_REGISTER_METHOD(0x006E35F0, void, Normal, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E3600, void, Backwards, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E3610, bool, get_IsNormal, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E3620, bool, get_IsBackwards, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E3630, bool, get_IsTransitionPlaying, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E36A0, void, FixedUpdate, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E3C10, void, OnEnter, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x006E3CA0, void, OnExit, (SeinCutsceneBlocked * __this));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinCutsceneBlocked * __this));
}
