#include <interception_macros.h>

namespace app::methods::DamageDealer_TweakDamageDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00DC7830, Damage *, Invoke, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::Damage * dmg, app::DamageDealer * dealer, app::IDamageReciever * reciever));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::Damage * dmg, app::DamageDealer * dealer, app::IDamageReciever * reciever, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Damage *, EndInvoke, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::IAsyncResult * result));
}
