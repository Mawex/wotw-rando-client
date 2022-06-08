using namespace app;

namespace app::methods::System::Xml::TextEncodedRawTextWriter {
IL2CPP_REGISTER_METHOD(0x019507C0, void, __ctor, (TextEncodedRawTextWriter * __this, TextWriter * writer, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x019507D0, void, __ctor, (TextEncodedRawTextWriter * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (TextEncodedRawTextWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (TextEncodedRawTextWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteDocType, (TextEncodedRawTextWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteStartElement, (TextEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEndElement, (TextEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFullEndElement, (TextEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartElementContent, (TextEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x019507E0, void, WriteStartAttribute, (TextEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x019507F0, void, WriteEndAttribute, (TextEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteNamespaceDeclaration, (TextEncodedRawTextWriter * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsNamespaceDeclarationInChunks, (TextEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01950800, void, WriteCData, (TextEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteComment, (TextEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteProcessingInstruction, (TextEncodedRawTextWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEntityRef, (TextEncodedRawTextWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteCharEntity, (TextEncodedRawTextWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteSurrogateCharEntity, (TextEncodedRawTextWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01950870, void, WriteWhitespace, (TextEncodedRawTextWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01950870, void, WriteString, (TextEncodedRawTextWriter * __this, String * textBlock));
IL2CPP_REGISTER_METHOD(0x01950880, void, WriteChars, (TextEncodedRawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01950880, void, WriteRaw, (TextEncodedRawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01950870, void, WriteRaw, (TextEncodedRawTextWriter * __this, String * data));
}
