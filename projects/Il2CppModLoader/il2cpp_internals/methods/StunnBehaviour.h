#include <interception_macros.h>

namespace app::methods::StunnBehaviour {
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (StunnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00671810, void, OnEnterTask, (StunnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00671E40, void, OnExitTask, (StunnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00671E70, void, OnAnimationEnd, (StunnBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04721DA8, StunnBehaviour_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00672030, void, __ctor, (StunnBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00672040, bool, _OnEnterTask_b__10_0, (StunnBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C6D0, StunnBehaviour__OnEnterTask_b__10_0__MethodInfo);
}
