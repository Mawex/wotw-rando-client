#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaDatatype {
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaDatatypeVariety__Enum, get_Variety, (app::XmlSchemaDatatype * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlTypeCode__Enum, get_TypeCode, (app::XmlSchemaDatatype * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDerivedFrom, (app::XmlSchemaDatatype * this_ptr, app::XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01CA6130, String *, get_TypeCodeString, (app::XmlSchemaDatatype * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA62A0, String *, TypeCodeToString, (app::XmlSchemaDatatype * this_ptr, app::XmlTypeCode__Enum type_code));
IL2CPP_REGISTER_METHOD(0x01CA6670, String *, ConcatenatedToString, (app::Object * value));
IL2CPP_REGISTER_METHOD(0x01CA6B60, XmlSchemaDatatype *, FromXmlTokenizedType, (app::XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x01CA6CC0, XmlSchemaDatatype *, FromXmlTokenizedTypeXsd, (app::XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x01CA6E20, XmlSchemaDatatype *, FromXdrName, (app::String * name));
IL2CPP_REGISTER_METHOD(0x01CA6FD0, XmlSchemaDatatype *, DeriveByUnion, (app::XmlSchemaSimpleType__Array * types, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x01CA7080, String *, XdrCanonizeUri, (app::String * uri, app::XmlNameTable * name_table, app::SchemaNames * schema_names));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XmlSchemaDatatype * this_ptr));
}
