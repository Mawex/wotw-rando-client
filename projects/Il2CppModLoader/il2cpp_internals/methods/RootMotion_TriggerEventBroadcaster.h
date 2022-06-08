using namespace app;

namespace app::methods::RootMotion::TriggerEventBroadcaster {
IL2CPP_REGISTER_METHOD(0x02A2E0D0, void, OnTriggerEnter, (TriggerEventBroadcaster * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x02A2E1C0, void, OnTriggerStay, (TriggerEventBroadcaster * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x02A2E2B0, void, OnTriggerExit, (TriggerEventBroadcaster * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TriggerEventBroadcaster * __this));
}
