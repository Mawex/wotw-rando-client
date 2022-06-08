using namespace app;

namespace app::methods::DeathUberStateManager {
IL2CPP_REGISTER_METHOD(0x00DDEDC0, void, Awake, (DeathUberStateManager * __this));
IL2CPP_REGISTER_METHOD(0x00DDEF50, void, Register, (IDeathUberStateSetter * setter));
IL2CPP_REGISTER_METHOD(0x00DDF010, void, Unregister, (IDeathUberStateSetter * setter));
IL2CPP_REGISTER_METHOD(0x00DDF0D0, void, OnDestroy, (DeathUberStateManager * __this));
IL2CPP_REGISTER_METHOD(0x00DDF260, void, OnDeath, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04783508, DeathUberStateManager_OnDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DeathUberStateManager * __this));
IL2CPP_REGISTER_METHOD(0x00DDF550, void, __cctor, (MethodInfo * method));
}
