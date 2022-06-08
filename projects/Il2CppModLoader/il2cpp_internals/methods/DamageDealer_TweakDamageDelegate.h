using namespace app;

namespace app::methods::DamageDealer_TweakDamageDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DamageDealer_TweakDamageDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00DC7830, Damage *, Invoke, (DamageDealer_TweakDamageDelegate * __this, Damage * dmg, DamageDealer * dealer, IDamageReciever * reciever));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (DamageDealer_TweakDamageDelegate * __this, Damage * dmg, DamageDealer * dealer, IDamageReciever * reciever, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Damage *, EndInvoke, (DamageDealer_TweakDamageDelegate * __this, IAsyncResult * result));
}
