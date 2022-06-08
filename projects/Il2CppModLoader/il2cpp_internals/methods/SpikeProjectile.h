#include <interception_macros.h>

namespace app::methods::SpikeProjectile {
IL2CPP_REGISTER_METHOD(0x011C6E80, void, Awake, (SpikeProjectile * __this));
IL2CPP_REGISTER_METHOD(0x011C6EB0, void, FixedUpdate, (SpikeProjectile * __this));
IL2CPP_REGISTER_METHOD(0x011C7060, void, OnRicochet, (SpikeProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (SpikeProjectile * __this));
IL2CPP_REGISTER_METHOD(0x011C7090, void, __ctor, (SpikeProjectile * __this));
}
