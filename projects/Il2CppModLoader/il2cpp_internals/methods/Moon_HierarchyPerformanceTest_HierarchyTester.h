#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTester {
IL2CPP_REGISTER_METHOD(0x014A4E90, void, add_OnStarted, (HierarchyTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x014A4F80, void, remove_OnStarted, (HierarchyTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x014A5070, void, add_OnFinished, (HierarchyTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x014A5160, void, remove_OnFinished, (HierarchyTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x014A5250, bool, get_IsStopped, ());
IL2CPP_REGISTER_METHOD(0x014A52F0, void, set_IsStopped, (bool value));
IL2CPP_REGISTER_METHOD(0x014A53A0, bool, get_IsRunning, ());
IL2CPP_REGISTER_METHOD(0x003FD740, float, get_Progress, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A54C0, void, set_Progress, (HierarchyTester * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_EstimateTime, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_EstimateTime, (HierarchyTester * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBC40, SceneTestData *, get_Data, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A55C0, void, Scan, ());
IL2CPP_REGISTER_METHOD(0x014A5710, void, Scan, (int32_t maxObjectsToScan));
IL2CPP_REGISTER_METHOD(0x014A5870, void, Stop, ());
IL2CPP_REGISTER_METHOD(0x014A5910, HierarchyTester *, CreateInstance, ());
IL2CPP_REGISTER_METHOD(0x014A5A70, void, Scan, (HierarchyTester * __this, SceneRoot * scene, int32_t maxObjectsToScan, bool usePrepareAndFinishTasks));
IL2CPP_REGISTER_METHOD(0x014A5D40, void, Update, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A5E30, void, OnGUI, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A6030, void, UpdateState, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A6270, void, ChangeState, (HierarchyTester * __this, HierarchyTester_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateIdle, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A65C0, void, UpdateGettingReady, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A6C90, void, UpdateProcessing, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A6E00, void, UpdateDone, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A70C0, CompositeTask *, CreateProcessingTask, (HierarchyTester * __this, SceneTestData * data));
IL2CPP_REGISTER_METHOD(0x014A7A90, void, AddObjectMeasureTaskRecursively, (HierarchyTester * __this, HierarchyDebugMenu_GameObjectItem * item, SceneSample * sceneSample, CompositeTask * rootTask));
IL2CPP_REGISTER_METHOD(0x014A7F30, GameObject *, GetArtGroupGameObject, (HierarchyTester * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x014A81D0, SceneRoot *, GetCurrentScene, ());
IL2CPP_REGISTER_METHOD(0x014A8270, String *, FormatEstimateTime, (HierarchyTester * __this, int32_t totalSeconds));
IL2CPP_REGISTER_METHOD(0x014A83A0, void, OnBaselineMeasureTaskFailed, (HierarchyTester * __this, String * message));
IL2CPP_REGISTER_METHODINFO(0x04799668, HierarchyTester_OnBaselineMeasureTaskFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014A83B0, void, __ctor, (HierarchyTester * __this));
IL2CPP_REGISTER_METHOD(0x014A8740, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x014A87C0, void, _AddObjectMeasureTaskRecursively_b__54_0, (HierarchyTester * __this));
IL2CPP_REGISTER_METHODINFO(0x04715620, HierarchyTester__AddObjectMeasureTaskRecursively_b__54_0__MethodInfo);
}
