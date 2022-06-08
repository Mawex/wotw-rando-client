using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaDatatype {
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaDatatypeVariety__Enum, get_Variety, (XmlSchemaDatatype * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlTypeCode__Enum, get_TypeCode, (XmlSchemaDatatype * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDerivedFrom, (XmlSchemaDatatype * __this, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01CA6130, String *, get_TypeCodeString, (XmlSchemaDatatype * __this));
IL2CPP_REGISTER_METHOD(0x01CA62A0, String *, TypeCodeToString, (XmlSchemaDatatype * __this, XmlTypeCode__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x01CA6670, String *, ConcatenatedToString, (Object * value));
IL2CPP_REGISTER_METHOD(0x01CA6B60, XmlSchemaDatatype *, FromXmlTokenizedType, (XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x01CA6CC0, XmlSchemaDatatype *, FromXmlTokenizedTypeXsd, (XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x01CA6E20, XmlSchemaDatatype *, FromXdrName, (String * name));
IL2CPP_REGISTER_METHOD(0x01CA6FD0, XmlSchemaDatatype *, DeriveByUnion, (XmlSchemaSimpleType__Array * types, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x01CA7080, String *, XdrCanonizeUri, (String * uri, XmlNameTable * nameTable, SchemaNames * schemaNames));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlSchemaDatatype * __this));
}
