#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::DSACryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x020D5A60, void, __ctor, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020D5A80, void, __ctor, (DSACryptoServiceProvider * __this, CspParameters * parameters));
IL2CPP_REGISTER_METHOD(0x020D5AD0, void, __ctor, (DSACryptoServiceProvider * __this, int32_t dwKeySize));
IL2CPP_REGISTER_METHOD(0x020D5AE0, void, __ctor, (DSACryptoServiceProvider * __this, int32_t dwKeySize, CspParameters * parameters));
IL2CPP_REGISTER_METHOD(0x020D5B30, void, Common, (DSACryptoServiceProvider * __this, int32_t dwKeySize, bool parameters));
IL2CPP_REGISTER_METHOD(0x020D6160, void, Common, (DSACryptoServiceProvider * __this, CspParameters * parameters));
IL2CPP_REGISTER_METHOD(0x020D6320, void, Finalize, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_KeyExchangeAlgorithm, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020D63A0, int32_t, get_KeySize, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_PersistKeyInCsp, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_PersistKeyInCsp, (DSACryptoServiceProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x020D63D0, bool, get_PublicOnly, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020D63F0, String *, get_SignatureAlgorithm, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020D6470, bool, get_UseMachineKeyStore, ());
IL2CPP_REGISTER_METHOD(0x020D64F0, void, set_UseMachineKeyStore, (bool value));
IL2CPP_REGISTER_METHOD(0x020D6580, DSAParameters, ExportParameters, (DSACryptoServiceProvider * __this, bool includePrivateParameters));
IL2CPP_REGISTER_METHODINFO(0x0474A510, DSACryptoServiceProvider_ExportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D66B0, void, ImportParameters, (DSACryptoServiceProvider * __this, DSAParameters parameters));
IL2CPP_REGISTER_METHOD(0x01D61480, Byte__Array *, CreateSignature, (DSACryptoServiceProvider * __this, Byte__Array * rgbHash));
IL2CPP_REGISTER_METHOD(0x020D6700, Byte__Array *, SignData, (DSACryptoServiceProvider * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x020D6760, Byte__Array *, SignData, (DSACryptoServiceProvider * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x020D67F0, Byte__Array *, SignData, (DSACryptoServiceProvider * __this, Stream * inputStream));
IL2CPP_REGISTER_METHOD(0x020D6850, Byte__Array *, SignHash, (DSACryptoServiceProvider * __this, Byte__Array * rgbHash, String * str));
IL2CPP_REGISTER_METHODINFO(0x0472A290, DSACryptoServiceProvider_SignHash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D6990, bool, VerifyData, (DSACryptoServiceProvider * __this, Byte__Array * rgbData, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHOD(0x020D6A00, bool, VerifyHash, (DSACryptoServiceProvider * __this, Byte__Array * rgbHash, String * str, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x0470A310, DSACryptoServiceProvider_VerifyHash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D6B50, bool, VerifySignature, (DSACryptoServiceProvider * __this, Byte__Array * rgbHash, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHOD(0x020D6B80, Byte__Array *, HashData, (DSACryptoServiceProvider * __this, Byte__Array * data, int32_t offset, int32_t count, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x0475DCB0, DSACryptoServiceProvider_HashData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D6D10, Byte__Array *, HashData, (DSACryptoServiceProvider * __this, Stream * data, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04789EB8, DSACryptoServiceProvider_HashData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D6E70, void, Dispose, (DSACryptoServiceProvider * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020D6ED0, void, OnKeyGenerated, (DSACryptoServiceProvider * __this, Object * sender, EventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x0477C928, DSACryptoServiceProvider_OnKeyGenerated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, CspKeyContainerInfo *, get_CspKeyContainerInfo, (DSACryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020D6F60, Byte__Array *, ExportCspBlob, (DSACryptoServiceProvider * __this, bool includePrivateParameters));
IL2CPP_REGISTER_METHOD(0x020D6F80, void, ImportCspBlob, (DSACryptoServiceProvider * __this, Byte__Array * keyBlob));
IL2CPP_REGISTER_METHODINFO(0x047527D8, DSACryptoServiceProvider_ImportCspBlob__MethodInfo);
}
