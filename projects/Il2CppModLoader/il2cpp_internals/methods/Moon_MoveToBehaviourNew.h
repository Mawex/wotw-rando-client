#include <interception_macros.h>

namespace app::methods::Moon::MoveToBehaviourNew {
IL2CPP_REGISTER_METHOD(0x0111C260, void, OnEnter, (MoveToBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0111C3E0, BehaviourStatus__Enum, OnExecute, (MoveToBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0111C700, void, OnExit, (MoveToBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0111C7B0, IEntityLocomotion *, get_Locomotion, (MoveToBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0111C7E0, void, __ctor, (MoveToBehaviourNew * __this));
}
