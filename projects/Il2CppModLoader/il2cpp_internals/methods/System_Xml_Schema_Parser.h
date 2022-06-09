#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Parser {
IL2CPP_REGISTER_METHOD(0x016D2ED0, void, __ctor, (app::Parser_1 * this_ptr, app::SchemaType__Enum schema_type, app::XmlNameTable * name_table, app::SchemaNames * schema_names, app::ValidationEventHandler * event_handler));
IL2CPP_REGISTER_METHOD(0x016D3070, SchemaType__Enum, Parse, (app::Parser_1 * this_ptr, app::XmlReader * reader, app::String * target_namespace));
IL2CPP_REGISTER_METHOD(0x016D30D0, void, StartParsing, (app::Parser_1 * this_ptr, app::XmlReader * reader, app::String * target_namespace));
IL2CPP_REGISTER_METHODINFO(0x047817E8, Parser_1_StartParsing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D39C0, bool, CheckSchemaRoot, (app::Parser_1 * this_ptr, app::SchemaType__Enum root_type, app::String * * code));
IL2CPP_REGISTER_METHOD(0x002FC6D0, SchemaType__Enum, FinishParsing, (app::Parser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlSchema *, get_XmlSchema, (app::Parser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_XmlResolver, (app::Parser_1 * this_ptr, app::XmlResolver * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, SchemaInfo *, get_XdrSchema, (app::Parser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x016D3AC0, bool, ParseReaderNode, (app::Parser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x016D4520, void, ProcessAppInfoDocMarkup, (app::Parser_1 * this_ptr, bool root));
IL2CPP_REGISTER_METHOD(0x016D48B0, XmlElement *, LoadElementNode, (app::Parser_1 * this_ptr, bool root));
IL2CPP_REGISTER_METHOD(0x016D4E80, XmlAttribute *, CreateXmlNsAttribute, (app::Parser_1 * this_ptr, app::String * prefix, app::String * value));
IL2CPP_REGISTER_METHOD(0x016D5010, XmlAttribute *, LoadAttributeNode, (app::Parser_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047034C0, Parser_1_LoadAttributeNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D5220, XmlEntityReference *, LoadEntityReferenceInAttribute, (app::Parser_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0470E470, Parser_1_LoadEntityReferenceInAttribute__MethodInfo);
}
