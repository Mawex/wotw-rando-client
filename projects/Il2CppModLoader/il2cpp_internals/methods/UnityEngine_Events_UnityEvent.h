#include <interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityEvent {
IL2CPP_REGISTER_METHOD(0x01F2C230, void, __ctor, (UnityEvent * __this));
IL2CPP_REGISTER_METHOD(0x02430A40, void, AddListener, (UnityEvent * __this, UnityAction * call));
IL2CPP_REGISTER_METHOD(0x02430BA0, MethodInfo_1 *, FindMethod_Impl, (UnityEvent * __this, String * name, Object * targetObj));
IL2CPP_REGISTER_METHOD(0x02430C40, BaseInvokableCall *, GetDelegate, (UnityEvent * __this, Object * target, MethodInfo_1 * theFunction));
IL2CPP_REGISTER_METHOD(0x02430D90, BaseInvokableCall *, GetDelegate, (UnityAction * action));
IL2CPP_REGISTER_METHOD(0x02430EE0, void, Invoke, (UnityEvent * __this));
}
