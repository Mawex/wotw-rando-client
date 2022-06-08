using namespace app;

namespace app::methods::System::Xml::XmlValidatingReaderImpl {
IL2CPP_REGISTER_METHOD(0x01FC9360, void, __ctor, (XmlValidatingReaderImpl * __this, XmlReader * reader, ValidationEventHandler * settingsEventHandler, bool processIdentityConstraints));
IL2CPP_REGISTER_METHODINFO(0x04748F68, XmlValidatingReaderImpl__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FC9920, XmlReaderSettings *, get_Settings, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x016D9400, XmlNodeType__Enum, get_NodeType, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717030, String *, get_Name, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717060, String *, get_LocalName, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717090, String *, get_NamespaceURI, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x00442880, String *, get_Prefix, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x017170C0, String *, get_Value, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717120, String *, get_BaseURI, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x017171B0, uint16_t, get_QuoteChar, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x017171E0, XmlSpace__Enum, get_XmlSpace, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717210, String *, get_XmlLang, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9B60, ReadState__Enum_1, get_ReadState, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x017174B0, XmlNameTable *, get_NameTable, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01717270, String *, GetAttribute, (XmlValidatingReaderImpl * __this, String * name));
IL2CPP_REGISTER_METHOD(0x017172A0, String *, GetAttribute, (XmlValidatingReaderImpl * __this, String * localName, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x017172D0, String *, GetAttribute, (XmlValidatingReaderImpl * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01FC9BA0, bool, MoveToAttribute, (XmlValidatingReaderImpl * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01FC9BF0, void, MoveToAttribute, (XmlValidatingReaderImpl * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01FC9C30, bool, MoveToFirstAttribute, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9C80, bool, MoveToNextAttribute, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9CD0, bool, MoveToElement, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9D20, bool, Read, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9EE0, void, Close, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9F20, String *, LookupNamespace, (XmlValidatingReaderImpl * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01FC9F50, bool, ReadAttributeValue, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FC9FC0, void, ResolveEntity, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA000, void, MoveOffEntityReference, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHODINFO(0x04772FB0, XmlValidatingReaderImpl_MoveOffEntityReference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FCA110, String *, ReadString, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA130, int32_t, get_LineNumber, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA210, int32_t, get_LinePosition, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA2F0, IDictionary_2_System_String_System_String_ *, IXmlNamespaceResolver_GetNamespacesInScope, (XmlValidatingReaderImpl * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x0171CA40, String *, IXmlNamespaceResolver_LookupNamespace, (XmlValidatingReaderImpl * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01FCA300, String *, IXmlNamespaceResolver_LookupPrefix, (XmlValidatingReaderImpl * __this, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x01FCA310, IDictionary_2_System_String_System_String_ *, GetNamespacesInScope, (XmlValidatingReaderImpl * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x01FCA3B0, String *, LookupPrefix, (XmlValidatingReaderImpl * __this, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x002FB970, ValidationType__Enum, get_ValidationType, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlSchemaCollection *, get_Schemas, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA460, bool, get_Namespaces, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA480, void, ParseDtdFromParserContext, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA6B0, void, ValidateDtd, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA830, void, ResolveEntityInternally, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCA8D0, void, SetupValidation, (XmlValidatingReaderImpl * __this, ValidationType__Enum valType));
IL2CPP_REGISTER_METHOD(0x01FCAB50, XmlResolver *, GetResolver, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCAD40, void, ProcessCoreReaderEvent, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, BaseValidator *, get_Validator, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Validator, (XmlValidatingReaderImpl * __this, BaseValidator * value));
IL2CPP_REGISTER_METHOD(0x01FCAEC0, XmlNamespaceManager *, get_NamespaceManager, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCAEF0, bool, get_StandAlone, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCAF10, void, set_SchemaTypeObject, (XmlValidatingReaderImpl * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01FCAF50, Object *, get_TypedValueObject, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCAF90, void, set_TypedValueObject, (XmlValidatingReaderImpl * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01FCAFD0, bool, AddDefaultAttribute, (XmlValidatingReaderImpl * __this, SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x01FCAFF0, IDtdInfo *, get_DtdInfo, (XmlValidatingReaderImpl * __this));
IL2CPP_REGISTER_METHOD(0x01FCB020, void, ValidateDefaultAttributeOnUse, (XmlValidatingReaderImpl * __this, IDtdDefaultAttributeInfo * defaultAttribute, XmlTextReaderImpl * coreReader));
IL2CPP_REGISTER_METHODINFO(0x0474F3D8, XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__MethodInfo);
}
