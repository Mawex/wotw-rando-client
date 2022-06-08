using namespace app;

namespace app::methods::System::Xml::QueryOutputWriter {
IL2CPP_REGISTER_METHOD(0x0199E650, void, __ctor, (QueryOutputWriter * __this, XmlRawWriter * writer, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x0199EB10, void, set_NamespaceResolver, (QueryOutputWriter * __this, IXmlNamespaceResolver * value));
IL2CPP_REGISTER_METHOD(0x0199EB40, void, WriteXmlDeclaration, (QueryOutputWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x0199EB70, void, WriteXmlDeclaration, (QueryOutputWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x0199EBA0, void, WriteDocType, (QueryOutputWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x0199EBE0, void, WriteStartElement, (QueryOutputWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHODINFO(0x04723AE0, QueryOutputWriter_WriteStartElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199EE10, void, WriteEndElement, (QueryOutputWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199EE80, void, WriteFullEndElement, (QueryOutputWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E8E0, void, StartElementContent, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199EEF0, void, WriteStartAttribute, (QueryOutputWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199EF30, void, WriteEndAttribute, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199EF60, void, WriteNamespaceDeclaration, (QueryOutputWriter * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E9E0, bool, get_SupportsNamespaceDeclarationInChunks, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199EF90, void, WriteStartNamespaceDeclaration, (QueryOutputWriter * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x0195EA70, void, WriteEndNamespaceDeclaration, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199EFC0, void, WriteCData, (QueryOutputWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0199EFF0, void, WriteComment, (QueryOutputWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0199F020, void, WriteProcessingInstruction, (QueryOutputWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x0199F050, void, WriteWhitespace, (QueryOutputWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x0199F0D0, void, WriteString, (QueryOutputWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0199F150, void, WriteChars, (QueryOutputWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0199F1F0, void, WriteEntityRef, (QueryOutputWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0199F220, void, WriteCharEntity, (QueryOutputWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0199F250, void, WriteSurrogateCharEntity, (QueryOutputWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x0199F280, void, WriteRaw, (QueryOutputWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0199F320, void, WriteRaw, (QueryOutputWriter * __this, String * data));
IL2CPP_REGISTER_METHOD(0x0199F3A0, void, Close, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x047662C0, QueryOutputWriter_Close__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199F4A0, void, Flush, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199F4D0, bool, StartCDataSection, (QueryOutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x0089F980, void, EndCDataSection, (QueryOutputWriter * __this));
}
