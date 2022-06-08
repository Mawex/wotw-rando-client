using namespace app;

namespace app::methods::Moon::ArtOptimization::CameraSampler {
IL2CPP_REGISTER_METHOD(0x01349100, void, __ctor, (CameraSampler * __this, SceneMetaData * sceneMeta, Camera * camera));
IL2CPP_REGISTER_METHOD(0x01349560, Rect, get_Bounds, (CameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, List_1_UnityEngine_Rect_ *, get_SceneRects, (CameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Camera *, get_Camera, (CameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x01349570, List_1_UnityEngine_Vector3_ *, CalculateSamplePoints, (CameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x013498E0, List_1_UnityEngine_Vector3_ *, CalculateSamplesForScene, (CameraSampler * __this, Rect sceneBounds));
IL2CPP_REGISTER_METHOD(0x01349D50, List_1_SceneMetaData_ *, GetScenesForDependant, (CameraSampler * __this, SceneMetaData * dependant));
}
