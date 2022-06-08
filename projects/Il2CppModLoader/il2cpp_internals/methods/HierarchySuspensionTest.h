#include <interception_macros.h>

namespace app::methods::HierarchySuspensionTest {
IL2CPP_REGISTER_METHOD(0x00B54420, void, Scan, (HierarchySuspensionTest * __this, HierarchyDebugMenu_GameObjectItem * item));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsRunning, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B54520, int32_t, get_ObjectsLeft, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B545B0, void, ChangeState, (HierarchySuspensionTest * __this, HierarchySuspensionTest_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04730230, HierarchySuspensionTest_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B54910, void, Update, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B54AB0, void, UpdateState, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHODINFO(0x04737C90, HierarchySuspensionTest_UpdateState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B54BE0, void, StartTest, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B54CE0, void, EndTest, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B54E70, void, OnEnterIdle, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B54F10, void, OnEnterMeasureBaseline, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B54FB0, void, OnEnterPrepare, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55170, void, OnEnterProcess, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55210, void, OnEnterPost, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55610, void, OnExitMeasureBaseline, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPrepare, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B557C0, void, OnExitProcess, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPost, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55860, void, OnIdleUpdate, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B559F0, void, OnMeasureBaselineUpdate, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55A10, void, OnPrepareUpdate, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55A30, void, OnProcessUpdate, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostUpdate, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55A50, double, GetCurrentCapturedCPUTime, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55B00, double, GetCurrentCapturedGPUTime, (HierarchySuspensionTest * __this));
IL2CPP_REGISTER_METHOD(0x00B55BB0, void, __ctor, (HierarchySuspensionTest * __this));
}
