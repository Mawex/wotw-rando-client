using namespace app;

namespace app::methods::System::Xml::XmlNameEx {
IL2CPP_REGISTER_METHOD(0x01DC0AF0, void, __ctor, (XmlNameEx * __this, String * prefix, String * localName, String * ns, int32_t hashCode, XmlDocument * ownerDoc, XmlName * next, IXmlSchemaInfo * schemaInfo));
IL2CPP_REGISTER_METHOD(0x01DC0C70, XmlSchemaValidity__Enum, get_Validity, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x01DC0CA0, bool, get_IsDefault, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x01DC0CB0, bool, get_IsNil, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, XmlSchemaSimpleType *, get_MemberType, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, XmlSchemaType *, get_SchemaType, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x01DC0CC0, XmlSchemaElement *, get_SchemaElement, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x01DC0D80, XmlSchemaAttribute *, get_SchemaAttribute, (XmlNameEx * __this));
IL2CPP_REGISTER_METHOD(0x01DC0E40, void, SetValidity, (XmlNameEx * __this, XmlSchemaValidity__Enum value));
IL2CPP_REGISTER_METHOD(0x01DC0E50, void, SetIsDefault, (XmlNameEx * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01DC0E80, void, SetIsNil, (XmlNameEx * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01DC0EB0, bool, Equals, (XmlNameEx * __this, IXmlSchemaInfo * schemaInfo));
}
