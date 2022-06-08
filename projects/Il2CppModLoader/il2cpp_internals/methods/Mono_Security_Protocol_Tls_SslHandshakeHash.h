#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslHandshakeHash {
IL2CPP_REGISTER_METHOD(0x01F81810, void, __ctor, (SslHandshakeHash * __this, Byte__Array * secret));
IL2CPP_REGISTER_METHOD(0x01F818B0, void, Initialize, (SslHandshakeHash * __this));
IL2CPP_REGISTER_METHOD(0x01F81910, Byte__Array *, HashFinal, (SslHandshakeHash * __this));
IL2CPP_REGISTER_METHOD(0x01F81D40, void, HashCore, (SslHandshakeHash * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x01F81DE0, Byte__Array *, CreateSignature, (SslHandshakeHash * __this, RSA * rsa));
IL2CPP_REGISTER_METHODINFO(0x04751FB0, SslHandshakeHash_CreateSignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F81FC0, bool, VerifySignature, (SslHandshakeHash * __this, RSA * rsa, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x04737B60, SslHandshakeHash_VerifySignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F821E0, void, initializePad, (SslHandshakeHash * __this));
}
