using namespace app;

namespace app::methods::Moon::BehaviourSystem::ReceivedDamageCondition {
IL2CPP_REGISTER_METHOD(0x00CBB040, String *, get_Info, (ReceivedDamageCondition * __this));
IL2CPP_REGISTER_METHOD(0x00CBB0C0, bool, OnCheck, (ReceivedDamageCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CBB3A0, void, OnDisable, (ReceivedDamageCondition * __this));
IL2CPP_REGISTER_METHOD(0x00CBB5A0, void, OnDamageReceived, (ReceivedDamageCondition * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04745D18, ReceivedDamageCondition_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CB75E0, void, __ctor, (ReceivedDamageCondition * __this));
}
