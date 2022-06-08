#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::RC4 {
IL2CPP_REGISTER_METHOD(0x025D48D0, void, __ctor, (RC4 * __this));
IL2CPP_REGISTER_METHOD(0x025D49B0, Byte__Array *, get_IV, (RC4 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IV, (RC4 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025D4A30, RC4 *, Create, ());
IL2CPP_REGISTER_METHOD(0x025D4CC0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02A42C50, void, __ctor, (RC4_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A42D30, Byte__Array *, get_IV, (RC4_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IV, (RC4_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02A42DB0, RC4_1 *, Create, ());
IL2CPP_REGISTER_METHOD(0x02A42EF0, void, __cctor, ());
}
