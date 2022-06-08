using namespace app;

namespace app::methods::Moon::AirEntityMovementProcessor {
IL2CPP_REGISTER_METHOD(0x01337370, bool, get_GravityDisabled, (AirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x01337380, void, Init, (AirEntityMovementProcessor * __this, Entity * entity, EntityWeightData_EntityWeight__Enum weight, CharacterPlatformMovement * platformMovement, ILocomotionTurningHandler * turningHandler));
IL2CPP_REGISTER_METHOD(0x01337500, void, UpdateAngle, (AirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x01337750, void, OnFixedUpdate, (AirEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011B8AA0, void, __ctor, (AirEntityMovementProcessor * __this));
}
