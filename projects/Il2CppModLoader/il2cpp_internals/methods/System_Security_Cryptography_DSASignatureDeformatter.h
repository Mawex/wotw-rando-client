#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::DSASignatureDeformatter {
IL2CPP_REGISTER_METHOD(0x020D72C0, void, __ctor, (DSASignatureDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x020D7360, void, __ctor, (DSASignatureDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04740690, DSASignatureDeformatter__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D7470, void, SetKey, (DSASignatureDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x047571A8, DSASignatureDeformatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D7580, void, SetHashAlgorithm, (DSASignatureDeformatter * __this, String * strName));
IL2CPP_REGISTER_METHODINFO(0x04704600, DSASignatureDeformatter_SetHashAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D7690, bool, VerifySignature, (DSASignatureDeformatter * __this, Byte__Array * rgbHash, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x0474E9F8, DSASignatureDeformatter_VerifySignature__MethodInfo);
}
