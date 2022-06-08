using namespace app;

namespace app::methods::UberPoolManager_ContinuousTimesliceJob {
IL2CPP_REGISTER_METHOD(0x00FDF8A0, void, __ctor, (UberPoolManager_ContinuousTimesliceJob * __this, UberPoolManager * manager, String * name, TimeSlicedJobPriority__Enum priority, Func_2_UberPoolManager_Boolean_ * callback));
IL2CPP_REGISTER_METHOD(0x00FDF8C0, void, OnUpdateBeat, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x0089F980, void, OnJobFinished, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x00FDF960, bool, get_IsFinished, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_JobName, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x00FDF970, String *, get_TimesliceJobOwnerName, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_CustomTimeBudget, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_CustomTimeBudget, (UberPoolManager_ContinuousTimesliceJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FDF9F0, String *, get_ContextualDebugData, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_EnqueuedTime, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_EnqueuedTime, (UberPoolManager_ContinuousTimesliceJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_AvailableBudget, (UberPoolManager_ContinuousTimesliceJob * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, set_AvailableBudget, (UberPoolManager_ContinuousTimesliceJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FDFA70, void, EnqueueIfNecessary, (UberPoolManager_ContinuousTimesliceJob * __this));
}
