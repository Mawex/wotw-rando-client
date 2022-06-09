#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaInfo {
IL2CPP_REGISTER_METHOD(0x01CB6210, void, __ctor_1, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB6240, void, __ctor_2, (app::XmlSchemaInfo * this_ptr, app::XmlSchemaValidity__Enum validity));
IL2CPP_REGISTER_METHOD(0x003FC7F0, XmlSchemaValidity__Enum, get_Validity, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Validity, (app::XmlSchemaInfo * this_ptr, app::XmlSchemaValidity__Enum value));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDefault, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsDefault, (app::XmlSchemaInfo * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsNil, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_IsNil, (app::XmlSchemaInfo * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlSchemaSimpleType *, get_MemberType, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_MemberType, (app::XmlSchemaInfo * this_ptr, app::XmlSchemaSimpleType * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaType *, get_SchemaType, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB6270, void, set_SchemaType, (app::XmlSchemaInfo * this_ptr, app::XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlSchemaElement *, get_SchemaElement, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB6290, void, set_SchemaElement, (app::XmlSchemaInfo * this_ptr, app::XmlSchemaElement * value));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlSchemaAttribute *, get_SchemaAttribute, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB62B0, void, set_SchemaAttribute, (app::XmlSchemaInfo * this_ptr, app::XmlSchemaAttribute * value));
IL2CPP_REGISTER_METHOD(0x003FC830, XmlSchemaContentType__Enum, get_ContentType, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB62D0, XmlSchemaType *, get_XmlType, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB62E0, bool, get_HasDefaultValue, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB6320, bool, get_IsUnionType, (app::XmlSchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CB6210, void, Clear, (app::XmlSchemaInfo * this_ptr));
}
