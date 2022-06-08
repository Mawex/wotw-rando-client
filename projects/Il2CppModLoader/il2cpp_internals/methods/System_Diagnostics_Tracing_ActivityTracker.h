using namespace app;

namespace app::methods::System::Diagnostics::Tracing::ActivityTracker {
IL2CPP_REGISTER_METHOD(0x01745360, void, OnStart, (ActivityTracker * __this, String * providerName, String * activityName, int32_t task, Guid * activityId, Guid * relatedActivityId, EventActivityOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x01745B00, void, OnStop, (ActivityTracker * __this, String * providerName, String * activityName, int32_t task, Guid * activityId));
IL2CPP_REGISTER_METHOD(0x01746150, void, Enable, (ActivityTracker * __this));
IL2CPP_REGISTER_METHOD(0x01746380, ActivityTracker *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01746420, ActivityTracker_ActivityInfo *, FindActiveActivity, (ActivityTracker * __this, String * name, ActivityTracker_ActivityInfo * startLocation));
IL2CPP_REGISTER_METHOD(0x017464A0, String *, NormalizeActivityName, (ActivityTracker * __this, String * providerName, String * activityName, int32_t task));
IL2CPP_REGISTER_METHOD(0x017465F0, void, ActivityChanging, (ActivityTracker * __this, AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ args));
IL2CPP_REGISTER_METHODINFO(0x04782F40, ActivityTracker_ActivityChanging__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ActivityTracker * __this));
IL2CPP_REGISTER_METHOD(0x017467D0, void, __cctor, (MethodInfo * method));
}
