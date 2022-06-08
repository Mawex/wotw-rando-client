#include <interception_macros.h>

namespace app::methods::SeinWallChargeJump {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A50B70, PlayerAbilities *, get_PlayerAbilities, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA8590, void, OnDoubleJump, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA85A0, void, UpdateCharacterState, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x003FFA40, float, get_AngularElevation, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA8590, void, OnExit, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA8740, void, Start, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA88E0, void, OnDestroy, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA8BA0, void, OnAnimationEnd, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04717AE0, SeinWallChargeJump_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA8C10, void, OnAnimationStart, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA8C80, void, ModifyGravityPlatformMovementSettings, (SeinWallChargeJump * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04703168, SeinWallChargeJump_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA8CB0, void, ChangeState, (SeinWallChargeJump * __this, SeinWallChargeJump_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00AA9030, bool, get_IsCharged, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA9240, bool, get_IsCharging, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA9450, void, UpdateState, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA9590, void, UpdateNormalState, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AA9640, void, UpdateJumpingState, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AAA030, void, UpdateAimElevation, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AAA360, void, UpdateAimingState, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AAA5F0, bool, get_CanChargeJump, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AAA6A0, void, OnRestoreCheckpoint, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04731808, SeinWallChargeJump_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AAA6B0, void, OnAwake, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_CharacterSpriteMirror, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x003FFE20, bool, get_SpriteMirrorLock, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AAA850, void, set_SpriteMirrorLock, (SeinWallChargeJump * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00AAA910, void, PerformChargeJump, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A535C0, bool, ShouldChargeJumpAnimationKeepPlaying, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x047354B0, SeinWallChargeJump_ShouldChargeJumpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AAB1E0, void, OnSetReferenceToSein, (SeinWallChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00AAB2B0, void, __ctor, (SeinWallChargeJump * __this));
}
