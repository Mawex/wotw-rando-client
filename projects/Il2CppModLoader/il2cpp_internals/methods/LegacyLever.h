using namespace app;

namespace app::methods::LegacyLever {
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InRange, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_InRange, (LegacyLever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsGrabbed, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsGrabbed, (LegacyLever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTurn, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_Radius, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FBC80, Transform *, get_Transform, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x003FF2B0, LeverDirections__Enum, get_Direction, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FD750, LeverDirections__Enum, get_OriginalDirection, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_OriginalDirection, (LegacyLever * __this, LeverDirections__Enum value));
IL2CPP_REGISTER_METHOD(0x00A28F50, bool, get_NeedsToBeOnGround, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x005065F0, LeverMode__Enum, get_LeverType, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, SoundHost *, get_SoundHost, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A28F60, LeverPuppet *, get_Puppet, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29020, void, OnEnable, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29100, void, OnDisable, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A291C0, void, Awake, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29450, void, OnDestroy, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29510, void, OnEnterLever, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29650, void, OnExitLever, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A297A0, void, OnGrabLever, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A297D0, void, OnReleaseLever, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29820, void, OnPushLeverLeft, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29950, void, OnPushLeverRight, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29A80, void, OnPushLeverMiddle, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29B00, void, FixedUpdate, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29B90, float, GetGroundLevelOffset, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A29C20, void, HackyRotatingHandle, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A310, bool, PlayLeverAnimation, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A320, Vector3, get_Position, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A3B0, void, set_Position, (LegacyLever * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00A2A430, float, get_SeinPositionOffset, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A440, void, SetLeverDirection, (LegacyLever * __this, LeverDirections__Enum leverDirection));
IL2CPP_REGISTER_METHOD(0x00A2A6B0, void, Serialize, (LegacyLever * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FBD00, Action *, get_GrabLeverEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_GrabLeverEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBD20, Action *, get_ReleaseLeverEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_ReleaseLeverEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBD40, Action *, get_LeverLeftEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_LeverLeftEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBD60, Action *, get_LeverRightEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_LeverRightEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00660430, Action *, get_LeverLeftFailedEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00660440, void, set_LeverLeftFailedEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x005B0220, Action *, get_LeverRightFailedEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_LeverRightFailedEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00418200, Action *, get_LeverMiddleEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x008760C0, void, set_LeverMiddleEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0049F2B0, Action *, get_LeverEnterEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x006A6390, void, set_LeverEnterEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x006A63A0, Action *, get_LeverExitEvent, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_LeverExitEvent, (LegacyLever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0065FBA0, Func_1_Boolean_ *, get_CanLeverLeft, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_CanLeverLeft, (LegacyLever * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x0065FBC0, Func_1_Boolean_ *, get_CanLeverRight, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_CanLeverRight, (LegacyLever * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, get_IsSuspended, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x0061E5D0, void, set_IsSuspended, (LegacyLever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0061E5E0, SuspendableMask__Enum, get_Mask, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A750, void, set_Mask, (LegacyLever * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00A2A810, bool, get_CanBeGrabbed, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A8F0, void, AdjustLeverOnGround, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00A2AC10, void, OnFrustumEnter, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2AC20, void, OnFrustumExit, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_InsideFrustum, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2AC30, Bounds, get_Bounds, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2AC50, void, OnDrawGizmos, (LegacyLever * __this));
IL2CPP_REGISTER_METHOD(0x00A2AD00, void, __ctor, (LegacyLever * __this));
}
