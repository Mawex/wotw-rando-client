using namespace app;

namespace app::methods::RigidbodySuspendable {
IL2CPP_REGISTER_METHOD(0x013548F0, void, OnPoolSpawned, (RigidbodySuspendable * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (RigidbodySuspendable * __this));
IL2CPP_REGISTER_METHOD(0x013549D0, void, Awake, (RigidbodySuspendable * __this));
IL2CPP_REGISTER_METHOD(0x01354AD0, void, Suspend, (RigidbodySuspendable * __this));
IL2CPP_REGISTER_METHOD(0x01354D60, void, Resume, (RigidbodySuspendable * __this));
IL2CPP_REGISTER_METHOD(0x01354F20, void, set_IsSuspended, (RigidbodySuspendable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsSuspended, (RigidbodySuspendable * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (RigidbodySuspendable * __this));
}
