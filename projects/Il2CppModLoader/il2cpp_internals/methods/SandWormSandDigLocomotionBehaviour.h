using namespace app;

namespace app::methods::SandWormSandDigLocomotionBehaviour {
IL2CPP_REGISTER_METHOD(0x00C24D60, float, get_LastAvoidancePower, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0065FBC0, SandWormLocomotion *, get_Locomotion, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0065FBE0, SandWormEntity *, get_WormEntity, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C24D70, void, OnInitializeTask, (SandWormSandDigLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C25140, void, OnEnterTask, (SandWormSandDigLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C25150, BehaviourStatus__Enum, OnExecuteTask, (SandWormSandDigLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C25940, void, UpdateSound, (SandWormSandDigLocomotionBehaviour * __this, float angleDelta));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C25E10, Vector3, get_TargetPosition, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C25E30, void, set_TargetPosition, (SandWormSandDigLocomotionBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00C25E50, float, get_TraversalSpeed, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C25E60, void, set_TraversalSpeed, (SandWormSandDigLocomotionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C25E70, SandWormSandDigLocomotionBehaviour_SpeedEntry, GetCurrentSpeedEntry, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C25FD0, bool, AvoidanceIgnoreCollider, (SandWormSandDigLocomotionBehaviour * __this, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04755A38, SandWormSandDigLocomotionBehaviour_AvoidanceIgnoreCollider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C26070, void, OnDrawGizmos, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C26170, void, __ctor, (SandWormSandDigLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C26210, void, __cctor, (MethodInfo * method));
}
