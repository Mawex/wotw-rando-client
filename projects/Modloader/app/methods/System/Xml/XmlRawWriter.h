#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlRawWriter {
    IL2CPP_REGISTER_METHOD(0x01700F60, void, WriteStartDocument_1, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794FC0, XmlRawWriter_WriteStartDocument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01700FD0, void, WriteStartDocument_2, (app::XmlRawWriter * this_ptr, bool standalone))
    IL2CPP_REGISTER_METHODINFO(0x04766730, XmlRawWriter_WriteStartDocument_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01701040, void, WriteEndDocument, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783EF8, XmlRawWriter_WriteEndDocument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteDocType, (app::XmlRawWriter * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x017010B0, void, WriteEndElement, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708B80, XmlRawWriter_WriteEndElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01701120, void, WriteFullEndElement_1, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730CA8, XmlRawWriter_WriteFullEndElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01701190, void, WriteBase64, (app::XmlRawWriter * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01701330, app::String*, LookupPrefix, (app::XmlRawWriter * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHODINFO(0x0477A1D8, XmlRawWriter_LookupPrefix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017013A0, app::WriteState__Enum, get_WriteState, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747E70, XmlRawWriter_get_WriteState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01701410, void, WriteCData, (app::XmlRawWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01701430, void, WriteCharEntity, (app::XmlRawWriter * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x01701510, void, WriteSurrogateCharEntity, (app::XmlRawWriter * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x01701410, void, WriteWhitespace, (app::XmlRawWriter * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x01701610, void, WriteChars, (app::XmlRawWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01701610, void, WriteRaw_1, (app::XmlRawWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01701410, void, WriteRaw_2, (app::XmlRawWriter * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01701410, void, WriteValue, (app::XmlRawWriter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01701650, void, WriteAttributes, (app::XmlRawWriter * this_ptr, app::XmlReader* reader, bool defattr))
    IL2CPP_REGISTER_METHODINFO(0x0476C7C8, XmlRawWriter_WriteAttributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017016C0, void, WriteNode, (app::XmlRawWriter * this_ptr, app::XmlReader* reader, bool defattr))
    IL2CPP_REGISTER_METHODINFO(0x0476DB20, XmlRawWriter_WriteNode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_NamespaceResolver, (app::XmlRawWriter * this_ptr, app::IXmlNamespaceResolver* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_1, (app::XmlRawWriter * this_ptr, app::XmlStandalone__Enum standalone))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_2, (app::XmlRawWriter * this_ptr, app::String* xmldecl))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRootElement, (app::XmlRawWriter * this_ptr, app::ConformanceLevel__Enum conformance_level))
    IL2CPP_REGISTER_METHOD(0x01701730, void, WriteFullEndElement_2, (app::XmlRawWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsNamespaceDeclarationInChunks, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01701750, void, WriteStartNamespaceDeclaration, (app::XmlRawWriter * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHODINFO(0x0476B7F8, XmlRawWriter_WriteStartNamespaceDeclaration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017017A0, void, WriteEndNamespaceDeclaration, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755800, XmlRawWriter_WriteEndNamespaceDeclaration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017017F0, void, WriteEndBase64, (app::XmlRawWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01701810, void, Close, (app::XmlRawWriter * this_ptr, app::WriteState__Enum current_state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlRawWriter * this_ptr))
} // namespace app::classes::System::Xml::XmlRawWriter
