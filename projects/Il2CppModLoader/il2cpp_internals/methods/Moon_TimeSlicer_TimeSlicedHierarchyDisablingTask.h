#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimeSlicedHierarchyDisablingTask {
IL2CPP_REGISTER_METHOD(0x010C4020, void, __ctor, (TimeSlicedHierarchyDisablingTask * __this, List_1_UnityEngine_GameObject_ * objectsToTimeSliceDisable, GameObject * owner, Action_1_Boolean_ * onJobCompleted, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C40A0, IEnumerator *, TimeSlicedDisable, (TimeSlicedHierarchyDisablingTask * __this));
IL2CPP_REGISTER_METHOD(0x010C41F0, void, Reset, (TimeSlicedHierarchyDisablingTask * __this));
IL2CPP_REGISTER_METHOD(0x010C4220, String *, get_JobName, (TimeSlicedHierarchyDisablingTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimeSlicedHierarchyDisablingTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimeSlicedHierarchyDisablingTask * __this));
}
