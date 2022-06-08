using namespace app;

namespace app::methods::SelfDestruct {
IL2CPP_REGISTER_METHOD(0x00AB57E0, void, OnPoolSpawned, (SelfDestruct * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (SelfDestruct * __this));
IL2CPP_REGISTER_METHOD(0x00AB57E0, void, Start, (SelfDestruct * __this));
IL2CPP_REGISTER_METHOD(0x00AB57F0, void, FixedUpdate, (SelfDestruct * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (SelfDestruct * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (SelfDestruct * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (SelfDestruct * __this));
}
