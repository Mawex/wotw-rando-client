#include <interception_macros.h>

namespace app::methods::SeinCinematic {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A578F0, bool, get_IsStatePerforming, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowedNonZeroZPosition, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsMovingOri, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A57930, float, get_MoveRate, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A57950, float, get_MoveAnimationBlendParameter, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A57970, bool, get_IsUsingCurve, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A579A0, void, OnEnter, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A57C70, void, OnExit, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A57F30, void, UpdateCharacterState, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A58170, void, UpdatePositionBasedOnCurves, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A586F0, Vector3, CurveVector, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A58850, ActiveAnimationHandle, PerformAnimation, (SeinCinematic * __this, MoonAnimation * animation, bool disableCollider, bool usePerspectiveRotation, float disableColliderDurationOffset, bool dismount, EventTriggerAnimator * mountTrigger));
IL2CPP_REGISTER_METHOD(0x00A59200, void, RemountKuCallback, (SeinCinematic * __this));
IL2CPP_REGISTER_METHODINFO(0x04753150, SeinCinematic_RemountKuCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A593B0, void, ForceMount, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A594C0, void, Remount, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A59630, ActiveAnimationHandle, PerformAnimation, (SeinCinematic * __this, MoonAnimation * animation, Vector3 initialPosition, AnimationCurve * curveX, AnimationCurve * curveY, AnimationCurve * curveZ, float interpolationDuration, bool disableCollider, bool usePerspectiveAdjustment, float disableColliderDurationOffset, bool dismount, EventTriggerAnimator * mountTrigger));
IL2CPP_REGISTER_METHOD(0x00A598C0, void, ScheduleInitialPositionOffsetUpdate, (SeinCinematic * __this, Vector3 initialPosition));
IL2CPP_REGISTER_METHOD(0x00A598E0, void, ResetPerspectiveAdjustment, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A59AC0, void, OnAnimationEnd, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A59C70, void, MoveOriTo, (SeinCinematic * __this, Vector2 position, SeinCinematic_MoveOriToPositionMode__Enum moveMode, bool faceLeftOnFinish, float maxTime, Action_1_Boolean_ * onArriveAtPoint));
IL2CPP_REGISTER_METHOD(0x00A59EE0, void, MoveOriToPositionUpdate, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5A430, void, FinishMovingOri, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5A5D0, void, Stop, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5A630, void, Cancel, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5A830, void, OnSetReferenceToSein, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5AAA0, void, OnDestroy, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5AC60, void, OnModifyHorizontalPlatformMovementSettings, (SeinCinematic * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0474A040, SeinCinematic_OnModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A5ACC0, void, ModifyGravityPlatformMovementSettingsEvent, (SeinCinematic * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0474D958, SeinCinematic_ModifyGravityPlatformMovementSettingsEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A5AD00, void, OnRootMotionProcess, (SeinCinematic * __this, Vector3 rootSpeed));
IL2CPP_REGISTER_METHODINFO(0x04786D58, SeinCinematic_OnRootMotionProcess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00A5AE80, void, __cctor, ());
}
