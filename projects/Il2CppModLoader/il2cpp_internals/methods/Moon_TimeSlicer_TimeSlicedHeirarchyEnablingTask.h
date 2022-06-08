#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimeSlicedHeirarchyEnablingTask {
IL2CPP_REGISTER_METHOD(0x010C2BF0, void, __ctor, (TimeSlicedHeirarchyEnablingTask * __this, Transform * root, GameObject * owner, bool reenableRoot, Action_1_Boolean_ * onJobCompleted, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C2F00, IEnumerator *, TimeSlicedEnable, (TimeSlicedHeirarchyEnablingTask * __this));
IL2CPP_REGISTER_METHOD(0x010C3050, void, DisableTimeSlicedObjects, (TimeSlicedHeirarchyEnablingTask * __this));
IL2CPP_REGISTER_METHOD(0x010C31B0, void, StoreActiveObjects, (TimeSlicedHeirarchyEnablingTask * __this, Transform * trans));
IL2CPP_REGISTER_METHOD(0x010C34A0, void, PostEnableHeirarchy, (TimeSlicedHeirarchyEnablingTask * __this));
IL2CPP_REGISTER_METHOD(0x010C3590, void, Reset, (TimeSlicedHeirarchyEnablingTask * __this));
IL2CPP_REGISTER_METHOD(0x010C3660, String *, get_JobName, (TimeSlicedHeirarchyEnablingTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimeSlicedHeirarchyEnablingTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimeSlicedHeirarchyEnablingTask * __this));
}
