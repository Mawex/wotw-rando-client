#include <interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimesliceResourceUnloadTask {
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_SceneName, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (TimesliceResourceUnloadTask * __this, String * value));
IL2CPP_REGISTER_METHOD(0x010C5500, void, __ctor, (TimesliceResourceUnloadTask * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5540, void, ProcessAllObjects, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5600, IEnumerator *, TimeslicedUnload, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5750, void, ProcessObject, (TimesliceResourceUnloadTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x010C5870, void, Reset, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C58A0, String *, get_JobName, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimesliceResourceUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5970, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01552880, void, Config, (TimesliceResourceUnloadTask * __this, List_1_System_Object_ * targetObjects, Action_1_Boolean_ * onJobCompleted));
}
