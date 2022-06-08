#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTestBulkTool {
IL2CPP_REGISTER_METHOD(0x014A0850, HierarchyTestBulkTool *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x014A08F0, bool, get_IsStopped, ());
IL2CPP_REGISTER_METHOD(0x014A0990, void, set_IsStopped, (bool value));
IL2CPP_REGISTER_METHOD(0x014A0A40, bool, get_IsRunning, ());
IL2CPP_REGISTER_METHOD(0x014A0B60, void, Scan, (int32_t startSceneIndex, int32_t maxScenes, int32_t maxObjectsToScan));
IL2CPP_REGISTER_METHOD(0x014A1000, void, Start, (List_1_RuntimeSceneMetaData_ * scenes, int32_t maxObjectsToScan));
IL2CPP_REGISTER_METHOD(0x014A1180, void, Stop, ());
IL2CPP_REGISTER_METHOD(0x014A1220, HierarchyTestBulkTool *, CreateInstance, ());
IL2CPP_REGISTER_METHOD(0x014A13B0, void, Scan, (HierarchyTestBulkTool * __this, List_1_RuntimeSceneMetaData_ * scenes, int32_t maxObjectsToScan));
IL2CPP_REGISTER_METHOD(0x014A17B0, void, Update, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHOD(0x014A18A0, void, OnGUI, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHOD(0x014A1C90, void, UpdateState, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHOD(0x014A2050, void, ChangeState, (HierarchyTestBulkTool * __this, HierarchyTestBulkTool_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x014A2C30, void, LoadLevel, (HierarchyTestBulkTool * __this, RuntimeSceneMetaData * scene));
IL2CPP_REGISTER_METHOD(0x014A2D00, void, LoadEmptyLevel, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHOD(0x014A2E00, void, __ctor, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHOD(0x014A3310, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x014A3390, void, _ChangeState_b__32_0, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E6F0, HierarchyTestBulkTool__ChangeState_b__32_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014A3450, void, _ChangeState_b__32_1, (HierarchyTestBulkTool * __this));
IL2CPP_REGISTER_METHODINFO(0x04766AD0, HierarchyTestBulkTool__ChangeState_b__32_1__MethodInfo);
}
