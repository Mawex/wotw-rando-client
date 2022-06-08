#include <interception_macros.h>

namespace app::methods::SeinEdgeClamber {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x00ACB210, SeinClamberPuppet *, get_Puppet, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x00ACB2D0, void, OnSetReferenceToSein, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_CharacterGravity, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x00ACB3B0, void, Start, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x00ACB660, void, OnDestroy, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x00ACB920, void, ModifyGravityPlatformMovementSettings, (SeinEdgeClamber * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04728848, SeinEdgeClamber_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACB9A0, void, ModifyHorizontalPlatformMovementSettings, (SeinEdgeClamber * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0472A008, SeinEdgeClamber_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACBA40, bool, IsLandOnTrigger, (SeinEdgeClamber * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00ACBB90, void, UpdateCharacterState, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x00AAE2B0, void, OnAnimationStart, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHODINFO(0x04799418, SeinEdgeClamber_OnAnimationStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AAE250, void, OnAnimationEnd, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D298, SeinEdgeClamber_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACC530, void, PerformEdgeClamber, (SeinEdgeClamber * __this, bool noDeceleration));
IL2CPP_REGISTER_METHOD(0x00ACCE90, void, ExecuteClamberEffects, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldAnimationKeepPlaying, (SeinEdgeClamber * __this));
IL2CPP_REGISTER_METHODINFO(0x047645B0, SeinEdgeClamber_ShouldAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACD190, void, __ctor, (SeinEdgeClamber * __this));
}
