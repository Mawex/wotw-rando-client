using namespace app;

namespace app::methods::Moon::AirChaseBehaviour {
IL2CPP_REGISTER_METHOD(0x013334C0, float, get_EffectiveTraversalSpeed, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01256740, float, get_ChasingTime, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01256750, void, set_ChasingTime, (AirChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x01202540, bool, get_HasLineOfSight, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01202550, void, set_HasLineOfSight, (AirChaseBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x013336E0, Vector3, get_TargetPos, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01333BD0, void, OnEnter, (AirChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01333CB0, void, AssignLocomotionData, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01333DB0, BehaviourStatus__Enum, OnExecute, (AirChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01334110, bool, CheckMovementBehaviourEndCondition, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01334270, bool, CheckArriveTargetEndCondition, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01334320, void, UpdateNearbyBounds, (AirChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x013344C0, void, OnExit, (AirChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013344D0, void, __ctor, (AirChaseBehaviour * __this));
}
