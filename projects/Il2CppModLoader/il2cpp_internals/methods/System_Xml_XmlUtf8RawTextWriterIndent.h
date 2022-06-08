using namespace app;

namespace app::methods::System::Xml::XmlUtf8RawTextWriterIndent {
IL2CPP_REGISTER_METHOD(0x01FC8790, void, __ctor, (XmlUtf8RawTextWriterIndent * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01FC87C0, void, WriteDocType, (XmlUtf8RawTextWriterIndent * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x01FC8830, void, WriteStartElement, (XmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01FC88C0, void, StartElementContent, (XmlUtf8RawTextWriterIndent * __this));
IL2CPP_REGISTER_METHOD(0x01FC8940, void, OnRootElement, (XmlUtf8RawTextWriterIndent * __this, ConformanceLevel__Enum currentConformanceLevel));
IL2CPP_REGISTER_METHOD(0x01FC8950, void, WriteEndElement, (XmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01FC8A30, void, WriteFullEndElement, (XmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01FC8B10, void, WriteStartAttribute, (XmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01FC8B70, void, WriteCData, (XmlUtf8RawTextWriterIndent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01FC8B80, void, WriteComment, (XmlUtf8RawTextWriterIndent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01FC8BC0, void, WriteProcessingInstruction, (XmlUtf8RawTextWriterIndent * __this, String * target, String * text));
IL2CPP_REGISTER_METHOD(0x01FC8C10, void, WriteEntityRef, (XmlUtf8RawTextWriterIndent * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01FC8CE0, void, WriteCharEntity, (XmlUtf8RawTextWriterIndent * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01FC8CF0, void, WriteSurrogateCharEntity, (XmlUtf8RawTextWriterIndent * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01FC8D00, void, WriteWhitespace, (XmlUtf8RawTextWriterIndent * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01FC8D00, void, WriteString, (XmlUtf8RawTextWriterIndent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01FC8D50, void, WriteChars, (XmlUtf8RawTextWriterIndent * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01FC8DB0, void, WriteRaw, (XmlUtf8RawTextWriterIndent * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01FC8E10, void, WriteRaw, (XmlUtf8RawTextWriterIndent * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01FC8E60, void, WriteBase64, (XmlUtf8RawTextWriterIndent * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01FC8E80, void, Init, (XmlUtf8RawTextWriterIndent * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01FC9050, void, WriteIndent, (XmlUtf8RawTextWriterIndent * __this));
}
