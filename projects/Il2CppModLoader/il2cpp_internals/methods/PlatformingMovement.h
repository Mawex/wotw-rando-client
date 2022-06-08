using namespace app;

namespace app::methods::PlatformingMovement {
IL2CPP_REGISTER_METHOD(0x01173700, bool, get_IsSuspended, (PlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01173710, void, set_IsSuspended, (PlatformingMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01173720, void, OnAwake, (PlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01173790, void, OnCollisionEnter, (PlatformingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01173790, void, OnCollisionStay, (PlatformingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x011737A0, bool, IsWallLeft, (PlatformingMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x011738B0, bool, IsWallRight, (PlatformingMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x011739C0, bool, IsGround, (PlatformingMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x01173AD0, bool, IsCeiling, (PlatformingMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x01173BE0, void, OnCollision, (PlatformingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01174050, void, FixedUpdate, (PlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01175160, bool, PlaceOnGround, (PlatformingMovement * __this, float lift, float distance));
IL2CPP_REGISTER_METHOD(0x011756A0, void, __ctor, (PlatformingMovement * __this));
}
