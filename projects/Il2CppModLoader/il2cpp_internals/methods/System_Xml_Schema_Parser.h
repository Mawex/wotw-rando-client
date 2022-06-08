#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Parser {
IL2CPP_REGISTER_METHOD(0x016D2ED0, void, __ctor, (Parser_1 * __this, SchemaType__Enum schemaType, XmlNameTable * nameTable, SchemaNames * schemaNames, ValidationEventHandler * eventHandler));
IL2CPP_REGISTER_METHOD(0x016D3070, SchemaType__Enum, Parse, (Parser_1 * __this, XmlReader * reader, String * targetNamespace));
IL2CPP_REGISTER_METHOD(0x016D30D0, void, StartParsing, (Parser_1 * __this, XmlReader * reader, String * targetNamespace));
IL2CPP_REGISTER_METHODINFO(0x047817E8, Parser_1_StartParsing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D39C0, bool, CheckSchemaRoot, (Parser_1 * __this, SchemaType__Enum rootType, String * * code));
IL2CPP_REGISTER_METHOD(0x002FC6D0, SchemaType__Enum, FinishParsing, (Parser_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlSchema *, get_XmlSchema, (Parser_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_XmlResolver, (Parser_1 * __this, XmlResolver * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, SchemaInfo *, get_XdrSchema, (Parser_1 * __this));
IL2CPP_REGISTER_METHOD(0x016D3AC0, bool, ParseReaderNode, (Parser_1 * __this));
IL2CPP_REGISTER_METHOD(0x016D4520, void, ProcessAppInfoDocMarkup, (Parser_1 * __this, bool root));
IL2CPP_REGISTER_METHOD(0x016D48B0, XmlElement *, LoadElementNode, (Parser_1 * __this, bool root));
IL2CPP_REGISTER_METHOD(0x016D4E80, XmlAttribute *, CreateXmlNsAttribute, (Parser_1 * __this, String * prefix, String * value));
IL2CPP_REGISTER_METHOD(0x016D5010, XmlAttribute *, LoadAttributeNode, (Parser_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x047034C0, Parser_1_LoadAttributeNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D5220, XmlEntityReference *, LoadEntityReferenceInAttribute, (Parser_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E470, Parser_1_LoadEntityReferenceInAttribute__MethodInfo);
}
