#include <interception_macros.h>

namespace app::methods::System::Xml::XmlWellFormedWriter {
    IL2CPP_REGISTER_METHOD(0x01FCB480, void, __ctor, (app::XmlWellFormedWriter * this_ptr, app::XmlWriter * writer, app::XmlWriterSettings * settings));
    IL2CPP_REGISTER_METHOD(0x01FCBAB0, app::WriteState__Enum, get_WriteState, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FCBBA0, void, WriteStartDocument_1, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FCBBB0, void, WriteStartDocument_2, (app::XmlWellFormedWriter * this_ptr, bool standalone));
    IL2CPP_REGISTER_METHOD(0x01FCBBE0, void, WriteEndDocument, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476A848, XmlWellFormedWriter_WriteEndDocument__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCBD30, void, WriteDocType, (app::XmlWellFormedWriter * this_ptr, app::String * name, app::String * pubid, app::String * sysid, app::String * subset));
    IL2CPP_REGISTER_METHODINFO(0x04751320, XmlWellFormedWriter_WriteDocType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCC110, void, WriteStartElement, (app::XmlWellFormedWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns));
    IL2CPP_REGISTER_METHODINFO(0x047744B8, XmlWellFormedWriter_WriteStartElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCC460, void, WriteEndElement, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04760F40, XmlWellFormedWriter_WriteEndElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCC680, void, WriteFullEndElement, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04725518, XmlWellFormedWriter_WriteFullEndElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCC8A0, void, WriteStartAttribute, (app::XmlWellFormedWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * namespace_name));
    IL2CPP_REGISTER_METHODINFO(0x0470F790, XmlWellFormedWriter_WriteStartAttribute__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCCFF0, void, WriteEndAttribute, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475B040, XmlWellFormedWriter_WriteEndAttribute__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCD8C0, void, WriteCData, (app::XmlWellFormedWriter * this_ptr, app::String * text));
    IL2CPP_REGISTER_METHODINFO(0x0477D0E8, XmlWellFormedWriter_WriteCData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCD9C0, void, WriteComment, (app::XmlWellFormedWriter * this_ptr, app::String * text));
    IL2CPP_REGISTER_METHODINFO(0x04739F70, XmlWellFormedWriter_WriteComment__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCDAC0, void, WriteProcessingInstruction, (app::XmlWellFormedWriter * this_ptr, app::String * name, app::String * text));
    IL2CPP_REGISTER_METHODINFO(0x0474B928, XmlWellFormedWriter_WriteProcessingInstruction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCDDC0, void, WriteEntityRef, (app::XmlWellFormedWriter * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x04779A30, XmlWellFormedWriter_WriteEntityRef__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCDF20, void, WriteCharEntity, (app::XmlWellFormedWriter * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHODINFO(0x04716098, XmlWellFormedWriter_WriteCharEntity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCE170, void, WriteSurrogateCharEntity, (app::XmlWellFormedWriter * this_ptr, uint16_t low_char, uint16_t high_char));
    IL2CPP_REGISTER_METHODINFO(0x0477A2F8, XmlWellFormedWriter_WriteSurrogateCharEntity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCE310, void, WriteWhitespace, (app::XmlWellFormedWriter * this_ptr, app::String * ws));
    IL2CPP_REGISTER_METHODINFO(0x04759BA0, XmlWellFormedWriter_WriteWhitespace__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCE550, void, WriteString, (app::XmlWellFormedWriter * this_ptr, app::String * text));
    IL2CPP_REGISTER_METHODINFO(0x0475B568, XmlWellFormedWriter_WriteString__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCE6E0, void, WriteChars, (app::XmlWellFormedWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x047491A0, XmlWellFormedWriter_WriteChars__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCE8F0, void, WriteRaw_1, (app::XmlWellFormedWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04724BA0, XmlWellFormedWriter_WriteRaw__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCEB00, void, WriteRaw_2, (app::XmlWellFormedWriter * this_ptr, app::String * data));
    IL2CPP_REGISTER_METHODINFO(0x04797AA0, XmlWellFormedWriter_WriteRaw_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCEC80, void, WriteBase64, (app::XmlWellFormedWriter * this_ptr, app::Byte__Array * buffer, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x047348E8, XmlWellFormedWriter_WriteBase64__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCEE50, void, Close, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471E020, XmlWellFormedWriter_Close__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCF100, void, Flush, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047260F8, XmlWellFormedWriter_Flush__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCF1D0, app::String *, LookupPrefix, (app::XmlWellFormedWriter * this_ptr, app::String * ns));
    IL2CPP_REGISTER_METHODINFO(0x0474A3D8, XmlWellFormedWriter_LookupPrefix__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCF400, void, WriteValue, (app::XmlWellFormedWriter * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x04716308, XmlWellFormedWriter_WriteValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCF590, void, WriteBinHex, (app::XmlWellFormedWriter * this_ptr, app::Byte__Array * buffer, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04730628, XmlWellFormedWriter_WriteBinHex__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlRawWriter *, get_RawWriter, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016E76A0, bool, get_SaveAttrValue, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FCF6D0, bool, get_InBase64, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FCF6F0, void, SetSpecialAttribute, (app::XmlWellFormedWriter * this_ptr, app::XmlWellFormedWriter_SpecialAttribute__Enum special));
    IL2CPP_REGISTER_METHOD(0x01FCF9A0, void, WriteStartDocumentImpl, (app::XmlWellFormedWriter * this_ptr, app::XmlStandalone__Enum standalone));
    IL2CPP_REGISTER_METHODINFO(0x0473B508, XmlWellFormedWriter_WriteStartDocumentImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FCFB40, void, StartFragment, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FCFB50, void, PushNamespaceImplicit, (app::XmlWellFormedWriter * this_ptr, app::String * prefix, app::String * ns));
    IL2CPP_REGISTER_METHODINFO(0x0470F358, XmlWellFormedWriter_PushNamespaceImplicit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FD00E0, bool, PushNamespaceExplicit, (app::XmlWellFormedWriter * this_ptr, app::String * prefix, app::String * ns));
    IL2CPP_REGISTER_METHODINFO(0x04751BF0, XmlWellFormedWriter_PushNamespaceExplicit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FD0770, void, AddNamespace, (app::XmlWellFormedWriter * this_ptr, app::String * prefix, app::String * ns, app::XmlWellFormedWriter_NamespaceKind__Enum kind));
    IL2CPP_REGISTER_METHOD(0x01FD09F0, void, AddToNamespaceHashtable, (app::XmlWellFormedWriter * this_ptr, int32_t namespace_index));
    IL2CPP_REGISTER_METHOD(0x01FD0BB0, int32_t, LookupNamespaceIndex, (app::XmlWellFormedWriter * this_ptr, app::String * prefix));
    IL2CPP_REGISTER_METHOD(0x01FD0D30, void, PopNamespaces, (app::XmlWellFormedWriter * this_ptr, int32_t index_from, int32_t index_to));
    IL2CPP_REGISTER_METHOD(0x01FD0E60, app::XmlException *, DupAttrException, (app::String * prefix, app::String * local_name));
    IL2CPP_REGISTER_METHOD(0x01FD1100, void, AdvanceState, (app::XmlWellFormedWriter * this_ptr, app::XmlWellFormedWriter_Token__Enum token));
    IL2CPP_REGISTER_METHODINFO(0x0475E180, XmlWellFormedWriter_AdvanceState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FD1540, void, StartElementContent, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FD1630, app::String *, GetStateName, (app::XmlWellFormedWriter_State__Enum state));
    IL2CPP_REGISTER_METHOD(0x01FD1710, app::String *, LookupNamespace, (app::XmlWellFormedWriter * this_ptr, app::String * prefix));
    IL2CPP_REGISTER_METHOD(0x01FD1880, app::String *, LookupLocalNamespace, (app::XmlWellFormedWriter * this_ptr, app::String * prefix));
    IL2CPP_REGISTER_METHOD(0x01FD19A0, app::String *, GeneratePrefix, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FD1B20, void, CheckNCName, (app::XmlWellFormedWriter * this_ptr, app::String * ncname));
    IL2CPP_REGISTER_METHODINFO(0x04789B30, XmlWellFormedWriter_CheckNCName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FD1CE0, app::Exception *, InvalidCharsException, (app::String * name, int32_t bad_char_index));
    IL2CPP_REGISTER_METHOD(0x01FD1FF0, void, ThrowInvalidStateTransition, (app::XmlWellFormedWriter * this_ptr, app::XmlWellFormedWriter_Token__Enum token, app::XmlWellFormedWriter_State__Enum current_state));
    IL2CPP_REGISTER_METHODINFO(0x0470B368, XmlWellFormedWriter_ThrowInvalidStateTransition__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FD2230, bool, get_IsClosedOrErrorState, (app::XmlWellFormedWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FD2240, void, AddAttribute, (app::XmlWellFormedWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * namespace_name));
    IL2CPP_REGISTER_METHODINFO(0x0473D9F0, XmlWellFormedWriter_AddAttribute__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FD2660, void, AddToAttrHashTable, (app::XmlWellFormedWriter * this_ptr, int32_t attribute_index));
    IL2CPP_REGISTER_METHOD(0x01FD2830, void, __cctor, ());
}
