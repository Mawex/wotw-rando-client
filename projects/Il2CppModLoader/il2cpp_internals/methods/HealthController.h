using namespace app;

namespace app::methods::HealthController {
IL2CPP_REGISTER_METHOD(0x010A16F0, void, Awake, (HealthController * __this));
IL2CPP_REGISTER_METHOD(0x010A1930, void, OnValueChanged, (HealthController * __this));
IL2CPP_REGISTER_METHODINFO(0x04779688, HealthController_OnValueChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010A1960, void, add_OnHealthDepletedEvent, (HealthController * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x010A1A50, void, remove_OnHealthDepletedEvent, (HealthController * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x010A1B40, void, __ctor, (HealthController * __this));
}
