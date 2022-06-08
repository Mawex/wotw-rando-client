#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::EntityLocomotionTask {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawGizmos, ());
IL2CPP_REGISTER_METHOD(0x00CB6490, void, InitFSMState, (EntityLocomotionTask * __this, int32_t id, StateMachine_2 * stateMachine, Locomotion * locomotion));
IL2CPP_REGISTER_METHOD(0x00CB64A0, void, UpdateState, (EntityLocomotionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB6510, void, OnEnter, (EntityLocomotionTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Locomotion *, get_Parent, (EntityLocomotionTask * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (EntityLocomotionTask * __this));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, GetStateId, (EntityLocomotionTask * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (EntityLocomotionTask * __this));
}
