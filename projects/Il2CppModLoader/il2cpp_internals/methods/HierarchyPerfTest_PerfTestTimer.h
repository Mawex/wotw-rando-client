using namespace app;

namespace app::methods::HierarchyPerfTest::PerfTestTimer {
IL2CPP_REGISTER_METHOD(0x01974370, bool, get_TestFinished, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, PerfTestTimer_TestData *, GetTestTimingData, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHOD(0x01974380, void, __ctor, (PerfTestTimer * __this, String * name, int32_t numIterationsToDo, bool takeGCUnloadTimings));
IL2CPP_REGISTER_METHOD(0x01974760, void, StartTimingTestIteration, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHODINFO(0x04727988, PerfTestTimer_StartTimingTestIteration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01974830, void, EndTimingTestIteration, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHOD(0x019749D0, void, MarkTestIsInvalid, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHOD(0x01974B00, void, FinalizeTest, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHOD(0x01974CA0, void, GetGcAndUnloadAssetsTimings, (PerfTestTimer * __this));
IL2CPP_REGISTER_METHOD(0x01974E00, void, _runGC, (PerfTestTimer * __this));
}
