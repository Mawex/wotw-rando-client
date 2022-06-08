using namespace app;

namespace app::methods::WindArea {
IL2CPP_REGISTER_METHOD(0x002FB9B0, Transform *, get_Transform, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Transform, (WindArea * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x00574DD0, void, Awake, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00574F00, void, OnDestroy, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00574FA0, void, OnTriggerEnter, (WindArea * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00574FA0, void, OnTriggerStay, (WindArea * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00574FB0, void, OnOverlap, (WindArea * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00575060, void, FixedUpdate, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575070, Vector3, get_WindSpeed, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575230, float, get_WindHorizontalAcceleration, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575340, float, get_WindVerticalAcceleration, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_IsOverlapping, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575460, void, set_IsOverlapping, (WindArea * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00575470, bool, get_IsSuspended, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575480, void, set_IsSuspended, (WindArea * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF3C0, SuspendableMask__Enum, get_Mask, (WindArea * __this));
IL2CPP_REGISTER_METHOD(0x00575490, void, set_Mask, (WindArea * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00575540, void, __ctor, (WindArea * __this));
}
