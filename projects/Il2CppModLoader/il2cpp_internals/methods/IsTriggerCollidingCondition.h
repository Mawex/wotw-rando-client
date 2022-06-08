using namespace app;

namespace app::methods::IsTriggerCollidingCondition {
IL2CPP_REGISTER_METHOD(0x00647DD0, void, Start, (IsTriggerCollidingCondition * __this));
IL2CPP_REGISTER_METHOD(0x00647DE0, void, Update, (IsTriggerCollidingCondition * __this));
IL2CPP_REGISTER_METHOD(0x00647DF0, void, UpdateState, (IsTriggerCollidingCondition * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, Validate, (IsTriggerCollidingCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00648000, void, OnCollisionEnter, (IsTriggerCollidingCondition * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00648190, void, OnCollisionExit, (IsTriggerCollidingCondition * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00648320, void, OnTriggerEnter, (IsTriggerCollidingCondition * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x006483F0, void, OnTriggerExit, (IsTriggerCollidingCondition * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x006484C0, void, ProcessEnter, (IsTriggerCollidingCondition * __this, GameObject * gameObject, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00648700, void, ProcessExit, (IsTriggerCollidingCondition * __this, GameObject * gameObject, Collision * collision));
IL2CPP_REGISTER_METHOD(0x006487E0, void, __ctor, (IsTriggerCollidingCondition * __this));
}
