#include <interception_macros.h>

namespace app::methods::System::Data::DataTextReader {
IL2CPP_REGISTER_METHOD(0x01F3E890, XmlReader *, CreateReader, (XmlReader * xr));
IL2CPP_REGISTER_METHOD(0x01F3EA50, void, __ctor, (DataTextReader * __this, XmlReader * input));
IL2CPP_REGISTER_METHOD(0x01A488A0, XmlReaderSettings *, get_Settings, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x016D9400, XmlNodeType__Enum, get_NodeType, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717030, String *, get_Name, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717060, String *, get_LocalName, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717090, String *, get_NamespaceURI, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x00442880, String *, get_Prefix, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017170C0, String *, get_Value, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717120, String *, get_BaseURI, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017171B0, uint16_t, get_QuoteChar, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017171E0, XmlSpace__Enum, get_XmlSpace, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717210, String *, get_XmlLang, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717270, String *, GetAttribute, (DataTextReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x017172A0, String *, GetAttribute, (DataTextReader * __this, String * localName, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x017172D0, String *, GetAttribute, (DataTextReader * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01717300, bool, MoveToAttribute, (DataTextReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01717330, void, MoveToAttribute, (DataTextReader * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01717360, bool, MoveToFirstAttribute, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717390, bool, MoveToNextAttribute, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017173C0, bool, MoveToElement, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017173F0, bool, ReadAttributeValue, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717420, bool, Read, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x016FB480, void, Close, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x016FB7D0, ReadState__Enum_1, get_ReadState, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717480, void, Skip, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x017174B0, XmlNameTable *, get_NameTable, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717620, String *, LookupNamespace, (DataTextReader * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01F3EB00, bool, get_CanResolveEntity, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01717520, void, ResolveEntity, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01F3EB30, bool, get_CanReadValueChunk, (DataTextReader * __this));
IL2CPP_REGISTER_METHOD(0x016FBBA0, String *, ReadString, (DataTextReader * __this));
}
