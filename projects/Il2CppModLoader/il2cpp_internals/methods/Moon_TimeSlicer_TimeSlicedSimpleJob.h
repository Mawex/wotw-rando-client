using namespace app;

namespace app::methods::Moon::TimeSlicer::TimeSlicedSimpleJob {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_EnqueuedTime, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_EnqueuedTime, (TimeSlicedSimpleJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x010C47E0, void, __ctor, (TimeSlicedSimpleJob * __this, TimeSlicedSimpleJob_TimeSlicedJobDelegate * job, GameObject * owner, Func_1_String_ * contextualData));
IL2CPP_REGISTER_METHOD(0x010C4820, void, OnUpdateBeat, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnJobFinished, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsFinished, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x010C4860, String *, get_JobName, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_TimesliceJobOwnerName, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_CustomTimeBudget, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_CustomTimeBudget, (TimeSlicedSimpleJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x010C48E0, String *, get_ContextualDebugData, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_AvailableBudget, (TimeSlicedSimpleJob * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, set_AvailableBudget, (TimeSlicedSimpleJob * __this, float value));
}
