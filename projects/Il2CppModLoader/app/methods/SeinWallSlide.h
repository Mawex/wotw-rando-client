#pragma once
#include <interception_macros.h>

namespace app::methods::SeinWallSlide {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror *, get_SpriteMirror, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement *, get_LeftRightMovement, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7EB40, app::SeinDoubleJump *, get_DoubleJump, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1790, app::SeinJump *, get_Jump, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity *, get_Gravity, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement *, get_PlatformMovement, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB17D0, bool, get_IsOnWall, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1810, bool, get_CanWallSlide, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1980, bool, get_IsWallSliding, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB19A0, bool, get_ShouldWallSlideUpAnimationPlay, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1A10, bool, get_ShouldWallSlideDownAnimationPlay, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1A20, void, OnSetReferenceToSein, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1E00, app::SeinWallSlidePuppet *, get_Puppet, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB1EC0, void, Start, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB2190, void, OnDestroy, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB25B0, void, ModifyGravityPlatformMovementSettings, (app::SeinWallSlide * this_ptr, app::GravityPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x04786CA0, SeinWallSlide_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AB2720, void, ModifyHorizontalPlatformMovementSettings, (app::SeinWallSlide * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x0478DCF8, SeinWallSlide_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AB2760, bool, get_IsWallSlideUpPlaying, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB2900, void, UpdateCharacterState, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB2E60, void, HandleCollision, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793910, SeinWallSlide_HandleCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AB2F00, void, RefreshState, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB2F80, void, OnExit, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB3010, app::SurfaceMaterialType__Enum, get_WallSurfaceMaterialType, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB3040, void, HandleEffects, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB3810, void, ExecuteEnterWallEffects, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB3B10, void, ExecuteExitWallEffects, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB3E10, void, ChangeState, (app::SeinWallSlide * this_ptr, app::SeinWallSlide_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00AB40A0, void, ResetMovingOffWallLockTimer, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB41F0, void, UpdateState, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4640, bool, ShouldWallSlideUpAnimationKeepPlaying, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796A38, SeinWallSlide_ShouldWallSlideUpAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AB4940, bool, ShouldWallSlideDownAnimationKeepPlaying, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475AD68, SeinWallSlide_ShouldWallSlideDownAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AB4AA0, bool, CanDash, (app::SeinWallSlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4CA0, void, Serialize, (app::SeinWallSlide * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x00AB4CF0, void, ctor, (app::SeinWallSlide * this_ptr))
}
