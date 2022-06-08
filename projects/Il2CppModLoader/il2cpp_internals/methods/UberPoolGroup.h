using namespace app;

namespace app::methods::UberPoolGroup {
IL2CPP_REGISTER_METHOD(0x002FB990, UberPoolSettings *, get_Settings, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD2C00, int32_t, get_CurrentObjectCount, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_PeakObjectCount, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD2C90, bool, get_ReachedCapacity, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD2D20, void, Awake, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD2E30, void, Init, (UberPoolGroup * __this, String * poolName, UberPoolSettings * settings, WeakPrefab * prefab));
IL2CPP_REGISTER_METHOD(0x00FD2F80, void, PrewarmInstance, (UberPoolGroup * __this, GameObject * prefab, Dictionary_2_System_Int32_UberPoolItem_ * entries));
IL2CPP_REGISTER_METHOD(0x00FD30C0, UberPoolItem *, PrewarmInstanceFromScene, (UberPoolGroup * __this, GameObject * instance, Dictionary_2_System_Int32_UberPoolItem_ * entries));
IL2CPP_REGISTER_METHOD(0x00FD3150, UberPoolItem *, PrewarmExistingInstance, (UberPoolGroup * __this, GameObject * instance, Dictionary_2_System_Int32_UberPoolItem_ * entries));
IL2CPP_REGISTER_METHOD(0x00FD3290, UberPoolItem *, RequestObject, (UberPoolGroup * __this, GameObject * prototype, Vector3 position, Quaternion rotation, Nullable_1_Single_ * newObjectElapsedMillis));
IL2CPP_REGISTER_METHOD(0x00FD3C60, UberPoolItem *, CreatePoolItemForGO, (UberPoolGroup * __this, GameObject * newObj));
IL2CPP_REGISTER_METHOD(0x00FD3F60, void, BroadcastCallbacks, (UberPoolItem * poolObject));
IL2CPP_REGISTER_METHOD(0x00FD4290, GameObject *, GetNewObject, (UberPoolGroup * __this, GameObject * prototype, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00FD46B0, void, AddLoadedFromSceneCount, (UberPoolGroup * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x00FD4780, void, RemoveLoadedFromSceneCount, (UberPoolGroup * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x00FD4920, void, DoUpdate, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD4A30, bool, PruneObjectAtIndex, (UberPoolGroup * __this, int32_t index, float inactivityTime));
IL2CPP_REGISTER_METHOD(0x00FD4D00, void, PruneToMinAmount, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD4920, void, PruneObjectsIfNeeded, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD4DE0, void, __ctor, (UberPoolGroup * __this));
IL2CPP_REGISTER_METHOD(0x00FD4F40, void, __cctor, (MethodInfo * method));
}
