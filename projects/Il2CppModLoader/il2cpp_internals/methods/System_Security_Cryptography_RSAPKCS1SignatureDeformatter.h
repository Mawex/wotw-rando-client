#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RSAPKCS1SignatureDeformatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSAPKCS1SignatureDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x01F76900, void, __ctor, (RSAPKCS1SignatureDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x028ED210, void, SetHashAlgorithm, (RSAPKCS1SignatureDeformatter * __this, String * strName));
IL2CPP_REGISTER_METHODINFO(0x0478F7A8, RSAPKCS1SignatureDeformatter_SetHashAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028ED2D0, void, SetKey, (RSAPKCS1SignatureDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04738FE0, RSAPKCS1SignatureDeformatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028ED3E0, bool, VerifySignature, (RSAPKCS1SignatureDeformatter * __this, Byte__Array * rgbHash, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x04712910, RSAPKCS1SignatureDeformatter_VerifySignature__MethodInfo);
}
