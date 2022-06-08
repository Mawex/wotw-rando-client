using namespace app;

namespace app::methods::DealDamageOverTime {
IL2CPP_REGISTER_METHOD(0x00DDD550, void, OnDisable, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x00DDD5F0, void, Awake, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x00DDD700, void, OnDestroy, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x00DDD7A0, void, Start, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x00DDD7B0, void, FixedUpdate, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x00DDDB70, void, ResetRemainingTime, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (DealDamageOverTime * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00608710, SuspendableMask__Enum, get_Mask, (DealDamageOverTime * __this));
IL2CPP_REGISTER_METHOD(0x00DDDB80, void, set_Mask, (DealDamageOverTime * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00DDDC30, void, __ctor, (DealDamageOverTime * __this));
}
