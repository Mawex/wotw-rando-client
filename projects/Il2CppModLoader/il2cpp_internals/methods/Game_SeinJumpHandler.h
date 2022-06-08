#include <interception_macros.h>

namespace app::methods::Game::SeinJumpHandler {
IL2CPP_REGISTER_METHOD(0x01529030, SeinCharacter *, get_Sein, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ButtonInputType__Enum, get_ButtonInputType, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x015290C0, IComboMove *, GetComboMove, (SeinJumpHandler * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_Moon_ComboSystem_IComboMove_ *, get_ComboMoves, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ComboMoves, (SeinJumpHandler * __this, List_1_Moon_ComboSystem_IComboMove_ * value));
IL2CPP_REGISTER_METHOD(0x00E15C70, AbilityType__Enum, get_ComboAbilityType, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_ProviderCooldown, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_ProviderCooldown, (SeinJumpHandler * __this, float value));
IL2CPP_REGISTER_METHOD(0x00504E70, float, get_ProviderCooldownTimer, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00504E80, void, set_ProviderCooldownTimer, (SeinJumpHandler * __this, float value));
IL2CPP_REGISTER_METHOD(0x01529100, bool, get_MoveHasFinished, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x015291E0, bool, CanExecute, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x01529B60, void, PerformJump, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, CharacterState *, get_LastJumpExecuted, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x0152ACF0, void, EnterMove, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitMove, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InterruptMove, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x0152AD00, bool, get_IsAttackButtonDown, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x0152ADB0, bool, get_OnAttackButtonPressed, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x0152AE80, bool, get_OnAttackButtonReleased, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_MoveCooldown, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_MoveCooldown, (SeinJumpHandler * __this, float value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_MoveCooldownTimer, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_MoveCooldownTimer, (SeinJumpHandler * __this, float value));
IL2CPP_REGISTER_METHOD(0x00417920, ComboMoveType__Enum, get_ComboMoveType, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_WasGroundedSinceLastExecution, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_WasGroundedSinceLastExecution, (SeinJumpHandler * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeInterruptedBy, (SeinJumpHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanInputBeQueued, (SeinJumpHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (SeinJumpHandler * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (SeinJumpHandler * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (SeinJumpHandler * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SeinJumpHandler * __this));
}
