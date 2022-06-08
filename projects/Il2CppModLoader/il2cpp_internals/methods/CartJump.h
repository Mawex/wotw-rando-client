#include <interception_macros.h>

namespace app::methods::CartJump {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B391F0, bool, get_CanJump, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B39300, CharacterPlatformMovement *, get_PlatformMovement, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B39320, bool, get_SpriteMirrorLock, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B39330, void, set_SpriteMirrorLock, (CartJump * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B393D0, CharacterSpriteMirror *, get_CharacterSpriteMirror, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetReferenceToSein, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B39410, void, UpdateCharacterState, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B394D0, float, CalculateSpeedFromHeight, (CartJump * __this, float height));
IL2CPP_REGISTER_METHOD(0x00B395C0, void, PerformJump, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B399D0, void, PerformRunningJump, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B39C70, void, CacheDelegates, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B39EC0, bool, ShouldJumpMovingAnimationKeepPlaying, (CartJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F910, CartJump_ShouldJumpMovingAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B39F40, void, OnAnimationEnd, (CartJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04767DF0, CartJump_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B39FA0, void, OnAnimationStart, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B3A000, void, Serialize, (CartJump * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00B3A060, void, OnAwake, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B3A200, void, OnDestroy, (CartJump * __this));
IL2CPP_REGISTER_METHOD(0x00B3A3B0, void, OnRestoreCheckpoint, (CartJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04717D18, CartJump_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B3A3C0, void, __ctor, (CartJump * __this));
}
