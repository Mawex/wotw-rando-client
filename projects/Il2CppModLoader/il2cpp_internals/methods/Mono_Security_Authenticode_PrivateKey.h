#include <interception_macros.h>

namespace app::methods::Mono::Security::Authenticode::PrivateKey {
IL2CPP_REGISTER_METHOD(0x02A38DB0, void, __ctor, (PrivateKey * __this, Byte__Array * data, String * password));
IL2CPP_REGISTER_METHODINFO(0x04759BF0, PrivateKey__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, RSA *, get_RSA, (PrivateKey * __this));
IL2CPP_REGISTER_METHOD(0x02A38EC0, Byte__Array *, DeriveKey, (PrivateKey * __this, Byte__Array * salt, String * password));
IL2CPP_REGISTER_METHOD(0x02A39050, bool, Decode, (PrivateKey * __this, Byte__Array * pvk, String * password));
IL2CPP_REGISTER_METHOD(0x02A39460, PrivateKey *, CreateFromFile, (String * filename));
IL2CPP_REGISTER_METHOD(0x02A39470, PrivateKey *, CreateFromFile, (String * filename, String * password));
IL2CPP_REGISTER_METHODINFO(0x04779770, PrivateKey_CreateFromFile_1__MethodInfo);
}
