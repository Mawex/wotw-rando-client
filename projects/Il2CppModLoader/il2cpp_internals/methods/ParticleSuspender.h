using namespace app;

namespace app::methods::ParticleSuspender {
IL2CPP_REGISTER_METHOD(0x00444910, void, OnPoolSpawned, (ParticleSuspender * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (ParticleSuspender * __this));
IL2CPP_REGISTER_METHOD(0x00444920, void, Awake, (ParticleSuspender * __this));
IL2CPP_REGISTER_METHOD(0x00444A90, void, Suspend, (ParticleSuspender * __this));
IL2CPP_REGISTER_METHOD(0x00444B60, void, Resume, (ParticleSuspender * __this));
IL2CPP_REGISTER_METHOD(0x00444C30, void, set_IsSuspended, (ParticleSuspender * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsSuspended, (ParticleSuspender * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (ParticleSuspender * __this));
}
