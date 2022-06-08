#include <interception_macros.h>

namespace app::methods::System::Xml::XmlEventCache {
IL2CPP_REGISTER_METHOD(0x01DB6180, void, __ctor, (XmlEventCache * __this, String * baseUri, bool hasRootNode));
IL2CPP_REGISTER_METHOD(0x01DB6190, void, EndEvents, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01DB61E0, void, EventsToWriter, (XmlEventCache * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01DB6B00, void, WriteDocType, (XmlEventCache * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x01DB6B90, void, WriteStartElement, (XmlEventCache * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB6BC0, void, WriteStartAttribute, (XmlEventCache * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB6BF0, void, WriteEndAttribute, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01DB6C40, void, WriteCData, (XmlEventCache * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB6CA0, void, WriteComment, (XmlEventCache * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB6D00, void, WriteProcessingInstruction, (XmlEventCache * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x01DB6D70, void, WriteWhitespace, (XmlEventCache * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01DB6DD0, void, WriteString, (XmlEventCache * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01701610, void, WriteChars, (XmlEventCache * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195E400, void, WriteRaw, (XmlEventCache * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB6E50, void, WriteRaw, (XmlEventCache * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01DB6EB0, void, WriteEntityRef, (XmlEventCache * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DB6F10, void, WriteCharEntity, (XmlEventCache * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01DB6FF0, void, WriteSurrogateCharEntity, (XmlEventCache * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01DB7120, void, WriteBase64, (XmlEventCache * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB71A0, void, WriteBinHex, (XmlEventCache * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB7220, void, Close, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01DB7270, void, Flush, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01701410, void, WriteValue, (XmlEventCache * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01DB72C0, void, Dispose, (XmlEventCache * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01DB73E0, void, WriteXmlDeclaration, (XmlEventCache * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x01DB74C0, void, WriteXmlDeclaration, (XmlEventCache * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x01DB7520, void, StartElementContent, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01DB7570, void, WriteEndElement, (XmlEventCache * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB75A0, void, WriteFullEndElement, (XmlEventCache * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB75D0, void, WriteNamespaceDeclaration, (XmlEventCache * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB7640, void, WriteEndBase64, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01DB7690, void, AddEvent, (XmlEventCache * __this, XmlEventCache_XmlEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01DB76E0, void, AddEvent, (XmlEventCache * __this, XmlEventCache_XmlEventType__Enum eventType, String * s1));
IL2CPP_REGISTER_METHOD(0x01DB7750, void, AddEvent, (XmlEventCache * __this, XmlEventCache_XmlEventType__Enum eventType, String * s1, String * s2));
IL2CPP_REGISTER_METHOD(0x01DB77D0, void, AddEvent, (XmlEventCache * __this, XmlEventCache_XmlEventType__Enum eventType, String * s1, String * s2, String * s3));
IL2CPP_REGISTER_METHOD(0x01DB7850, void, AddEvent, (XmlEventCache * __this, XmlEventCache_XmlEventType__Enum eventType, String * s1, String * s2, String * s3, Object * o));
IL2CPP_REGISTER_METHOD(0x01DB78E0, void, AddEvent, (XmlEventCache * __this, XmlEventCache_XmlEventType__Enum eventType, Object * o));
IL2CPP_REGISTER_METHOD(0x01DB7950, int32_t, NewEvent, (XmlEventCache * __this));
IL2CPP_REGISTER_METHOD(0x01DB7B90, Byte__Array *, ToBytes, (Byte__Array * buffer, int32_t index, int32_t count));
}
