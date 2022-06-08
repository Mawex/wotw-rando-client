#include <interception_macros.h>

namespace app::methods::StunnedBehaviour {
IL2CPP_REGISTER_METHOD(0x00672050, void, OnInitializeTask, (StunnedBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00672120, void, OnEnterTask, (StunnedBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00672130, BehaviourStatus__Enum, OnExecuteTask, (StunnedBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00672230, void, ChangeState, (StunnedBehaviour * __this, StunnedBehaviour_StunnedState__Enum state));
IL2CPP_REGISTER_METHOD(0x006724D0, void, OnExitTask, (StunnedBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (StunnedBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (StunnedBehaviour * __this));
}
