using namespace app;

namespace app::methods::DisableGameObjectWhenOutOfFrustrum {
IL2CPP_REGISTER_METHOD(0x00B953C0, void, AutoGenerate, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B953E0, void, AutoGenerate, (DisableGameObjectWhenOutOfFrustrum * __this, float depth, float zOffset));
IL2CPP_REGISTER_METHOD(0x00B95950, void, ManuallySetBounds, (DisableGameObjectWhenOutOfFrustrum * __this, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x00B95970, void, AddTargetObjectRef, (DisableGameObjectWhenOutOfFrustrum * __this, GameObject * obj));
IL2CPP_REGISTER_METHOD(0x00B95A30, void, OnFrustumInstantEnabled, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B95AB0, void, OnFrustumEnter, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B95D10, void, OnFrustumExit, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_InsideFrustum, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B95F60, bool, get_AllowCacheBounds, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B95F70, Bounds, get_Bounds, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B963D0, void, SetIsReady, (DisableGameObjectWhenOutOfFrustrum * __this, bool isReady));
IL2CPP_REGISTER_METHOD(0x00B96550, void, CreateTasks, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B968D0, void, RefreshObjectsToTimeSliceEnableList, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B96A70, void, InitTasks, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B96AF0, void, Awake, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B96BE0, bool, IsValid, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B96BF0, void, UpdateBounds, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B96EF0, void, OnDestroy, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B96FD0, void, OnSceneRootPostEnable, (DisableGameObjectWhenOutOfFrustrum * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00B970E0, void, OnSceneRootPreDisable, (DisableGameObjectWhenOutOfFrustrum * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00B971C0, void, OnPoolSpawned, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B35B90, void, OnPoolDespawned, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B97280, void, StoreObjects, (DisableGameObjectWhenOutOfFrustrum * __this, Transform * trans));
IL2CPP_REGISTER_METHOD(0x00B97640, void, UpdateObservers, (DisableGameObjectWhenOutOfFrustrum * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldEnable, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldChildrenEnable, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B97830, void, OnBuild, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B979E0, void, Prewarm, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B97A80, void, __ctor, (DisableGameObjectWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B97F10, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B97FB0, void, _OnFrustumEnter_b__25_0, (DisableGameObjectWhenOutOfFrustrum * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x047187B0, DisableGameObjectWhenOutOfFrustrum__OnFrustumEnter_b__25_0__MethodInfo);
}
