#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::HMACSHA512 {
IL2CPP_REGISTER_METHOD(0x020DA7B0, void, __ctor, (HMACSHA512 * __this));
IL2CPP_REGISTER_METHOD(0x020DA860, void, __ctor, (HMACSHA512 * __this, Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x020DA770, int32_t, get_BlockSize, (HMACSHA512 * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ProduceLegacyHmacValues, (HMACSHA512 * __this));
IL2CPP_REGISTER_METHOD(0x020DA790, void, set_ProduceLegacyHmacValues, (HMACSHA512 * __this, bool value));
}
