using namespace app;

namespace app::methods::Enemy {
IL2CPP_REGISTER_METHOD(0x00BFDBE0, float, ScaleHealth, (float health));
IL2CPP_REGISTER_METHOD(0x00BFDCB0, void, Awake, (Enemy * __this));
IL2CPP_REGISTER_METHOD(0x00BFDE40, void, OnDestroy, (Enemy * __this));
IL2CPP_REGISTER_METHOD(0x00BFDFF0, void, OnDeathEvent, (Enemy * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0473CC28, Enemy_OnDeathEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFE000, void, HandleLifeShard, (Enemy * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00443680, void, __ctor, (Enemy * __this));
}
