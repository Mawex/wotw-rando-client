#include <interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityEvent_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x01F2C230, void, __ctor, (UnityEvent_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (UnityEvent_1_System_Object_ * __this, UnityAction_1_System_Object_ * call));
IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (UnityEvent_1_System_Object_ * __this, UnityAction_1_System_Object_ * call));
IL2CPP_REGISTER_METHOD(0x02AC95D0, MethodInfo_1 *, FindMethod_Impl, (UnityEvent_1_System_Object_ * __this, String * name, Object * targetObj));
IL2CPP_REGISTER_METHOD(0x02AC8CD0, BaseInvokableCall *, GetDelegate, (UnityEvent_1_System_Object_ * __this, Object * target, MethodInfo_1 * theFunction));
IL2CPP_REGISTER_METHOD(0x02AC8DF0, BaseInvokableCall *, GetDelegate, (UnityAction_1_System_Object_ * action));
IL2CPP_REGISTER_METHOD(0x02AC9710, void, Invoke, (UnityEvent_1_System_Object_ * __this, Object * arg0));
}
