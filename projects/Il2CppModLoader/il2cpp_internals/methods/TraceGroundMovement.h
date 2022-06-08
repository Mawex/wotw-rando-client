using namespace app;

namespace app::methods::TraceGroundMovement {
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Speed, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Speed, (TraceGroundMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B009B0, void, Awake, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B00B60, void, OnDestroy, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B00C00, Vector3, get_Right, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B00D50, Vector3, get_Left, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B00E50, Vector3, get_Up, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B00E70, Vector3, get_Down, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B00F60, void, OnCollisionEnter, (TraceGroundMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00B00F60, void, OnCollisionStay, (TraceGroundMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00B00F70, void, OnCollision, (TraceGroundMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00B01090, void, FixedUpdate, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B01910, void, ApplyKickback, (TraceGroundMovement * __this, float kickbackMultiplier));
IL2CPP_REGISTER_METHOD(0x00B01940, void, OnRecieveDamage, (TraceGroundMovement * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00B01AE0, void, Serialize, (TraceGroundMovement * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_IsSuspended, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x0074AB20, void, set_IsSuspended, (TraceGroundMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF8B0, SuspendableMask__Enum, get_Mask, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B01D10, void, set_Mask, (TraceGroundMovement * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B01DC0, void, __ctor, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (TraceGroundMovement * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (TraceGroundMovement * __this));
}
