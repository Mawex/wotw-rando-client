#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RSASignaturePadding {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (RSASignaturePadding * __this, RSASignaturePaddingMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x028EDC00, RSASignaturePadding *, get_Pkcs1, ());
IL2CPP_REGISTER_METHOD(0x028EDCA0, RSASignaturePadding *, get_Pss, ());
IL2CPP_REGISTER_METHOD(0x002FC6D0, RSASignaturePaddingMode__Enum, get_Mode, (RSASignaturePadding * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (RSASignaturePadding * __this));
IL2CPP_REGISTER_METHOD(0x028EDD40, bool, Equals, (RSASignaturePadding * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x028EDDF0, bool, Equals, (RSASignaturePadding * __this, RSASignaturePadding * other));
IL2CPP_REGISTER_METHOD(0x028EDEC0, bool, operator___, (RSASignaturePadding * left, RSASignaturePadding * right));
IL2CPP_REGISTER_METHOD(0x028EDEE0, bool, operator___, (RSASignaturePadding * left, RSASignaturePadding * right));
IL2CPP_REGISTER_METHOD(0x028EDFB0, String *, ToString, (RSASignaturePadding * __this));
IL2CPP_REGISTER_METHOD(0x028EE060, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x028EE280, void, __ctor, (RSASignaturePadding * __this));
IL2CPP_REGISTER_METHODINFO(0x04731320, RSASignaturePadding__ctor_1__MethodInfo);
}
