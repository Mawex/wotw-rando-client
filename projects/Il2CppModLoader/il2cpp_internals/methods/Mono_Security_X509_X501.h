#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X501 {
IL2CPP_REGISTER_METHOD(0x025E4F40, String *, ToString, (ASN1 * seq));
IL2CPP_REGISTER_METHOD(0x025E5170, String *, ToString, (ASN1 * seq, bool reversed, String * separator, bool quotes));
IL2CPP_REGISTER_METHOD(0x025E5470, void, AppendEntry, (StringBuilder * sb, ASN1 * entry, bool quotes));
IL2CPP_REGISTER_METHOD(0x025E5E60, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (X501_1 * __this));
IL2CPP_REGISTER_METHOD(0x02935710, String *, ToString, (ASN1_1 * seq));
IL2CPP_REGISTER_METHOD(0x02935940, String *, ToString, (ASN1_1 * seq, bool reversed, String * separator, bool quotes));
IL2CPP_REGISTER_METHOD(0x02935C40, void, AppendEntry, (StringBuilder * sb, ASN1_1 * entry, bool quotes));
IL2CPP_REGISTER_METHOD(0x02936630, X520_AttributeTypeAndValue *, GetAttributeFromOid, (String * attributeType));
IL2CPP_REGISTER_METHOD(0x02937DD0, bool, IsOid, (String * oid));
IL2CPP_REGISTER_METHOD(0x02937E80, X520_AttributeTypeAndValue *, ReadAttribute, (String * value, int32_t * pos));
IL2CPP_REGISTER_METHODINFO(0x0478DF28, X501_1_ReadAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938030, bool, IsHex, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x02938160, String *, ReadHex, (String * value, int32_t * pos));
IL2CPP_REGISTER_METHOD(0x029384E0, int32_t, ReadEscaped, (StringBuilder * sb, String * value, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x04776180, X501_1_ReadEscaped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029386E0, int32_t, ReadQuoted, (StringBuilder * sb, String * value, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x04767FA0, X501_1_ReadQuoted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938870, String *, ReadValue, (String * value, int32_t * pos));
IL2CPP_REGISTER_METHODINFO(0x04715A68, X501_1_ReadValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938C00, ASN1_1 *, FromString, (String * rdn));
IL2CPP_REGISTER_METHODINFO(0x04733C18, X501_1_FromString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938F10, void, __cctor, ());
}
