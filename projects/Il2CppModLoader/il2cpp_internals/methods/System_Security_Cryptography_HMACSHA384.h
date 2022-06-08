#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::HMACSHA384 {
IL2CPP_REGISTER_METHOD(0x020DA450, void, __ctor, (HMACSHA384 * __this));
IL2CPP_REGISTER_METHOD(0x020DA500, void, __ctor, (HMACSHA384 * __this, Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x020DA770, int32_t, get_BlockSize, (HMACSHA384 * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ProduceLegacyHmacValues, (HMACSHA384 * __this));
IL2CPP_REGISTER_METHOD(0x020DA790, void, set_ProduceLegacyHmacValues, (HMACSHA384 * __this, bool value));
}
