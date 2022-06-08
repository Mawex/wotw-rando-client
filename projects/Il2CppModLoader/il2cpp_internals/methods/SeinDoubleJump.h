using namespace app;

namespace app::methods::SeinDoubleJump {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7360, int32_t, get_ExtraJumpsAvailable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AC74B0, SeinDoubleJumpPuppet *, get_Puppet, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7570, bool, IsDoubleJumping, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AB1790, SeinJump *, get_Jump, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7650, bool, get_CanDoubleJump, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC76D0, bool, get_CanTurnPlay, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7710, void, OnSetReferenceToSein, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC77E0, void, Serialize, (SeinDoubleJump * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00AC7850, void, Start, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7A00, void, OnDestroy, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7BC0, void, OnResetAirLimits, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04736EC0, SeinDoubleJump_OnResetAirLimits__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC7BD0, bool, get_CanCancel, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC7C90, void, PerformDoubleJump, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC8A50, void, OnPreTurningHandlerTurn, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DD18, SeinDoubleJump_OnPreTurningHandlerTurn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC8C40, void, OnStoppedDoubleJumpAnimation, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C2F0, SeinDoubleJump_OnStoppedDoubleJumpAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC8CD0, bool, ShouldDoubleJumpAnimationKeepPlaying, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04733670, SeinDoubleJump_ShouldDoubleJumpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC8D50, void, UpdateCharacterState, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC91D0, void, ResetDoubleJump, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC9270, void, SetDoubleJump, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC9310, void, LockForDuration, (SeinDoubleJump * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00AC93D0, void, ResetLock, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC93E0, void, add_OnDoubleJumpEvent, (Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x00AC9520, void, remove_OnDoubleJumpEvent, (Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x00AC9660, void, __ctor, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x00AC9680, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AC9810, void, _PerformDoubleJump_b__35_0, (SeinDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04738D38, SeinDoubleJump__PerformDoubleJump_b__35_0__MethodInfo);
}
