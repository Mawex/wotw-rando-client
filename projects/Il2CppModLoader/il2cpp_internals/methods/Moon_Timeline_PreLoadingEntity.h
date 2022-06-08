using namespace app;

namespace app::methods::Moon::Timeline::PreLoadingEntity {
IL2CPP_REGISTER_METHOD(0x002FBBE0, SceneMetaData *, get_SceneMetaData, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_SceneMetaData, (PreLoadingEntity * __this, SceneMetaData * value));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, ShouldOverrideSceneMetaData, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077B2F0, void, OnStartPlayback, (PreLoadingEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0077B810, void, OnStopPlayback, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077B8F0, void, OnUpdateEntity, (PreLoadingEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0077B910, void, SynchronizeData, (PreLoadingEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x0077BB90, void, UpdatePreloading, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077BE10, void, OnDisable, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077BED0, void, FixedUpdate, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077BFB0, void, OnSceneEnabled, (PreLoadingEntity * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x0471B468, PreLoadingEntity_OnSceneEnabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0077BFC0, bool, get_HasFinishedLoadingAndEnabling, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077C0D0, bool, get_SceneLoadingAborted, (PreLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077C270, bool, HasFinished, (PreLoadingEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x0077C280, void, __ctor, (PreLoadingEntity * __this));
}
