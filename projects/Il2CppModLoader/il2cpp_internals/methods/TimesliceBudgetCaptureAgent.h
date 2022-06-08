using namespace app;

namespace app::methods::TimesliceBudgetCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (TimesliceBudgetCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x010F93D0, String__Array *, GetDataHeaderNames, (TimesliceBudgetCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x010F9450, void, OnInitialize, (TimesliceBudgetCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x010F9790, void, OnBudgetExceeded, (TimesliceBudgetCaptureAgent * __this, ITimeSlicedJob * job, float budget, float elapsedTime));
IL2CPP_REGISTER_METHODINFO(0x04782E28, TimesliceBudgetCaptureAgent_OnBudgetExceeded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F9C20, void, OnSliceExecuted, (TimesliceBudgetCaptureAgent * __this, SliceExecutionStats stats));
IL2CPP_REGISTER_METHODINFO(0x0471F908, TimesliceBudgetCaptureAgent_OnSliceExecuted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F9D00, String__Array *, GetFrameData, (TimesliceBudgetCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x010FA090, void, OnTestEnd, (TimesliceBudgetCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x010FA130, void, Reset, (TimesliceBudgetCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x010FA140, void, __ctor, (TimesliceBudgetCaptureAgent * __this));
}
