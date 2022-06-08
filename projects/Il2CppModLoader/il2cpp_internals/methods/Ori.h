#include <interception_macros.h>

namespace app::methods::Ori {
IL2CPP_REGISTER_METHOD(0x0061E140, Transform *, get_m_target, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E240, Vector3, get_TargetPosition, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_EnableHoverWobbling, (Ori * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_EnableHoverWobbling, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E300, Vector3, get_HoverOffset, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E4B0, Vector3, get_Position, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E540, void, set_Position, (Ori * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, get_IsSuspended, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E5D0, void, set_IsSuspended, (Ori * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0061E5E0, SuspendableMask__Enum, get_Mask, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E5F0, void, set_Mask, (Ori * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0061E6B0, void, Awake, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E920, void, OnEnable, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061E930, void, OnDestroy, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061EB00, void, Serialize, (Ori * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0061EB70, void, OnRestoreCheckpoint, (Ori * __this));
IL2CPP_REGISTER_METHODINFO(0x04735C90, Ori_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0061EBC0, bool, IsListening, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061EBD0, void, ChangeState, (Ori * __this, Ori_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0061E920, void, MoveOriToPlayer, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061ED60, void, MoveOriBackToPlayer, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061EF60, void, MoveOriToPosition, (Ori * __this, Vector3 position, float duration));
IL2CPP_REGISTER_METHOD(0x0061F270, void, MoveOriAlongCurve, (Ori * __this, AnimationCurve * positionX, AnimationCurve * positionY, AnimationCurve * positionZ, Vector3 position, float duration));
IL2CPP_REGISTER_METHOD(0x0061F3F0, void, UpdateState, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061F600, void, UpdateMoveAlongCurveState, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x0061FAA0, void, UpdateMoveToPositionState, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620040, void, UpdateHoveringState, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620700, void, FixedUpdate, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620940, void, BackToPlayerController, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620970, Color, SetRGB, (Ori * __this, Color old, Color newColor));
IL2CPP_REGISTER_METHOD(0x00620990, void, StopTwinkle, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x006209D0, void, StartTwinkle, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620A10, void, StartListening, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620A20, void, StopListening, (Ori * __this));
IL2CPP_REGISTER_METHOD(0x00620A30, void, __ctor, (Ori * __this));
}
