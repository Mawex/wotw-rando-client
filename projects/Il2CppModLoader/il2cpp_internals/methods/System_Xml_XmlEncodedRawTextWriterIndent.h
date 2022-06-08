using namespace app;

namespace app::methods::System::Xml::XmlEncodedRawTextWriterIndent {
IL2CPP_REGISTER_METHOD(0x01DB4830, void, __ctor, (XmlEncodedRawTextWriterIndent * __this, TextWriter * writer, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01DB4860, void, __ctor, (XmlEncodedRawTextWriterIndent * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01DB4890, void, WriteDocType, (XmlEncodedRawTextWriterIndent * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x01DB4900, void, WriteStartElement, (XmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB4990, void, StartElementContent, (XmlEncodedRawTextWriterIndent * __this));
IL2CPP_REGISTER_METHOD(0x00C74F00, void, OnRootElement, (XmlEncodedRawTextWriterIndent * __this, ConformanceLevel__Enum currentConformanceLevel));
IL2CPP_REGISTER_METHOD(0x01DB4A20, void, WriteEndElement, (XmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB4B00, void, WriteFullEndElement, (XmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB4BE0, void, WriteStartAttribute, (XmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB4C40, void, WriteCData, (XmlEncodedRawTextWriterIndent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB4C50, void, WriteComment, (XmlEncodedRawTextWriterIndent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB4C90, void, WriteProcessingInstruction, (XmlEncodedRawTextWriterIndent * __this, String * target, String * text));
IL2CPP_REGISTER_METHOD(0x01DB4CE0, void, WriteEntityRef, (XmlEncodedRawTextWriterIndent * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DB4DF0, void, WriteCharEntity, (XmlEncodedRawTextWriterIndent * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01DB4E00, void, WriteSurrogateCharEntity, (XmlEncodedRawTextWriterIndent * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01DB4E10, void, WriteWhitespace, (XmlEncodedRawTextWriterIndent * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01DB4E90, void, WriteString, (XmlEncodedRawTextWriterIndent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB4F10, void, WriteChars, (XmlEncodedRawTextWriterIndent * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB4FB0, void, WriteRaw, (XmlEncodedRawTextWriterIndent * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB4FD0, void, WriteRaw, (XmlEncodedRawTextWriterIndent * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01DB5040, void, WriteBase64, (XmlEncodedRawTextWriterIndent * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB5060, void, Init, (XmlEncodedRawTextWriterIndent * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01DB5240, void, WriteIndent, (XmlEncodedRawTextWriterIndent * __this));
}
