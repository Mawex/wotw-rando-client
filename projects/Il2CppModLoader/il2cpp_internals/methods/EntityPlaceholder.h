using namespace app;

namespace app::methods::EntityPlaceholder {
IL2CPP_REGISTER_METHOD(0x00C93750, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C93A10, void, ClearEnemyLists, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04798DD8, EntityPlaceholder_ClearEnemyLists__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C93AD0, bool, get_EffectivePlaySpawnTask, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_PreventEnemyFromBeingFrustrumSuspended, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_PreventEnemyFromBeingFrustrumSuspended, (EntityPlaceholder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB40, GameObject *, get_Prefab, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresGroundToSpawn, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C93B10, float, get_EffectiveRespawnTime, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C93CA0, bool, get_EffectiveRespawnOnScreen, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_PlaceholderID, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0071EAB0, String *, get_SpawnManagerDebug, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00A43000, void, set_SpawnManagerDebug, (EntityPlaceholder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00C93CD0, GameObject *, get_PooledEntity, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C0CBA0, bool, get_IsEnemyEntityPlaceholder, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00813F90, Entity *, get_CurrentEntity, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C93DA0, void, set_CurrentEntity, (EntityPlaceholder * __this, Entity * value));
IL2CPP_REGISTER_METHOD(0x00C94130, GameObject *, get_CurrentEntityGameObject, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C94210, Transform *, get_CurrentEntityTransform, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C942F0, MoonAnimator *, get_CurrentEntityAnimator, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C943E0, Vitals *, get_CurrentEntityVitals, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CheckForOverlap, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C944C0, void, ClearPrefabLinks, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C944D0, bool, get_CanSpawn, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C945A0, void, InstaKill, (EntityPlaceholder * __this, bool spawnLoot));
IL2CPP_REGISTER_METHOD(0x00C94620, void, SetCurrentInstanceInEditor, (EntityPlaceholder * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00C946B0, void, SetAutoSpawn, (EntityPlaceholder * __this, bool autoSpawn, Component_1 * spawnManager));
IL2CPP_REGISTER_METHOD(0x00C946D0, int32_t, DetermineDifficulty, (Transform * transform, bool useZoneDifficulty, int32_t overrideDifficulty, EntityPlaceholderScalingData * scaling));
IL2CPP_REGISTER_METHOD(0x00C94A10, void, ScaleVitals, (Transform * transform, Vitals * vitals, EntityPlaceholderScalingData * scaling, EntityPlaceholder_BaseEntityPlaceholderSettings * settings, int32_t difficulty));
IL2CPP_REGISTER_METHOD(0x00C94D30, float, ScaleHealthBasedOnGameDifficulty, (float health, EntityPlaceholderScalingData_EntityCategory__Enum category));
IL2CPP_REGISTER_METHOD(0x00C94E90, void, ScaleOrbs, (Entity * entity, EntityPlaceholderScalingData * scaling, EntityPlaceholder_BaseEntityPlaceholderSettings * settings, int32_t difficulty));
IL2CPP_REGISTER_METHOD(0x00C950B0, void, InstantiateInstance, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C95F00, void, CreateCachedComponents, (EntityPlaceholder * __this, GameObject * entity));
IL2CPP_REGISTER_METHOD(0x00C96590, void, PoolCurrentInstance, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C966A0, void, RegisterSceneRoot, (EntityPlaceholder * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00C967D0, void, Spawn, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStart, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C96DB0, void, Awake, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C97450, void, PrewarmPooledInstance, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C97A00, void, OnPrewarmCompleted, (EntityPlaceholder * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x04748138, EntityPlaceholder_OnPrewarmCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C97BC0, void, OnEnable, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlaceholderEnable, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C98040, void, OnDisable, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlaceholderDisable, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C98290, void, OnRestoreCheckpoint, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C982B0, void, OnDestroy, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C98550, void, AddEntityToGlobalList, (Entity * entity));
IL2CPP_REGISTER_METHOD(0x00C98830, void, RemoveEntityFromGlobalList, (Entity * entity));
IL2CPP_REGISTER_METHOD(0x00C989B0, void, RunNullCleanupFromGlobalList, (Type * entityType));
IL2CPP_REGISTER_METHOD(0x00C98CB0, List_1_Moon_Entity_ *, GetAllEntities, (Type * entityType));
IL2CPP_REGISTER_METHOD(0x00C98E10, List_1_Moon_Entity___Array *, GenerateArrayWithGetAllEntities, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C98EE0, void, OnGameSerializeLoad, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x04746AD0, EntityPlaceholder_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C98F10, void, OnSceneRootPreDisable, (EntityPlaceholder * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00C99160, void, EnsureSceneRootIsCached, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99360, void, OnHealthZero, (EntityPlaceholder * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x00C99560, void, OnDeath, (EntityPlaceholder * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_EntityIsDead, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99970, bool, get_HasBeenKilled, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99990, void, UpdateDistanceToScreen, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99BA0, void, FixedUpdate, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99D40, void, ClearFrameCache, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99D80, bool, IsPhysicsReady, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C99E90, void, UpdateAutoSpawnState, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A0F0, bool, ShouldAutoSpawn, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A3E0, bool, CanSpawnWithRegardsToScreen, (EntityPlaceholder * __this, bool isOnScreen, bool canSpawnOnScreen));
IL2CPP_REGISTER_METHOD(0x00C9A3F0, void, UpdateSpawnOnEventState, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A4F0, bool, get_IsOnScreenPaddedExtended, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A520, bool, get_IsOnScreenPadded, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A550, bool, get_IsOnScreen, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A580, bool, IsOriInTriggerSpawnZone, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A6C0, bool, HasMinDistanceFromOri, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9A8D0, bool, GroundCheckRaycast, (EntityPlaceholder * __this, RaycastHit * hitInfo));
IL2CPP_REGISTER_METHOD(0x00C9AB60, void, InstantiateFromPooledObj, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9BAD0, void, InitializeOriInsideZoneToSpawnTrigger, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9BE70, void, InitializeAllowedAreaForEntity, (EntityPlaceholder * __this, Entity * * entity));
IL2CPP_REGISTER_METHOD(0x00C9C260, void, InitializePatrolAreaForEntity, (EntityPlaceholder * __this, Entity * * entity));
IL2CPP_REGISTER_METHOD(0x00C9C650, Rect, ForceBoxAreaToWorldCoords, (EntityPlaceholder * __this, AxisAlignedBox * box, Transform * root));
IL2CPP_REGISTER_METHOD(0x00C9CB40, void, OnEntityPostAwake, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x04766280, EntityPlaceholder_OnEntityPostAwake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C9CD90, bool, get_IsSuspended, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9CDA0, void, set_IsSuspended, (EntityPlaceholder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C9CDB0, SuspendableMask__Enum, get_Mask, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9CDC0, void, set_Mask, (EntityPlaceholder * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsUsingVariations, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9CE80, SpiritShardType__Enum, GetEquippedAggressorOrSuppresorShard, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUseAutosetupPositionInOnSand, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9CFA0, void, __ctor, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C9D5A0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDisableOnRecordablePreview_get_gameObject, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IMoonTypeResolver *, GetResolverForType, (EntityPlaceholder * __this));
}
