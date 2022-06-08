using namespace app;

namespace app::methods::DestructibleStalactite {
IL2CPP_REGISTER_METHOD(0x00B8DCD0, Vector3, get_Position, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00B8DCF0, void, set_Position, (DestructibleStalactite * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRecieveDamage, (DestructibleStalactite * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00B8DD00, void, Awake, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IDamageReciever__Array *, get_AffectedReceivers, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DestructibleStalactite * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DestructibleStalactite * __this));
}
