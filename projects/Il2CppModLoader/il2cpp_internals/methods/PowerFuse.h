#include <interception_macros.h>

namespace app::methods::PowerFuse {
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (PowerFuse * __this));
IL2CPP_REGISTER_METHOD(0x00A64220, Action *, get_OnDestroyed, (PowerFuse * __this));
IL2CPP_REGISTER_METHOD(0x00510100, void, set_OnDestroyed, (PowerFuse * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00C6B1B0, void, OnRecieveDamage, (PowerFuse * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00C6B1D0, void, SetDead, (PowerFuse * __this));
IL2CPP_REGISTER_METHOD(0x00C6B2B0, void, SetAlive, (PowerFuse * __this));
IL2CPP_REGISTER_METHOD(0x00C6B370, bool, IsDead, (PowerFuse * __this));
IL2CPP_REGISTER_METHOD(0x00C6B380, void, __ctor, (PowerFuse * __this));
}
