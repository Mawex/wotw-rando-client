#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::SymmetricAlgorithm {
IL2CPP_REGISTER_METHOD(0x01E0FF80, void, __ctor, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E0FF90, void, Dispose, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10040, void, Clear, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E100D0, void, Dispose, (SymmetricAlgorithm * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_BlockSize, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10120, void, set_BlockSize, (SymmetricAlgorithm * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04737578, SymmetricAlgorithm_set_BlockSize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FeedbackSize, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E102C0, void, set_FeedbackSize, (SymmetricAlgorithm * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0476EF58, SymmetricAlgorithm_set_FeedbackSize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E103A0, Byte__Array *, get_IV, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10500, void, set_IV, (SymmetricAlgorithm * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04712870, SymmetricAlgorithm_set_IV__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E106D0, Byte__Array *, get_Key, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10830, void, set_Key, (SymmetricAlgorithm * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0476C980, SymmetricAlgorithm_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E10A10, KeySizes__Array *, get_LegalBlockSizes, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10B50, KeySizes__Array *, get_LegalKeySizes, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeySize, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10C90, void, set_KeySize, (SymmetricAlgorithm * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0472EF00, SymmetricAlgorithm_set_KeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FC830, CipherMode__Enum, get_Mode, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10D70, void, set_Mode, (SymmetricAlgorithm * __this, CipherMode__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0470E460, SymmetricAlgorithm_set_Mode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57A0, PaddingMode__Enum, get_Padding, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E10E40, void, set_Padding, (SymmetricAlgorithm * __this, PaddingMode__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0479A198, SymmetricAlgorithm_set_Padding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E10F10, bool, ValidKeySize, (SymmetricAlgorithm * __this, int32_t bitLength));
IL2CPP_REGISTER_METHOD(0x01E11010, SymmetricAlgorithm *, Create, ());
IL2CPP_REGISTER_METHOD(0x01E11150, SymmetricAlgorithm *, Create, (String * algName));
IL2CPP_REGISTER_METHOD(0x01E11230, ICryptoTransform *, CreateEncryptor, (SymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x01E11290, ICryptoTransform *, CreateDecryptor, (SymmetricAlgorithm * __this));
}
