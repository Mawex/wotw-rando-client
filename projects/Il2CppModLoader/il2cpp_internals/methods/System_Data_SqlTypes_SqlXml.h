#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlXml {
IL2CPP_REGISTER_METHOD(0x022BC390, void, __ctor, (app::SqlXml * this_ptr));
IL2CPP_REGISTER_METHOD(0x022BC3B0, XmlReader *, CreateReader, (app::SqlXml * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04786C08, SqlXml_CreateReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BC6C0, XmlReader *, CreateSqlXmlReader, (app::Stream * stream, bool close_input, bool throw_target_invocation_exceptions));
IL2CPP_REGISTER_METHODINFO(0x04708238, SqlXml_CreateSqlXmlReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BC890, Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_ *, CreateSqlReaderDelegate, ());
IL2CPP_REGISTER_METHOD(0x022BC9B0, MethodInfo_1 *, get_CreateSqlReaderMethodInfo, ());
IL2CPP_REGISTER_METHOD(0x022BCB80, bool, get_IsNull, (app::SqlXml * this_ptr));
IL2CPP_REGISTER_METHOD(0x022BC390, void, SetNull, (app::SqlXml * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchema *, IXmlSerializable_GetSchema, (app::SqlXml * this_ptr));
IL2CPP_REGISTER_METHOD(0x022BCB90, void, IXmlSerializable_ReadXml, (app::SqlXml * this_ptr, app::XmlReader * r));
IL2CPP_REGISTER_METHOD(0x022BCEE0, void, IXmlSerializable_WriteXml, (app::SqlXml * this_ptr, app::XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022BD090, XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
IL2CPP_REGISTER_METHOD(0x022BD1E0, void, __cctor, ());
}
