#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimeSlicedActivationTask {
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_Activate, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_NumExpensiveActivations, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_SceneName, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (TimeSlicedActivationTask * __this, String * value));
IL2CPP_REGISTER_METHOD(0x010C0350, void, __ctor, (TimeSlicedActivationTask * __this, List_1_UnityEngine_GameObject_ * targetObjects, List_1_UnityEngine_Component_ * preEnableObservers, List_1_UnityEngine_Component_ * postEnableObservers, bool activate, bool reversedOrder, GameObject * owner, Action_1_Boolean_ * onJobCompleted, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C0680, void, __ctor, (TimeSlicedActivationTask * __this, List_1_UnityEngine_GameObject_ * targetObjects, List_1_UnityEngine_Component_ * preEnableObservers, List_1_UnityEngine_Component_ * postEnableObservers, bool activate, bool reversedOrder, Action_1_Boolean_ * onJobCompleted));
IL2CPP_REGISTER_METHOD(0x010C0980, void, CreateTimeSlicedActivationTask, (TimeSlicedActivationTask * __this, List_1_UnityEngine_GameObject_ * targetObjects, List_1_UnityEngine_Component_ * preEnableObservers, List_1_UnityEngine_Component_ * postEnableObservers, bool activate, bool reversedOrder, Action_1_Boolean_ * onJobCompleted));
IL2CPP_REGISTER_METHOD(0x010C0AB0, void, GetActiveObjects, (Transform * trans, List_1_UnityEngine_GameObject_ * objects));
IL2CPP_REGISTER_METHOD(0x010C0D30, void, Config, (TimeSlicedActivationTask * __this, List_1_UnityEngine_GameObject_ * targetObjects, List_1_UnityEngine_Component_ * preEnableObservers, List_1_UnityEngine_Component_ * postEnableObservers, bool activate, bool reversedOrder, Action_1_Boolean_ * onJobCompleted));
IL2CPP_REGISTER_METHOD(0x00777A20, void, Resume, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C0E50, void, ProcessAllObjects, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C0F70, IEnumerator *, TimeSlicedActivation, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C10C0, void, PostEnableObjects, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C13E0, void, PreDisableObjects, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C1680, void, ProcessObject, (TimeSlicedActivationTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x010C19F0, void, Reset, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C1A20, String *, get_JobName, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimeSlicedActivationTask * __this));
IL2CPP_REGISTER_METHOD(0x010C1B10, void, __cctor, ());
}
