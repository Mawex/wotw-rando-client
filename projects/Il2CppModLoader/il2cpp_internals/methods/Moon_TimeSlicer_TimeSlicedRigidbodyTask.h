#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimeSlicedRigidbodyTask {
IL2CPP_REGISTER_METHOD(0x010C4560, void, __ctor, (TimeSlicedRigidbodyTask * __this, PhysicalSystemManager * manager, IEnumerator * routine, bool activate, GameObject * owner, Action_1_Boolean_ * onJobCompleted, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C45E0, void, Config, (TimeSlicedRigidbodyTask * __this, PhysicalSystemManager * manager, IEnumerator * routine, bool activate));
IL2CPP_REGISTER_METHOD(0x010C45F0, void, ProcessAllObjects, (TimeSlicedRigidbodyTask * __this));
IL2CPP_REGISTER_METHOD(0x010C46F0, String *, get_JobName, (TimeSlicedRigidbodyTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimeSlicedRigidbodyTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimeSlicedRigidbodyTask * __this));
}
