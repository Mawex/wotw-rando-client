using namespace app;

namespace app::methods::AudioSourceSuspendable {
IL2CPP_REGISTER_METHOD(0x00858E30, void, Awake, (AudioSourceSuspendable * __this));
IL2CPP_REGISTER_METHOD(0x00858EC0, void, Suspend, (AudioSourceSuspendable * __this));
IL2CPP_REGISTER_METHOD(0x00858F90, void, Resume, (AudioSourceSuspendable * __this));
IL2CPP_REGISTER_METHOD(0x00859010, void, set_IsSuspended, (AudioSourceSuspendable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsSuspended, (AudioSourceSuspendable * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (AudioSourceSuspendable * __this));
}
