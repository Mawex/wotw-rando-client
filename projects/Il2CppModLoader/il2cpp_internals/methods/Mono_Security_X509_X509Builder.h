#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509Builder {
IL2CPP_REGISTER_METHOD(0x029392D0, void, __ctor, (X509Builder * __this));
IL2CPP_REGISTER_METHOD(0x02939360, String *, GetOid, (X509Builder * __this, String * hashName));
IL2CPP_REGISTER_METHODINFO(0x04790CE0, X509Builder_GetOid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Hash, (X509Builder * __this));
IL2CPP_REGISTER_METHOD(0x029396C0, void, set_Hash, (X509Builder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02939760, Byte__Array *, Sign, (X509Builder * __this, AsymmetricAlgorithm * aa));
IL2CPP_REGISTER_METHODINFO(0x0470D6F0, X509Builder_Sign__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02939950, Byte__Array *, Build, (X509Builder * __this, ASN1_1 * tbs, String * hashoid, Byte__Array * signature));
IL2CPP_REGISTER_METHOD(0x02939C00, Byte__Array *, Sign, (X509Builder * __this, RSA * key));
IL2CPP_REGISTER_METHOD(0x02939E30, Byte__Array *, Sign, (X509Builder * __this, DSA * key));
IL2CPP_REGISTER_METHODINFO(0x04717278, X509Builder_Sign_2__MethodInfo);
}
