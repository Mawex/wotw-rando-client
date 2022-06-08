using namespace app;

namespace app::methods::UnityEngine::CharacterController {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309E7C0, bool, SimpleMove, (CharacterController * __this, Vector3 speed));
IL2CPP_REGISTER_METHOD(0x0309E820, CollisionFlags__Enum, Move, (CharacterController * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x0309E880, Vector3, get_velocity, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309E900, bool, get_isGrounded, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309E950, CollisionFlags__Enum, get_collisionFlags, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309E9A0, float, get_radius, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309E9F0, void, set_radius, (CharacterController * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309EA50, float, get_height, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309EAA0, void, set_height, (CharacterController * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309EB00, Vector3, get_center, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309EB80, void, set_center, (CharacterController * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309EBE0, float, get_slopeLimit, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309EC30, void, set_slopeLimit, (CharacterController * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309EC90, float, get_stepOffset, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309ECE0, void, set_stepOffset, (CharacterController * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309ED40, float, get_skinWidth, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309ED90, void, set_skinWidth, (CharacterController * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309EDF0, float, get_minMoveDistance, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309EE40, void, set_minMoveDistance, (CharacterController * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309EEA0, bool, get_detectCollisions, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309EEF0, void, set_detectCollisions, (CharacterController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0309EF50, bool, get_enableOverlapRecovery, (CharacterController * __this));
IL2CPP_REGISTER_METHOD(0x0309EFA0, void, set_enableOverlapRecovery, (CharacterController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0309F000, bool, SimpleMove_Injected, (CharacterController * __this, Vector3 * speed));
IL2CPP_REGISTER_METHOD(0x0309F060, CollisionFlags__Enum, Move_Injected, (CharacterController * __this, Vector3 * motion));
IL2CPP_REGISTER_METHOD(0x0309F0C0, void, get_velocity_Injected, (CharacterController * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309F120, void, get_center_Injected, (CharacterController * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309F180, void, set_center_Injected, (CharacterController * __this, Vector3 * value));
}
