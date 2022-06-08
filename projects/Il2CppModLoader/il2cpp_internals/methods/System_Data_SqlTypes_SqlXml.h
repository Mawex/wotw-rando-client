#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlXml {
IL2CPP_REGISTER_METHOD(0x022BC390, void, __ctor, (SqlXml * __this));
IL2CPP_REGISTER_METHOD(0x022BC3B0, XmlReader *, CreateReader, (SqlXml * __this));
IL2CPP_REGISTER_METHODINFO(0x04786C08, SqlXml_CreateReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BC6C0, XmlReader *, CreateSqlXmlReader, (Stream * stream, bool closeInput, bool throwTargetInvocationExceptions));
IL2CPP_REGISTER_METHODINFO(0x04708238, SqlXml_CreateSqlXmlReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BC890, Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_ *, CreateSqlReaderDelegate, ());
IL2CPP_REGISTER_METHOD(0x022BC9B0, MethodInfo_1 *, get_CreateSqlReaderMethodInfo, ());
IL2CPP_REGISTER_METHOD(0x022BCB80, bool, get_IsNull, (SqlXml * __this));
IL2CPP_REGISTER_METHOD(0x022BC390, void, SetNull, (SqlXml * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchema *, IXmlSerializable_GetSchema, (SqlXml * __this));
IL2CPP_REGISTER_METHOD(0x022BCB90, void, IXmlSerializable_ReadXml, (SqlXml * __this, XmlReader * r));
IL2CPP_REGISTER_METHOD(0x022BCEE0, void, IXmlSerializable_WriteXml, (SqlXml * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022BD090, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022BD1E0, void, __cctor, ());
}
