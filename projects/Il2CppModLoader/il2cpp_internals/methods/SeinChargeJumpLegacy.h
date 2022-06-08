using namespace app;

namespace app::methods::SeinChargeJumpLegacy {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A50B70, PlayerAbilities *, get_PlayerAbilities, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A50B90, SeinChargeJump *, get_ChargeJump, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A52480, CharacterUpwardsDeceleration *, get_UpwardsDeceleration, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A524B0, void, OnDoubleJump, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A52500, void, UpdateCharacterState, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A52570, void, ChangeState, (SeinChargeJumpLegacy * __this, SeinChargeJumpLegacy_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A52660, void, UpdateState, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A52F60, bool, get_CanChargeJump, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A53000, void, PerformChargeJump, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A535C0, bool, ShouldChargeJumpAnimationKeepPlaying, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHODINFO(0x04731AE8, SeinChargeJumpLegacy_ShouldChargeJumpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A536F0, void, add_OnJumpEvent, (SeinChargeJumpLegacy * __this, Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x00A537E0, void, remove_OnJumpEvent, (SeinChargeJumpLegacy * __this, Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x00A538D0, void, OnSetReferenceToSein, (SeinChargeJumpLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00A53900, void, Serialize, (SeinChargeJumpLegacy * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A53940, void, __ctor, (SeinChargeJumpLegacy * __this));
}
