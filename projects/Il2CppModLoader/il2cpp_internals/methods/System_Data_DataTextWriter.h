using namespace app;

namespace app::methods::System::Data::DataTextWriter {
IL2CPP_REGISTER_METHOD(0x01F3EB60, XmlWriter *, CreateWriter, (XmlWriter * xw));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (DataTextWriter * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x01F3ECA0, Stream *, get_BaseStream, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x0182D9B0, void, WriteStartDocument, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3ED80, void, WriteStartDocument, (DataTextWriter * __this, bool standalone));
IL2CPP_REGISTER_METHOD(0x01F3EDB0, void, WriteEndDocument, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3EDE0, void, WriteDocType, (DataTextWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x01F3EE10, void, WriteStartElement, (DataTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01F3EE40, void, WriteEndElement, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3EE70, void, WriteFullEndElement, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3EEA0, void, WriteStartAttribute, (DataTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01F3EED0, void, WriteEndAttribute, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3EF00, void, WriteCData, (DataTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01F3EF30, void, WriteComment, (DataTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01F3EF60, void, WriteProcessingInstruction, (DataTextWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x01F3EF90, void, WriteEntityRef, (DataTextWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01F3EFC0, void, WriteCharEntity, (DataTextWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01F3EFF0, void, WriteWhitespace, (DataTextWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01F3F020, void, WriteString, (DataTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01F3F050, void, WriteSurrogateCharEntity, (DataTextWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01F3F080, void, WriteChars, (DataTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F3F0B0, void, WriteRaw, (DataTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F3F0E0, void, WriteRaw, (DataTextWriter * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01F3F110, void, WriteBase64, (DataTextWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F3F140, void, WriteBinHex, (DataTextWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F3F170, WriteState__Enum, get_WriteState, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3F1A0, void, Close, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3F1D0, void, Flush, (DataTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01F3F200, String *, LookupPrefix, (DataTextWriter * __this, String * ns));
}
