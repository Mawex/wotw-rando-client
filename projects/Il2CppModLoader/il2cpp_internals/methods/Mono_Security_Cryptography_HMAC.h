#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::HMAC {
IL2CPP_REGISTER_METHOD(0x02A3C290, Byte__Array *, get_Key, (HMAC_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3C3D0, void, set_Key, (HMAC_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0471A7D8, HMAC_1_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3C590, void, __ctor, (HMAC_1 * __this, HashAlgorithm * ha, Byte__Array * rgbKey));
IL2CPP_REGISTER_METHOD(0x02A3C750, void, Initialize, (HMAC_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3C790, Byte__Array *, HashFinal, (HMAC_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3C980, void, HashCore, (HMAC_1 * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x02A3CA30, void, initializePad, (HMAC_1 * __this));
}
