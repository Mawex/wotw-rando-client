#include <interception_macros.h>

namespace app::methods::SeinCrouch {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E23E0, CharacterCapsuleController *, get_CapsuleController, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E2410, void, Start, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E25B0, void, OnDestroy, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E2750, void, ModifyHorizontalPlatformMovementSettings, (SeinCrouch * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0476AAB8, SeinCrouch_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006E2790, void, OnEnter, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E2820, void, OnExit, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E2880, void, UpdateCharacterState, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E3030, bool, get_ShouldCrouchIdleAnimationPlay, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E3040, bool, ShouldCrouchIdleAnimationKeepPlaying, (SeinCrouch * __this));
IL2CPP_REGISTER_METHODINFO(0x04704E68, SeinCrouch_ShouldCrouchIdleAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006E31F0, bool, ShouldPlayFlipAnimation, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsStatePerforming, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsCrouching, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x006E32F0, void, set_IsCrouching, (SeinCrouch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006E3510, void, OnSetReferenceToSein, (SeinCrouch * __this));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinCrouch * __this));
}
