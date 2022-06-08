using namespace app;

namespace app::methods::PiranhaLocomotionIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x0115FA80, void, OnInitializeTask, (PiranhaLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115FBC0, void, OnEnterTask, (PiranhaLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115FD00, BehaviourStatus__Enum, OnExecuteTask, (PiranhaLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011601D0, void, OnExitTask, (PiranhaLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01160280, void, ChangeState, (PiranhaLocomotionIdleBehaviour * __this, PiranhaLocomotionIdleBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x011603B0, void, UpdateUpState, (PiranhaLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01160450, void, UpdateDownState, (PiranhaLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011604F0, void, AccelerateTowards, (PiranhaLocomotionIdleBehaviour * __this, Vector2 targetVelocity));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (PiranhaLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01160740, void, __ctor, (PiranhaLocomotionIdleBehaviour * __this));
}
