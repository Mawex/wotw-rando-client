using namespace app;

namespace app::methods::DamageReceiverCondition {
IL2CPP_REGISTER_METHOD(0x00DC85E0, IDamageNotifier *, get_ResolvedDamageNotifier, (DamageReceiverCondition * __this));
IL2CPP_REGISTER_METHOD(0x00DC86A0, void, OnEnable, (DamageReceiverCondition * __this));
IL2CPP_REGISTER_METHOD(0x00DC8870, void, OnDisable, (DamageReceiverCondition * __this));
IL2CPP_REGISTER_METHOD(0x00447380, void, LateUpdate, (DamageReceiverCondition * __this));
IL2CPP_REGISTER_METHOD(0x00DC8A40, void, OnDamageNotificationReceived, (DamageReceiverCondition * __this, Damage * obj));
IL2CPP_REGISTER_METHODINFO(0x0473FDD8, DamageReceiverCondition_OnDamageNotificationReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004358D0, bool, Validate, (DamageReceiverCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DamageReceiverCondition * __this));
}
