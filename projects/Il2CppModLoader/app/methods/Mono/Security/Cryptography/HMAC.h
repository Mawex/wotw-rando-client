#pragma once
#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::HMAC {
    IL2CPP_REGISTER_METHOD(0x02A3C290, app::Byte__Array *, get_Key, (app::HMAC_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3C3D0, void, set_Key, (app::HMAC_1 * this_ptr, app::Byte__Array * value))
    IL2CPP_REGISTER_METHODINFO(0x0471A7D8, HMAC_1_set_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A3C590, void, ctor, (app::HMAC_1 * this_ptr, app::HashAlgorithm * ha, app::Byte__Array * rgb_key))
    IL2CPP_REGISTER_METHOD(0x02A3C750, void, Initialize, (app::HMAC_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3C790, app::Byte__Array *, HashFinal, (app::HMAC_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3C980, void, HashCore, (app::HMAC_1 * this_ptr, app::Byte__Array * array, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x02A3CA30, void, initializePad, (app::HMAC_1 * this_ptr))
}
