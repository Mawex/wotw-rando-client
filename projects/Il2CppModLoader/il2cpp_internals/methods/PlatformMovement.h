using namespace app;

namespace app::methods::PlatformMovement {
IL2CPP_REGISTER_METHOD(0x011654C0, void, RefreshCapsulePropertiesCache, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01165690, CapsuleCollider *, get_CapsuleCollider, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01165770, void, set_CapsuleCollider, (PlatformMovement * __this, CapsuleCollider * value));
IL2CPP_REGISTER_METHOD(0x002FBCE0, CapsuleCollider *, GetCapsuleColliderFullAccess, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01165780, float, GetCapsuleColliderRadius, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01165890, float, GetCapsuleColliderHeight, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011659A0, Bounds, GetCapsuleColliderBounds, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01165A40, void, SetCapsuleColliderEnabled, (PlatformMovement * __this, bool e));
IL2CPP_REGISTER_METHOD(0x01165AC0, void, AddToCapsuleColliderRadiusAndHeight, (PlatformMovement * __this, float r, float h));
IL2CPP_REGISTER_METHOD(0x01165CF0, void, AddToCapsuleColliderRadius, (PlatformMovement * __this, float r));
IL2CPP_REGISTER_METHOD(0x01165E50, void, AddToCapsuleColliderHeight, (PlatformMovement * __this, float h));
IL2CPP_REGISTER_METHOD(0x01165FB0, Vector3, get_GroundBinormal, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166100, Vector3, get_CeilingBinormal, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166250, Vector3, get_WallLeftBinormal, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011663A0, Vector3, get_WallRightBinormal, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011664F0, bool, get_IsOnCeiling, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166540, bool, get_IsOnGroundOrCeiling, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011665A0, bool, get_InOnAnySurface, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166610, bool, get_IsInAir, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166630, bool, get_IsFalling, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166680, float, get_AbsoluteLocalSpeedX, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166730, float, get_AbsoluteLocalSpeedY, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011667E0, Vector2, get_PhysicsSpeed, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166950, Vector3, get_GravityDirection, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166A80, Vector3, get_GravityBinormal, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166BE0, float, get_CeilingAngle, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166CB0, float, get_WallRightAngle, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166D80, float, get_WallLeftAngle, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166E60, float, get_PositionX, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166E90, void, set_PositionX, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01166F20, float, get_PositionY, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01166F50, void, set_PositionY, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01166FD0, Vector2, get_Position2D, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011670E0, void, set_Position2D, (PlatformMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01167210, void, LocalOffsetToSpheresOfCapsuleColliderFast, (PlatformMovement * __this, Vector3 * top, Vector3 * bottom));
IL2CPP_REGISTER_METHOD(0x01167540, Vector3, get_LocalOffsetToBottomSphereOfCapsuleCollider, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011679A0, Vector3, get_LocalOffsetToTopSphereOfCapsuleCollider, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01167E00, Vector3, get_LocalOffsetToBottomSphereOfCapsuleColliderCorrect, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168280, Vector3, get_LocalOffsetToTopSphereOfCapsuleColliderCorrect, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011686D0, Vector3, get_WorldOffsetToBottomSphereOfCapsuleCollider, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011687E0, Vector3, get_WorldOffsetToTopSphereOfCapsuleCollider, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011688F0, Vector3, get_WorldOffsetToBottomSphereOfCapsuleColliderCorrect, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168A00, Vector3, get_WorldOffsetToTopSphereOfCapsuleColliderCorrect, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FBD20, MovingPlatformsController *, get_MovingPlatforms, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168B10, float, get_OnGroundSpeedTreshold, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168B20, bool, get_IsOnGround, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGroundHurting, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168B90, bool, get_JustStartedFalling, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168BD0, bool, get_HasWallLeft, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168C20, bool, get_HasWallRight, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168C70, bool, get_IsOnWall, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005035C0, SurfaceMaterialType__Enum, get_GroundSurfaceMaterialType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168D00, GrabbableSurface *, GetCurrentGrabbableSurface, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01168E20, bool, IsTouchingGrabbableSurfaceInternal, (PlatformMovement * __this, List_1_UnityEngine_Collider_ * colliders, GrabbableSurface * * surface));
IL2CPP_REGISTER_METHOD(0x01169050, void, PruneRecentObjectSurfaces, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169420, bool, get_MovingHorizontally, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011694E0, bool, get_Jumping, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169510, void, ClampSpeed, (PlatformMovement * __this, float min, float max));
IL2CPP_REGISTER_METHOD(0x01169700, Vector2, get_LocalSpeed, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011697C0, void, set_LocalSpeed, (PlatformMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_LocalSpeedX, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169880, void, set_LocalSpeedX, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_LocalSpeedY, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169890, void, set_LocalSpeedY, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x011698A0, Vector2, get_WorldSpeed, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x011698E0, void, set_WorldSpeed, (PlatformMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01169920, float, get_WorldSpeedX_DEPRECATED, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169970, void, set_WorldSpeedX_DEPRECATED, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x011699C0, float, get_WorldSpeedY_DEPRECATED, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169A10, void, set_WorldSpeedY_DEPRECATED, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01169920, float, get_WorldSpeedX, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169A60, void, set_WorldSpeedX, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x011699C0, float, get_WorldSpeedY, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169AC0, void, set_WorldSpeedY, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_GravityAngle, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_GravityAngle, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01169B20, float, get_GroundAngle, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169BF0, Vector3, get_PrevPosition, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169C10, Rigidbody *, get_Rigidbody, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7620, Vector3, get_Position, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169CE0, void, set_Position, (PlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHODINFO(0x0475E950, PlatformMovement_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAllowedNonZeroZPosition, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01169F30, void, OverridePositionNextSave, (PlatformMovement * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01169FF0, Vector3, GetSavePositionAndClearOverride, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116A240, Vector3, get_HeadPosition, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116A370, void, set_HeadPosition, (PlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0116A4A0, Vector3, get_HeadPositionCorrect, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116A5D0, void, set_HeadPositionCorrect, (PlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0116A700, Vector3, get_FeetPosition, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116A830, void, set_FeetPosition, (PlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0116A960, Vector3, get_FeetPositionCorrect, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AA90, void, set_FeetPositionCorrect, (PlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0083E8C0, SuspendableMask__Enum, get_Mask, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_Mask, (PlatformMovement * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0116ABC0, Vector2, WorldToLocal, (PlatformMovement * __this, Vector2 world));
IL2CPP_REGISTER_METHOD(0x0116ABF0, Vector2, LocalToWorld, (PlatformMovement * __this, Vector2 local));
IL2CPP_REGISTER_METHOD(0x0116AC10, Vector3, get_LastOnGroundPosition, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AC30, void, set_LastOnGroundPosition, (PlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x010189B0, float, get_LastOnGroundTime, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AC50, void, set_LastOnGroundTime, (PlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x0116AC60, void, Awake, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AD80, void, Prewarm, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116ADB0, void, OnPrewarm, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AE40, void, CacheNonSerializedComponents, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AE70, void, OnCacheNonSerializedComponents, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116AFE0, void, OnDestroy, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116B080, void, OnDisable, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116B0D0, void, SetPositionOnTransform, (PlatformMovement * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0116B210, void, OnCollisionGround, (PlatformMovement * __this, Vector2 localNormal, Collider * collidedWith));
IL2CPP_REGISTER_METHOD(0x0116B520, void, DetectGroundSurfaceType, (PlatformMovement * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0116B640, void, OnCollisionWallLeft, (PlatformMovement * __this, Vector2 localNormal, Collider * collidedWith));
IL2CPP_REGISTER_METHOD(0x0116B830, void, OnCollisionWallRight, (PlatformMovement * __this, Vector2 localNormal, Collider * collidedWith));
IL2CPP_REGISTER_METHOD(0x0116BA20, void, OnCollisionCeiling, (PlatformMovement * __this, Vector2 localNormal, Collider * collidedWith));
IL2CPP_REGISTER_METHOD(0x0116BC20, void, UpdateCollisionStates, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116BDF0, void, add_OnCollisionGroundEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116BEE0, void, remove_OnCollisionGroundEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116BFD0, void, add_OnCollisionCeilingEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C0C0, void, remove_OnCollisionCeilingEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C1B0, void, add_OnCollisionWallLeftEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C2A0, void, remove_OnCollisionWallLeftEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C390, void, add_OnCollisionWallRightEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C480, void, remove_OnCollisionWallRightEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C570, void, add_OnLandOnGroundEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C660, void, remove_OnLandOnGroundEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C750, void, add_OnLandOnWallLeftEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C840, void, remove_OnLandOnWallLeftEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116C930, void, add_OnLandOnWallRightEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116CA20, void, remove_OnLandOnWallRightEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116CB10, void, add_OnLandOnCeilingEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116CC00, void, remove_OnLandOnCeilingEvent, (PlatformMovement * __this, Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0116CCF0, Ray, get_GoThroughPlatformTestingRayLeft, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116D080, Ray, get_GoThroughPlatformTestingRayRight, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116D410, void, GoThroughPlatformTestingRayLeftRight, (PlatformMovement * __this, Ray * left, Ray * right));
IL2CPP_REGISTER_METHOD(0x0116D9C0, Collider *, get_GoThroughPlatformTesterCollider, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0061BAF0, float, get_GoThroughPlatformTestingRayRadius, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116D9D0, Vector3, get_RaySidewaysOffset, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116DB40, void, __ctor, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0116ED10, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (PlatformMovement * __this));
}
