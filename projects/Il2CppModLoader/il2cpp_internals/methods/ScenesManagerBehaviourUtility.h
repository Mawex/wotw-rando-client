#include <interception_macros.h>

namespace app::methods::ScenesManagerBehaviourUtility {
IL2CPP_REGISTER_METHOD(0x0105D090, Vector2, get_CurrentCameraTargetPositionExtrapolated, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105D0C0, Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105D090, Vector2, get_PredictedTargetPosition, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x00989BF0, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105D0F0, void, Initialize, (ScenesManagerBehaviourUtility * __this, ScenesManagerContext * context));
IL2CPP_REGISTER_METHOD(0x0105D2C0, void, Reset, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105D3F0, void, Update, (ScenesManagerBehaviourUtility * __this, bool fullUpdate));
IL2CPP_REGISTER_METHOD(0x0105D910, void, UpdatePosition, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105DF40, void, FindScenesToLoadAtPosition, (ScenesManagerBehaviourUtility * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x0105E360, void, FindScenesToLoadAtPositionExtrapolated, (ScenesManagerBehaviourUtility * __this, List_1_System_Int32_ * sceneList, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x0105E6E0, void, FindScenesToLoad, (ScenesManagerBehaviourUtility * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x0105EA00, void, TryAddLoadOperation, (ScenesManagerBehaviourUtility * __this, RuntimeSceneMetaData * scene));
IL2CPP_REGISTER_METHOD(0x0105EB60, void, AddScenesToLoadByUtility, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105ED10, void, UpdateSceneUtilityInternal, (ScenesManagerBehaviourUtility * __this, List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * sceneList, bool hasNearby, int32_t * idx));
IL2CPP_REGISTER_METHOD(0x0105EF50, void, ClearSceneInCurrentFrame, (ScenesManagerBehaviourUtility * __this, List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * sceneList));
IL2CPP_REGISTER_METHOD(0x0105F030, void, ResetSceneUtilityNotInCurrentFrame, (ScenesManagerBehaviourUtility * __this, List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * sceneList));
IL2CPP_REGISTER_METHOD(0x0105F140, void, UpdateActiveScenesUtilityList, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105F3F0, bool, UpdateNearbyScenesUtilityList, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105F800, void, UpdateSceneUtilityTimeSliced, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105F9D0, void, UpdateSceneUtilityFast, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x0105FEF0, void, UpdateSceneUtilityOld, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x01060430, void, UpdateSceneUtility, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x01060530, int32_t, CalculateSceneUtility, (ScenesManagerBehaviourUtility * __this, RuntimeSceneMetaData * meta, bool isNearby, NearbySceneData nearSceneData));
IL2CPP_REGISTER_METHOD(0x01060D20, void, LoadNearbyScenesBasedOnUtility, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x010610E0, void, FindScenesToUnload, (ScenesManagerBehaviourUtility * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x010612A0, void, FindUneededScenesToUnload, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x01061450, void, FindScenesToUnloadInternal, (ScenesManagerBehaviourUtility * __this, bool instant, bool keepLoadedUsingUtility));
IL2CPP_REGISTER_METHOD(0x01062340, bool, ShouldKeepConnectedLoaded, (ScenesManagerBehaviourUtility * __this, RuntimeSceneMetaData * metaData, int32_t preventUnloadingUtilityValue));
IL2CPP_REGISTER_METHOD(0x010623A0, void, FindScenesToEnable, (ScenesManagerBehaviourUtility * __this, bool limitOnce, bool async));
IL2CPP_REGISTER_METHOD(0x01063930, void, SetTargetPosition, (ScenesManagerBehaviourUtility * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x01063A40, void, __ctor, (ScenesManagerBehaviourUtility * __this));
IL2CPP_REGISTER_METHOD(0x01064800, void, __cctor, ());
}
