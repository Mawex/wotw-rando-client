#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X520_AttributeTypeAndValue {
IL2CPP_REGISTER_METHOD(0x0316BB70, void, __ctor, (X520_AttributeTypeAndValue * __this, String * oid, int32_t upperBound));
IL2CPP_REGISTER_METHOD(0x0316BB80, void, __ctor, (X520_AttributeTypeAndValue * __this, String * oid, int32_t upperBound, uint8_t encoding));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Value, (X520_AttributeTypeAndValue * __this));
IL2CPP_REGISTER_METHOD(0x0316BB90, void, set_Value, (X520_AttributeTypeAndValue * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477EBA8, X520_AttributeTypeAndValue_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0316BC90, ASN1_1 *, get_ASN1, (X520_AttributeTypeAndValue * __this));
IL2CPP_REGISTER_METHOD(0x0316BCA0, ASN1_1 *, GetASN1, (X520_AttributeTypeAndValue * __this, uint8_t encoding));
IL2CPP_REGISTER_METHOD(0x0316BC90, ASN1_1 *, GetASN1, (X520_AttributeTypeAndValue * __this));
IL2CPP_REGISTER_METHOD(0x0316C170, Byte__Array *, GetBytes, (X520_AttributeTypeAndValue * __this, uint8_t encoding));
IL2CPP_REGISTER_METHOD(0x0316C1A0, Byte__Array *, GetBytes, (X520_AttributeTypeAndValue * __this));
IL2CPP_REGISTER_METHOD(0x0316C1E0, uint8_t, SelectBestEncoding, (X520_AttributeTypeAndValue * __this));
}
