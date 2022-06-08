using namespace app;

namespace app::methods::FrogGroundLocomotion {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesSeparateTurningBehaviour, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01648180, bool, CanTraverseToTarget, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x016486D0, void, OnFixedUpdate, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01648750, void, ConfigureStateMachine, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01648A60, bool, ShouldTriggerMove, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x047916A8, FrogGroundLocomotion_ShouldTriggerMove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01648E30, void, __ctor, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01648F70, bool, _ConfigureStateMachine_b__12_0, (FrogGroundLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A420, FrogGroundLocomotion__ConfigureStateMachine_b__12_0__MethodInfo);
}
