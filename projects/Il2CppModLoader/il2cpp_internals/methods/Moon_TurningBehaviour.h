#include <interception_macros.h>

namespace app::methods::Moon::TurningBehaviour {
IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_TurningAnimationEntry, (TurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CA3800, void, set_TurningAnimationEntry, (TurningBehaviour * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00D1F560, TurningAnimation *, get_CurrentTurningAnimation, (TurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00D1F5C0, void, OnInitializeTask, (TurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1F6A0, void, OnEnterTask, (TurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1FBD0, BehaviourStatus__Enum, OnExecuteTask, (TurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1FCF0, void, OnExitTask, (TurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1FDE0, void, OnAnimationEnd, (TurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04702550, TurningBehaviour_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00672040, bool, ContinuePlaying, (TurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474CCE8, TurningBehaviour_ContinuePlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D1FFA0, void, OnDrawGizmos, (TurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00D201A0, void, __ctor, (TurningBehaviour * __this));
}
