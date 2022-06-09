#include <interception_macros.h>

namespace app::methods::System_Xml::XmlName {
IL2CPP_REGISTER_METHOD(0x01DC0490, XmlName *, Create, (app::String * prefix, app::String * local_name, app::String * ns, int32_t hash_code, app::XmlDocument * owner_doc, app::XmlName * next, app::IXmlSchemaInfo * schema_info));
IL2CPP_REGISTER_METHOD(0x01DC0820, void, __ctor, (app::XmlName * this_ptr, app::String * prefix, app::String * local_name, app::String * ns, int32_t hash_code, app::XmlDocument * owner_doc, app::XmlName * next));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_LocalName, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_NamespaceURI, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Prefix, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_HashCode, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlDocument *, get_OwnerDocument, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DC0850, String *, get_Name, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaValidity__Enum, get_Validity, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsDefault, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsNil, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaSimpleType *, get_MemberType, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaType *, get_SchemaType, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaElement *, get_SchemaElement, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaAttribute *, get_SchemaAttribute, (app::XmlName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4A040, bool, Equals, (app::XmlName * this_ptr, app::IXmlSchemaInfo * schema_info));
IL2CPP_REGISTER_METHOD(0x01DC0A80, int32_t, GetHashCode, (app::String * name));
}
