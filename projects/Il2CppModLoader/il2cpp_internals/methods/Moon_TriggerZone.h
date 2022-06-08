using namespace app;

namespace app::methods::Moon::TriggerZone {
IL2CPP_REGISTER_METHOD(0x031B0F80, void, add_OnEnterTrigger, (TriggerZone * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031B1070, void, remove_OnEnterTrigger, (TriggerZone * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00F506B0, void, OnTriggerEnter2D, (TriggerZone * __this, Collider2D * other));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TriggerZone * __this));
}
