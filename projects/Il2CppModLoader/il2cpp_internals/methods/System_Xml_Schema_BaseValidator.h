using namespace app;

namespace app::methods::System::Xml::Schema::BaseValidator {
IL2CPP_REGISTER_METHOD(0x019A5BB0, void, __ctor, (BaseValidator * __this, BaseValidator * other));
IL2CPP_REGISTER_METHOD(0x019A5C10, void, __ctor, (BaseValidator * __this, XmlValidatingReaderImpl * reader, XmlSchemaCollection * schemaCollection, IValidationEventHandling * eventHandling));
IL2CPP_REGISTER_METHOD(0x002FBB40, XmlValidatingReaderImpl *, get_Reader, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSchemaCollection *, get_SchemaCollection, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlNameTable *, get_NameTable, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x019A5DA0, SchemaNames *, get_SchemaNames, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, PositionInfo *, get_PositionInfo, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlResolver *, get_XmlResolver, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_XmlResolver, (BaseValidator * __this, XmlResolver * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Uri *, get_BaseUri, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_BaseUri, (BaseValidator * __this, Uri * value));
IL2CPP_REGISTER_METHOD(0x019A5F30, ValidationEventHandler *, get_EventHandler, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, SchemaInfo *, get_SchemaInfo, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x019A5FF0, void, set_DtdInfo, (BaseValidator * __this, IDtdInfo * value));
IL2CPP_REGISTER_METHODINFO(0x0472D1A0, BaseValidator_set_DtdInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_PreserveWhitespace, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Validate, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CompleteValidation, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, FindId, (BaseValidator * __this, String * name));
IL2CPP_REGISTER_METHOD(0x019A6110, void, ValidateText, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x019A6440, void, ValidateWhitespace, (BaseValidator * __this));
IL2CPP_REGISTER_METHOD(0x019A65F0, void, SaveTextValue, (BaseValidator * __this, String * value));
IL2CPP_REGISTER_METHOD(0x019A6670, void, SendValidationEvent, (BaseValidator * __this, String * code));
IL2CPP_REGISTER_METHOD(0x019A6710, void, SendValidationEvent, (BaseValidator * __this, String * code, String__Array * args));
IL2CPP_REGISTER_METHOD(0x019A6910, void, SendValidationEvent, (BaseValidator * __this, String * code, String * arg));
IL2CPP_REGISTER_METHOD(0x019A6B10, void, SendValidationEvent, (BaseValidator * __this, XmlSchemaException * e));
IL2CPP_REGISTER_METHOD(0x019A6B20, void, SendValidationEvent, (BaseValidator * __this, String * code, String * msg, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x019A6D30, void, SendValidationEvent, (BaseValidator * __this, String * code, String__Array * args, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x019A6F40, void, SendValidationEvent, (BaseValidator * __this, XmlSchemaException * e, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHODINFO(0x04749C68, BaseValidator_SendValidationEvent_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A7000, void, ProcessEntity, (SchemaInfo * sinfo, String * name, Object * sender, ValidationEventHandler * eventhandler, String * baseUri, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHODINFO(0x0472A110, BaseValidator_ProcessEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A7510, void, ProcessEntity, (SchemaInfo * sinfo, String * name, IValidationEventHandling * eventHandling, String * baseUriStr, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHODINFO(0x04784468, BaseValidator_ProcessEntity_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A7890, BaseValidator *, CreateInstance, (ValidationType__Enum valType, XmlValidatingReaderImpl * reader, XmlSchemaCollection * schemaCollection, IValidationEventHandling * eventHandling, bool processIdentityConstraints));
}
