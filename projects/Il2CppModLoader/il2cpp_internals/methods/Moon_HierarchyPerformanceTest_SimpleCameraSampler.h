#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::SimpleCameraSampler {
IL2CPP_REGISTER_METHOD(0x014AAE40, void, __ctor, (SimpleCameraSampler * __this, SceneMetaData * sceneMeta, Camera * camera));
IL2CPP_REGISTER_METHOD(0x01349560, Rect, get_Bounds, (SimpleCameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, List_1_UnityEngine_Rect_ *, get_SceneRects, (SimpleCameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Camera *, get_Camera, (SimpleCameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x014AB3B0, List_1_UnityEngine_Vector3_ *, CalculateSamplePoints, (SimpleCameraSampler * __this));
IL2CPP_REGISTER_METHOD(0x014AB700, List_1_SceneMetaData_ *, GetScenesForDependant, (SimpleCameraSampler * __this, SceneMetaData * dependant));
}
