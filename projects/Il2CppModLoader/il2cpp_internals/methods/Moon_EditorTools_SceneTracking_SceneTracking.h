using namespace app;

namespace app::methods::Moon::EditorTools::SceneTracking::SceneTracking {
IL2CPP_REGISTER_METHOD(0x01208410, float, GetArtProgressValue, (SceneTracking * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01208450, void, SetArtProgressValue, (SceneTracking * __this, int32_t id, float f));
IL2CPP_REGISTER_METHOD(0x01208680, void, Reset, (SceneTracking * __this));
IL2CPP_REGISTER_METHOD(0x01208960, void, UpdateTotalProgress, (SceneTracking * __this, int32_t progress));
IL2CPP_REGISTER_METHOD(0x01208970, void, UpdateArtProgress, (SceneTracking * __this, int32_t newArtProgress));
IL2CPP_REGISTER_METHOD(0x01208980, void, UpdateArtProgressValue, (SceneTracking * __this, int32_t id, float value));
IL2CPP_REGISTER_METHOD(0x01208AD0, void, UpdateArtPriority, (SceneTracking * __this, int32_t priority));
IL2CPP_REGISTER_METHOD(0x01208AE0, void, AddSceneDeletionFlag, (SceneTracking * __this, SceneDeletionFlags__Enum newFlag));
IL2CPP_REGISTER_METHOD(0x01208B00, void, RemoveSceneDeletionFlag, (SceneTracking * __this, SceneDeletionFlags__Enum removeFlag));
IL2CPP_REGISTER_METHOD(0x01208B20, void, UpdateKeyScene, (SceneTracking * __this, bool isKeyScene));
IL2CPP_REGISTER_METHOD(0x01208B30, void, UpdateComment, (SceneTracking * __this, String * comments));
IL2CPP_REGISTER_METHOD(0x01208B80, void, AddArea, (SceneTracking * __this, int32_t areaId));
IL2CPP_REGISTER_METHOD(0x01208D60, void, RemoveArea, (SceneTracking * __this, int32_t areaId));
IL2CPP_REGISTER_METHOD(0x01208F10, void, SetArea, (SceneTracking * __this, int32_t areaId));
IL2CPP_REGISTER_METHOD(0x012090F0, void, SetProductionState, (SceneTracking * __this, bool newState));
IL2CPP_REGISTER_METHOD(0x01209100, void, UpdateHistory, (SceneTracking * __this));
IL2CPP_REGISTER_METHOD(0x01209280, void, __ctor, (SceneTracking * __this));
}
