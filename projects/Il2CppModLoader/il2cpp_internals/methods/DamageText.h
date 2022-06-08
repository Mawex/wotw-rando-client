using namespace app;

namespace app::methods::DamageText {
IL2CPP_REGISTER_METHOD(0x00DC9AD0, void, Awake, (DamageText * __this));
IL2CPP_REGISTER_METHOD(0x00DC9AE0, void, Start, (DamageText * __this));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (DamageText * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (DamageText * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DC9D50, void, FixedUpdate, (DamageText * __this));
IL2CPP_REGISTER_METHOD(0x00DCA0C0, void, ChangeText, (DamageText * __this, Damage * damage, bool isPlayerDamage));
IL2CPP_REGISTER_METHOD(0x00DCA500, void, OnPoolSpawned, (DamageText * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (DamageText * __this));
IL2CPP_REGISTER_METHOD(0x00DCA510, void, __ctor, (DamageText * __this));
}
