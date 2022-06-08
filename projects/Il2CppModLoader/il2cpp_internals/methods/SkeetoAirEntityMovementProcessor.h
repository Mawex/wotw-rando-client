using namespace app;

namespace app::methods::SkeetoAirEntityMovementProcessor {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawGizmos, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_ApplyNoise, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_ApplyNoise, (SkeetoAirEntityMovementProcessor * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0074B530, float, get_AccelerationMultiplier, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0074B540, void, set_AccelerationMultiplier, (SkeetoAirEntityMovementProcessor * __this, float value));
IL2CPP_REGISTER_METHOD(0x0074B550, float, get_DecelerationMultiplier, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0074B560, void, set_DecelerationMultiplier, (SkeetoAirEntityMovementProcessor * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FFA40, float, get_CurrentObstacleAvoidanceStrength, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0074B570, float, get_Acceleration, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0074B590, float, get_Deceleration, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0074B5B0, void, Init, (SkeetoAirEntityMovementProcessor * __this, EntityWeightData_EntityWeight__Enum weight, CharacterPlatformMovement * platformMovement, ILocomotionTurningHandler * turningHandler));
IL2CPP_REGISTER_METHOD(0x0074B720, void, OnFixedUpdate, (SkeetoAirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0074BC30, bool, ApplyCollisionAvoidance, (SkeetoAirEntityMovementProcessor * __this, Vector2 * velocity));
IL2CPP_REGISTER_METHOD(0x0074C1D0, void, DebugDrawLolipop, (SkeetoAirEntityMovementProcessor * __this, Vector3 from, Vector3 to, float radius, Color color));
IL2CPP_REGISTER_METHOD(0x0074C370, void, __ctor, (SkeetoAirEntityMovementProcessor * __this));
}
