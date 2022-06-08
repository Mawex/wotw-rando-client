using namespace app;

namespace app::methods::System::Xml::XmlName {
IL2CPP_REGISTER_METHOD(0x01DC0490, XmlName *, Create, (String * prefix, String * localName, String * ns, int32_t hashCode, XmlDocument * ownerDoc, XmlName * next, IXmlSchemaInfo * schemaInfo));
IL2CPP_REGISTER_METHOD(0x01DC0820, void, __ctor, (XmlName * __this, String * prefix, String * localName, String * ns, int32_t hashCode, XmlDocument * ownerDoc, XmlName * next));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_LocalName, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_NamespaceURI, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Prefix, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_HashCode, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlDocument *, get_OwnerDocument, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x01DC0850, String *, get_Name, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaValidity__Enum, get_Validity, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsDefault, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsNil, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaSimpleType *, get_MemberType, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaType *, get_SchemaType, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaElement *, get_SchemaElement, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaAttribute *, get_SchemaAttribute, (XmlName * __this));
IL2CPP_REGISTER_METHOD(0x00D4A040, bool, Equals, (XmlName * __this, IXmlSchemaInfo * schemaInfo));
IL2CPP_REGISTER_METHOD(0x01DC0A80, int32_t, GetHashCode, (String * name));
}
