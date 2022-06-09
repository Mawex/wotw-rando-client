#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::HMACSHA512 {
IL2CPP_REGISTER_METHOD(0x020DA7B0, void, __ctor_1, (app::HMACSHA512 * this_ptr));
IL2CPP_REGISTER_METHOD(0x020DA860, void, __ctor_2, (app::HMACSHA512 * this_ptr, app::Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x020DA770, int32_t, get_BlockSize, (app::HMACSHA512 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ProduceLegacyHmacValues, (app::HMACSHA512 * this_ptr));
IL2CPP_REGISTER_METHOD(0x020DA790, void, set_ProduceLegacyHmacValues, (app::HMACSHA512 * this_ptr, bool value));
}
