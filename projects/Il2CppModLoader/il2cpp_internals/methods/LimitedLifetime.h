#include <interception_macros.h>

namespace app::methods::LimitedLifetime {
IL2CPP_REGISTER_METHOD(0x00FA4B90, void, OnPoolSpawned, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x00FA4BA0, void, OnEnable, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x00FA4CF0, void, OnDisable, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x00FA4E40, void, Start, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x00FA4E50, void, SetRemainingLifetime, (LimitedLifetime * __this, float lifetime));
IL2CPP_REGISTER_METHOD(0x00FA4E60, void, KillNextFrame, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x00FA4E70, void, OnUpdate, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x00FA4F90, void, CallDestroy, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (LimitedLifetime * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (LimitedLifetime * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00FA50A0, void, __ctor, (LimitedLifetime * __this));
}
