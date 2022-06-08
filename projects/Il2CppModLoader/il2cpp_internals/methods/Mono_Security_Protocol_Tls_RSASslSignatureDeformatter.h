#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::RSASslSignatureDeformatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSASslSignatureDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x01F76900, void, __ctor, (RSASslSignatureDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x01F76920, bool, VerifySignature, (RSASslSignatureDeformatter * __this, Byte__Array * rgbHash, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x0477DC20, RSASslSignatureDeformatter_VerifySignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F76B30, void, SetHashAlgorithm, (RSASslSignatureDeformatter * __this, String * strName));
IL2CPP_REGISTER_METHOD(0x01F76CD0, void, SetKey, (RSASslSignatureDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04737740, RSASslSignatureDeformatter_SetKey__MethodInfo);
}
