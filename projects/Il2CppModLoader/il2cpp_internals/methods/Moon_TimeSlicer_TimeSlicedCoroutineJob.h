#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimeSlicedCoroutineJob {
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_EnqueuedTime, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_EnqueuedTime, (TimeSlicedCoroutineJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x010C1F80, void, __ctor, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C2030, void, __ctor, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, GameObject * owner, Action_1_Boolean_ * onJobCompleted, String * jobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2140, void, __ctor, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, GameObject * owner, Action_1_Boolean_ * onJobCompleted, Func_1_String_ * customJobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2250, void, __ctor, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, String * owner, Action_1_Boolean_ * onJobCompleted, String * jobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2330, void, __ctor, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, String * owner, Action_1_Boolean_ * onJobCompleted, Func_1_String_ * customJobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2420, void, __ctor, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, String * owner, Func_1_String_ * customJobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2520, void, __ctor, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, GameObject * owner, Func_1_String_ * customJobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2630, void, Init, (TimeSlicedCoroutineJob * __this, IEnumerator * routine, String * ownerName, Action_1_Boolean_ * onJobCompleted, String * jobName, Func_1_String_ * customJobName, Func_1_String_ * contextualDebugData, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2680, void, BuildSceneNameData, (TimeSlicedCoroutineJob * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2740, void, OnUpdateBeat, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C27E0, void, OnJobFinished, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C2880, void, CancelJob, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C2A50, void, Reset, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C2A60, bool, get_IsFinished, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C2A90, bool, get_IsRunning, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x010C2AB0, String *, get_JobName, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetDebugData, (TimeSlicedCoroutineJob * __this, String * jobName, String * contextualData, TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x008663D0, float, get_CustomTimeBudget, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x008663E0, void, set_CustomTimeBudget, (TimeSlicedCoroutineJob * __this, float value));
IL2CPP_REGISTER_METHOD(0x010C2B40, String *, get_ContextualDebugData, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_AvailableBudget, (TimeSlicedCoroutineJob * __this));
IL2CPP_REGISTER_METHOD(0x00A183E0, void, set_AvailableBudget, (TimeSlicedCoroutineJob * __this, float value));
}
