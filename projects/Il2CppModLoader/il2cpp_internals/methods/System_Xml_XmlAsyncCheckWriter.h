using namespace app;

namespace app::methods::System::Xml::XmlAsyncCheckWriter {
IL2CPP_REGISTER_METHOD(0x0195A260, void, __ctor, (XmlAsyncCheckWriter * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x0195A320, void, CheckAsync, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FFE8, XmlAsyncCheckWriter_CheckAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195A400, void, WriteStartDocument, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195A440, void, WriteStartDocument, (XmlAsyncCheckWriter * __this, bool standalone));
IL2CPP_REGISTER_METHOD(0x0195A490, void, WriteEndDocument, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195A4D0, void, WriteDocType, (XmlAsyncCheckWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x0195A540, void, WriteStartElement, (XmlAsyncCheckWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195A5B0, void, WriteEndElement, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195A5F0, void, WriteFullEndElement, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195A630, void, WriteStartAttribute, (XmlAsyncCheckWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195A6A0, void, WriteEndAttribute, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195A6E0, void, WriteCData, (XmlAsyncCheckWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0195A730, void, WriteComment, (XmlAsyncCheckWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0195A780, void, WriteProcessingInstruction, (XmlAsyncCheckWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x0195A7E0, void, WriteEntityRef, (XmlAsyncCheckWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0195A830, void, WriteCharEntity, (XmlAsyncCheckWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0195A880, void, WriteWhitespace, (XmlAsyncCheckWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x0195A8D0, void, WriteString, (XmlAsyncCheckWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0195A920, void, WriteSurrogateCharEntity, (XmlAsyncCheckWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x0195A980, void, WriteChars, (XmlAsyncCheckWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195A9F0, void, WriteRaw, (XmlAsyncCheckWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195AA60, void, WriteRaw, (XmlAsyncCheckWriter * __this, String * data));
IL2CPP_REGISTER_METHOD(0x0195AAB0, void, WriteBase64, (XmlAsyncCheckWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195AB20, void, WriteBinHex, (XmlAsyncCheckWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195AB90, WriteState__Enum, get_WriteState, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195ABD0, void, Close, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195AC10, void, Flush, (XmlAsyncCheckWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195AC50, String *, LookupPrefix, (XmlAsyncCheckWriter * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x0195ACA0, void, WriteValue, (XmlAsyncCheckWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0195ACF0, void, WriteAttributes, (XmlAsyncCheckWriter * __this, XmlReader * reader, bool defattr));
IL2CPP_REGISTER_METHOD(0x0195AD50, void, WriteNode, (XmlAsyncCheckWriter * __this, XmlReader * reader, bool defattr));
IL2CPP_REGISTER_METHOD(0x0195ADB0, void, Dispose, (XmlAsyncCheckWriter * __this, bool disposing));
}
