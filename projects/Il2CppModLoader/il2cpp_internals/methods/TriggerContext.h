using namespace app;

namespace app::methods::TriggerContext {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (TriggerContext * __this, Collider * collider, Collider * triggerReciever));
IL2CPP_REGISTER_METHOD(0x002FA280, Collider *, get_Collider, (TriggerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Collider, (TriggerContext * __this, Collider * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Collider *, get_TriggerReciever, (TriggerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TriggerReciever, (TriggerContext * __this, Collider * value));
}
