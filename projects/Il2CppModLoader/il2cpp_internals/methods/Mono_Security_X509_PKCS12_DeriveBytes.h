#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::PKCS12_DeriveBytes {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PKCS12_DeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_HashName, (PKCS12_DeriveBytes * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_IterationCount, (PKCS12_DeriveBytes * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x025E4300, void, set_Password, (PKCS12_DeriveBytes * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025E4460, void, set_Salt, (PKCS12_DeriveBytes * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025E45B0, void, Adjust, (PKCS12_DeriveBytes * __this, Byte__Array * a, int32_t aOff, Byte__Array * b));
IL2CPP_REGISTER_METHOD(0x025E46B0, Byte__Array *, Derive, (PKCS12_DeriveBytes * __this, Byte__Array * diversifier, int32_t n));
IL2CPP_REGISTER_METHOD(0x025E4BE0, Byte__Array *, DeriveKey, (PKCS12_DeriveBytes * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x025E4CA0, Byte__Array *, DeriveIV, (PKCS12_DeriveBytes * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x025E4D60, Byte__Array *, DeriveMAC, (PKCS12_DeriveBytes * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x025E4E20, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PKCS12_DeriveBytes_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_HashName, (PKCS12_DeriveBytes_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_HashName, (PKCS12_DeriveBytes_1 * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_IterationCount, (PKCS12_DeriveBytes_1 * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_IterationCount, (PKCS12_DeriveBytes_1 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02934950, Byte__Array *, get_Password, (PKCS12_DeriveBytes_1 * __this));
IL2CPP_REGISTER_METHOD(0x02934A90, void, set_Password, (PKCS12_DeriveBytes_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02934BF0, Byte__Array *, get_Salt, (PKCS12_DeriveBytes_1 * __this));
IL2CPP_REGISTER_METHOD(0x02934D30, void, set_Salt, (PKCS12_DeriveBytes_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025E45B0, void, Adjust, (PKCS12_DeriveBytes_1 * __this, Byte__Array * a, int32_t aOff, Byte__Array * b));
IL2CPP_REGISTER_METHOD(0x02934E80, Byte__Array *, Derive, (PKCS12_DeriveBytes_1 * __this, Byte__Array * diversifier, int32_t n));
IL2CPP_REGISTER_METHOD(0x029353B0, Byte__Array *, DeriveKey, (PKCS12_DeriveBytes_1 * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x02935470, Byte__Array *, DeriveIV, (PKCS12_DeriveBytes_1 * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x02935530, Byte__Array *, DeriveMAC, (PKCS12_DeriveBytes_1 * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x029355F0, void, __cctor, ());
}
