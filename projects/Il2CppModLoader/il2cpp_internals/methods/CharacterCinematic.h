using namespace app;

namespace app::methods::CharacterCinematic {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104AAC0, bool, get_IsStatePerforming, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowedNonZeroZPosition, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104AAD0, void, OnEnter, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104AD70, void, OnExit, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (CharacterCinematic * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0104B050, bool, get_IsUsingCurve, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104B080, void, UpdateCharacterState, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104B1D0, void, UpdatePositionBasedOnCurves, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00F8F640, bool, get_IsMovingCharacter, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104B8C0, void, MoveCharacterTo, (CharacterCinematic * __this, Vector2 position, bool faceLeftOnFinish, float maxTime, Action_1_Boolean_ * onArriveAtPoint));
IL2CPP_REGISTER_METHOD(0x0104BB00, void, MoveCharacterToPositionUpdate, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104C0A0, void, FinishMovingCharacter, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104C3E0, void, Stop, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104C4F0, Vector3, CurveVector, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104C6E0, ActiveAnimationHandle, PerformAnimation, (CharacterCinematic * __this, MoonAnimation * animation, bool disableCollider));
IL2CPP_REGISTER_METHOD(0x0104C8C0, void, OnAnimationEnd, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104CB70, void, CleanUp, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104CBC0, ActiveAnimationHandle, PerformAnimation, (CharacterCinematic * __this, MoonAnimation * animation, Vector3 initialPosition, AnimationCurve * curveX, AnimationCurve * curveY, AnimationCurve * curveZ, float interpolationDuration, bool disableCollider));
IL2CPP_REGISTER_METHOD(0x0104CF30, void, OnEnable, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104D0D0, void, OnDisable, (CharacterCinematic * __this));
IL2CPP_REGISTER_METHOD(0x0104D280, void, OnModifyHorizontalPlatformMovementSettings, (CharacterCinematic * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04752EC8, CharacterCinematic_OnModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A5ACC0, void, ModifyGravityPlatformMovementSettingsEvent, (CharacterCinematic * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04750178, CharacterCinematic_ModifyGravityPlatformMovementSettingsEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0104D2E0, void, OnRootMotionProcess, (CharacterCinematic * __this, Vector3 rootSpeed));
IL2CPP_REGISTER_METHODINFO(0x04793F18, CharacterCinematic_OnRootMotionProcess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0104D410, void, __ctor, (CharacterCinematic * __this));
}
