#include <interception_macros.h>

namespace app::methods::HierarchyPerfTest::TestRunner {
IL2CPP_REGISTER_METHOD(0x019753C0, bool, Run, ());
IL2CPP_REGISTER_METHODINFO(0x04712130, TestRunner_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019753E0, void, Awake, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01975470, void, SpawnTestRunnerAndStart, ());
IL2CPP_REGISTER_METHOD(0x01975630, void, RecordTest, (TestRunner * __this, PerfTestTimer * test));
IL2CPP_REGISTER_METHOD(0x01975700, void, DumpData, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01975870, void, StartTestCoroutine, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01975A30, void, StopTestCoroutine, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01975AE0, IEnumerator *, TestCoroutine, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01975C20, IEnumerator *, RunScenesThroughTests, (TestRunner * __this, String * testPrefix));
IL2CPP_REGISTER_METHOD(0x01975D80, void, DumpDataForScene, (String * sceneName, List_1_HierarchyPerfTest_PerfTestTimer_TestData_ * value));
IL2CPP_REGISTER_METHOD(0x01976190, void, StartScene, (TestRunner * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x01976320, AsyncOperation_1 *, CallGcAndUnload, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01976450, void, Update, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x01976460, void, UpdateTestCoroutines, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x019765D0, void, OnGUI, (TestRunner * __this));
IL2CPP_REGISTER_METHOD(0x019766E0, void, UpdateTestProgress, (String * currentTest));
IL2CPP_REGISTER_METHOD(0x019767F0, void, __ctor, (TestRunner * __this));
}
