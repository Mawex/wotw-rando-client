using namespace app;

namespace app::methods::SceneLoadingQueue {
IL2CPP_REGISTER_METHOD(0x00BA7400, SceneLoadingQueue_QueueSceneToLoad, get_Item, (SceneLoadingQueue * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x00BA74D0, int32_t, get_Count, (SceneLoadingQueue * __this));
IL2CPP_REGISTER_METHOD(0x00BA7560, void, ClearQueuedScenesToLoad, (SceneLoadingQueue * __this));
IL2CPP_REGISTER_METHOD(0x00BA7610, bool, IsSceneQueued, (SceneLoadingQueue * __this, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x00BA7860, bool, IsSceneFirstInQueue, (SceneLoadingQueue * __this, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x00BA79D0, SceneLoadingQueue_QueueSceneToLoad, GetTopScene, (SceneLoadingQueue * __this));
IL2CPP_REGISTER_METHOD(0x00BA7AD0, void, SortQueue, (SceneLoadingQueue * __this));
IL2CPP_REGISTER_METHOD(0x00BA7BF0, void, AddScene, (SceneLoadingQueue * __this, RuntimeSceneMetaData * sceneMetaData, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x00BA7DF0, void, RemoveScene, (SceneLoadingQueue * __this, MoonGuid * sceneMoonGuid));
IL2CPP_REGISTER_METHOD(0x00BA8010, void, RemoveTopSceneAndPurge, (SceneLoadingQueue * __this));
IL2CPP_REGISTER_METHOD(0x00BA83F0, void, __ctor, (SceneLoadingQueue * __this));
IL2CPP_REGISTER_METHOD(0x00BA86D0, void, __cctor, (MethodInfo * method));
}
