#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::DSA {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DSA * __this));
IL2CPP_REGISTER_METHOD(0x020D3E80, DSA *, Create, ());
IL2CPP_REGISTER_METHOD(0x020D3FD0, DSA *, Create, (String * algName));
IL2CPP_REGISTER_METHOD(0x020D40B0, Byte__Array *, HashData, (DSA * __this, Byte__Array * data, int32_t offset, int32_t count, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04764948, DSA_HashData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D40F0, Byte__Array *, HashData, (DSA * __this, Stream * data, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04793AF0, DSA_HashData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D4130, Byte__Array *, SignData, (DSA * __this, Byte__Array * data, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04748E60, DSA_SignData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D4220, Byte__Array *, SignData, (DSA * __this, Byte__Array * data, int32_t offset, int32_t count, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x0478FA80, DSA_SignData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D43E0, Byte__Array *, SignData, (DSA * __this, Stream * data, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x0474F0D0, DSA_SignData_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D44F0, bool, VerifyData, (DSA * __this, Byte__Array * data, Byte__Array * signature, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04722500, DSA_VerifyData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D45F0, bool, VerifyData, (DSA * __this, Byte__Array * data, int32_t offset, int32_t count, Byte__Array * signature, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04758C10, DSA_VerifyData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D4800, bool, VerifyData, (DSA * __this, Stream * data, Byte__Array * signature, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04725AE0, DSA_VerifyData_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D4970, void, FromXmlString, (DSA * __this, String * xmlString));
IL2CPP_REGISTER_METHODINFO(0x0475AEB8, DSA_FromXmlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D5350, String *, ToXmlString, (DSA * __this, bool includePrivateParameters));
IL2CPP_REGISTER_METHOD(0x020D5790, Exception *, DerivedClassMustOverride, ());
IL2CPP_REGISTER_METHOD(0x020D58F0, Exception *, HashAlgorithmNameNullOrEmpty, ());
}
