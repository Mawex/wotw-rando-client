using namespace app;

namespace app::methods::System::Xml::TextUtf8RawTextWriter {
IL2CPP_REGISTER_METHOD(0x019508A0, void, __ctor, (TextUtf8RawTextWriter * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (TextUtf8RawTextWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (TextUtf8RawTextWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteDocType, (TextUtf8RawTextWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteStartElement, (TextUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEndElement, (TextUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFullEndElement, (TextUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartElementContent, (TextUtf8RawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x019507E0, void, WriteStartAttribute, (TextUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x019507F0, void, WriteEndAttribute, (TextUtf8RawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteNamespaceDeclaration, (TextUtf8RawTextWriter * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsNamespaceDeclarationInChunks, (TextUtf8RawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x019508B0, void, WriteCData, (TextUtf8RawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteComment, (TextUtf8RawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteProcessingInstruction, (TextUtf8RawTextWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEntityRef, (TextUtf8RawTextWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteCharEntity, (TextUtf8RawTextWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteSurrogateCharEntity, (TextUtf8RawTextWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x019508F0, void, WriteWhitespace, (TextUtf8RawTextWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x019508F0, void, WriteString, (TextUtf8RawTextWriter * __this, String * textBlock));
IL2CPP_REGISTER_METHOD(0x01950940, void, WriteChars, (TextUtf8RawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01950940, void, WriteRaw, (TextUtf8RawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x019508F0, void, WriteRaw, (TextUtf8RawTextWriter * __this, String * data));
}
