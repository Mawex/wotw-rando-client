#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimesliceResourceDestroyTask {
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_SceneName, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (TimesliceResourceDestroyTask * __this, String * value));
IL2CPP_REGISTER_METHOD(0x010C4D80, void, __ctor, (TimesliceResourceDestroyTask * __this, List_1_UnityEngine_Object_ * targetObjects, Action_1_Boolean_ * onJobCompleted, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C4DF0, void, Config, (TimesliceResourceDestroyTask * __this, List_1_UnityEngine_Object_ * targetObjects, Action_1_Boolean_ * onJobCompleted));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x010C4E00, void, ProcessAllObjects, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x010C4EC0, IEnumerator *, TimeslicedDestroy, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5010, void, ProcessObject, (TimesliceResourceDestroyTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x010C5110, void, Reset, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5140, String *, get_JobName, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimesliceResourceDestroyTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5210, void, __cctor, ());
}
