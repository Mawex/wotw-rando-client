#include <interception_macros.h>

namespace app::methods::Mono_Security_X509::X501 {
IL2CPP_REGISTER_METHOD(0x025E4F40, String *, ToString_1, (app::ASN1 * seq));
IL2CPP_REGISTER_METHOD(0x025E5170, String *, ToString_2, (app::ASN1 * seq, bool reversed, app::String * separator, bool quotes));
IL2CPP_REGISTER_METHOD(0x025E5470, void, AppendEntry_1, (app::StringBuilder * sb, app::ASN1 * entry, bool quotes));
IL2CPP_REGISTER_METHOD(0x025E5E60, void, __cctor_1, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::X501_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02935710, String *, ToString_3, (app::ASN1_1 * seq));
IL2CPP_REGISTER_METHOD(0x02935940, String *, ToString_4, (app::ASN1_1 * seq, bool reversed, app::String * separator, bool quotes));
IL2CPP_REGISTER_METHOD(0x02935C40, void, AppendEntry_2, (app::StringBuilder * sb, app::ASN1_1 * entry, bool quotes));
IL2CPP_REGISTER_METHOD(0x02936630, X520_AttributeTypeAndValue *, GetAttributeFromOid, (app::String * attribute_type));
IL2CPP_REGISTER_METHOD(0x02937DD0, bool, IsOid, (app::String * oid));
IL2CPP_REGISTER_METHOD(0x02937E80, X520_AttributeTypeAndValue *, ReadAttribute, (app::String * value, app::int32_t * pos));
IL2CPP_REGISTER_METHODINFO(0x0478DF28, X501_1_ReadAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938030, bool, IsHex, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x02938160, String *, ReadHex, (app::String * value, app::int32_t * pos));
IL2CPP_REGISTER_METHOD(0x029384E0, int32_t, ReadEscaped, (app::StringBuilder * sb, app::String * value, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x04776180, X501_1_ReadEscaped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029386E0, int32_t, ReadQuoted, (app::StringBuilder * sb, app::String * value, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x04767FA0, X501_1_ReadQuoted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938870, String *, ReadValue, (app::String * value, app::int32_t * pos));
IL2CPP_REGISTER_METHODINFO(0x04715A68, X501_1_ReadValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938C00, ASN1_1 *, FromString, (app::String * rdn));
IL2CPP_REGISTER_METHODINFO(0x04733C18, X501_1_FromString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02938F10, void, __cctor_2, ());
}
