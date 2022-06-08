#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaAttDef {
IL2CPP_REGISTER_METHOD(0x016E7630, void, __ctor, (SchemaAttDef * __this, XmlQualifiedName * name, String * prefix));
IL2CPP_REGISTER_METHOD(0x016E7640, void, __ctor, (SchemaAttDef * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x016E7650, void, __ctor, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x016E7660, String *, IDtdAttributeInfo_get_Prefix, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x01052DF0, String *, IDtdAttributeInfo_get_LocalName, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, IDtdAttributeInfo_get_LineNumber, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, IDtdAttributeInfo_get_LinePosition, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x016E7670, bool, IDtdAttributeInfo_get_IsNonCDataType, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, IDtdAttributeInfo_get_IsDeclaredInExternal, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x016E76A0, bool, IDtdAttributeInfo_get_IsXmlAttribute, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x016E76B0, String *, IDtdDefaultAttributeInfo_get_DefaultValueExpanded, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, IDtdDefaultAttributeInfo_get_DefaultValueTyped, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, IDtdDefaultAttributeInfo_get_ValueLineNumber, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, IDtdDefaultAttributeInfo_get_ValueLinePosition, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_LinePosition, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_LinePosition, (SchemaAttDef * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_LineNumber, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_LineNumber, (SchemaAttDef * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_ValueLinePosition, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_ValueLinePosition, (SchemaAttDef * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_ValueLineNumber, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x003FF7C0, void, set_ValueLineNumber, (SchemaAttDef * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x016E76C0, String *, get_DefaultValueExpanded, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_DefaultValueExpanded, (SchemaAttDef * __this, String * value));
IL2CPP_REGISTER_METHOD(0x016E7750, XmlTokenizedType__Enum, get_TokenizedType, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x016E7780, void, set_TokenizedType, (SchemaAttDef * __this, XmlTokenizedType__Enum value));
IL2CPP_REGISTER_METHOD(0x003FF8B0, SchemaAttDef_Reserve__Enum, get_Reserved, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_Reserved, (SchemaAttDef * __this, SchemaAttDef_Reserve__Enum value));
IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_DefaultValueChecked, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, XmlSchemaAttribute *, get_SchemaAttribute, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_SchemaAttribute, (SchemaAttDef * __this, XmlSchemaAttribute * value));
IL2CPP_REGISTER_METHOD(0x016E77A0, void, CheckXmlSpace, (SchemaAttDef * __this, IValidationEventHandling * validationEventHandling));
IL2CPP_REGISTER_METHOD(0x016E7B40, SchemaAttDef *, Clone, (SchemaAttDef * __this));
IL2CPP_REGISTER_METHOD(0x016E7C70, void, __cctor, ());
}
