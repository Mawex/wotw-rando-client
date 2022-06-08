using namespace app;

namespace app::methods::Moon::Sensor {
IL2CPP_REGISTER_METHOD(0x00ECCB90, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (Sensor * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECCC30, void, set_Mask, (Sensor * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00ECCCE0, GameObject *, get_TrackedCharacter, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECCE10, Vector3, get_CharacterPosition, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECCF20, Vector3, CharacterPositionEx, (Transform * fallback));
IL2CPP_REGISTER_METHOD(0x00ECD0D0, float, get_DistanceToCharacter, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECD170, float, DistanceToCharacterFrom, (Transform * from));
IL2CPP_REGISTER_METHOD(0x00ECD350, float, get_DistanceToCharacterX, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECD510, float, get_DistanceToCharacterY, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECD6D0, Vector2, get_DirectionToCharacter, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECD920, float, get_DirectionToCharacterX, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDAB0, float, get_DirectionToCharacterY, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDC40, bool, get_CanSeeCharacter, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDC80, bool, get_HasLastSeenPosition, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDD10, bool, get_HasLostSightLocation, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x0074B530, float, get_TimeSinceTargetLost, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x003FFA40, float, get_TimeSinceTargetAcquired, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDDA0, Vector3, get_LastSeenPosition, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDE80, Vector3, get_LostSightLocation, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECDF60, float, get_RelativeTargetSpeedX, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECE280, bool, get_HasLineOfSightToOri, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECE3B0, bool, get_HasOriInConeOfVision, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECE790, bool, get_HasClearLineOfSightToOri, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECE8C0, Vector3, get_OriPredictedPosition, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECEAA0, Vector2, get_RayOriginPosition, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECEBB0, void, OnCacheSerializedComponents, (Sensor * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00ECECF0, void, Awake, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF0F0, void, OnDisable, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF290, void, OnDestroy, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF450, void, OnPoolSpawned, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00992AA0, void, ForceSeeCharacter, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF5F0, Sensor_CanSeeCharacterHelper, CanSeeCharacterHelperFullAccess, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF660, void, CantSeeCharacter, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF690, void, RefreshCanSeeCharacter, (Sensor * __this, Vector3 start, Vector2 target, bool targetInRange));
IL2CPP_REGISTER_METHOD(0x00ECF700, bool, get_UpdateCanSeeCharacterAsync, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECF7A0, void, UpdateCanSeeCharacterState, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECFC40, void, Update, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ECFC50, void, FixedUpdate, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ED0400, bool, Raycast, (Sensor * __this, Vector3 origin, Vector3 target, int32_t index));
IL2CPP_REGISTER_METHOD(0x00ED0710, bool, HasLineOfSightTo, (Sensor * __this, Vector2 target));
IL2CPP_REGISTER_METHOD(0x00ED0750, bool, HasLineOfSight, (Sensor * __this, Vector2 from, Vector2 to));
IL2CPP_REGISTER_METHOD(0x00ED0940, bool, HasClearLineOfSight, (Sensor * __this, Vector2 target));
IL2CPP_REGISTER_METHOD(0x00ED0980, bool, HasClearLineOfSight, (Sensor * __this, Vector2 from, Vector2 to));
IL2CPP_REGISTER_METHOD(0x00ED0C40, Vector3, ProjectTargetOnGround, (Sensor * __this, float distance, int32_t groundMask));
IL2CPP_REGISTER_METHOD(0x00ED0E70, void, OnPlayerDied, (Sensor * __this));
IL2CPP_REGISTER_METHODINFO(0x047020F8, Sensor_OnPlayerDied__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ED0E80, bool, IsInCone, (Sensor * __this, Vector3 targetPosition, Vector3 coneOriginPosition, Vector3 coneForward, float coneAngle));
IL2CPP_REGISTER_METHOD(0x00ED1060, void, __ctor, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x00ED10E0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver *, GetResolverForType, (Sensor * __this));
}
