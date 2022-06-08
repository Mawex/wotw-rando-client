#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaInfo {
IL2CPP_REGISTER_METHOD(0x01CB6210, void, __ctor, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB6240, void, __ctor, (XmlSchemaInfo * __this, XmlSchemaValidity__Enum validity));
IL2CPP_REGISTER_METHOD(0x003FC7F0, XmlSchemaValidity__Enum, get_Validity, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Validity, (XmlSchemaInfo * __this, XmlSchemaValidity__Enum value));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDefault, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsDefault, (XmlSchemaInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsNil, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_IsNil, (XmlSchemaInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlSchemaSimpleType *, get_MemberType, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_MemberType, (XmlSchemaInfo * __this, XmlSchemaSimpleType * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaType *, get_SchemaType, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB6270, void, set_SchemaType, (XmlSchemaInfo * __this, XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlSchemaElement *, get_SchemaElement, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB6290, void, set_SchemaElement, (XmlSchemaInfo * __this, XmlSchemaElement * value));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlSchemaAttribute *, get_SchemaAttribute, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB62B0, void, set_SchemaAttribute, (XmlSchemaInfo * __this, XmlSchemaAttribute * value));
IL2CPP_REGISTER_METHOD(0x003FC830, XmlSchemaContentType__Enum, get_ContentType, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB62D0, XmlSchemaType *, get_XmlType, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB62E0, bool, get_HasDefaultValue, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB6320, bool, get_IsUnionType, (XmlSchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CB6210, void, Clear, (XmlSchemaInfo * __this));
}
