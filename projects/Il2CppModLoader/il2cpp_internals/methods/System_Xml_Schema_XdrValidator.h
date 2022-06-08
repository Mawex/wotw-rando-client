#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XdrValidator {
IL2CPP_REGISTER_METHOD(0x022325B0, void, __ctor, (XdrValidator * __this, BaseValidator * validator));
IL2CPP_REGISTER_METHOD(0x022326D0, void, __ctor, (XdrValidator * __this, XmlValidatingReaderImpl * reader, XmlSchemaCollection * schemaCollection, IValidationEventHandling * eventHandling));
IL2CPP_REGISTER_METHOD(0x022327D0, void, Init, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02232D00, void, Validate, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02232DE0, void, ValidateElement, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x022331A0, void, ValidateChildElement, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x005D1A10, bool, get_IsInlineSchemaStarted, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x022333A0, void, ProcessInlineSchema, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x022336A0, void, ProcessElement, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x022337A0, void, ValidateEndElement, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02233A30, SchemaElementDecl *, ThoroughGetElementDecl, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02233EB0, void, ValidateStartElement, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02234480, void, ValidateEndStartElement, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02234860, void, LoadSchemaFromLocation, (XdrValidator * __this, String * uri));
IL2CPP_REGISTER_METHOD(0x02235070, void, LoadSchema, (XdrValidator * __this, String * uri));
IL2CPP_REGISTER_METHODINFO(0x04772B00, XdrValidator_LoadSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C87090, bool, get_HasSchema, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C870B0, bool, get_PreserveWhitespace, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02235260, void, ProcessTokenizedType, (XdrValidator * __this, XmlTokenizedType__Enum ttype, String * name));
IL2CPP_REGISTER_METHOD(0x02235570, void, CompleteValidation, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02235780, void, CheckValue, (XdrValidator * __this, String * value, SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x02235D20, void, CheckDefaultValue, (String * value, SchemaAttDef * attdef, SchemaInfo * sinfo, XmlNamespaceManager * nsManager, XmlNameTable * NameTable, Object * sender, ValidationEventHandler * eventhandler, String * baseUri, int32_t lineNo, int32_t linePos));
IL2CPP_REGISTER_METHODINFO(0x0478A290, XdrValidator_CheckDefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02236410, void, AddID, (XdrValidator * __this, String * name, Object * node));
IL2CPP_REGISTER_METHOD(0x01C87A40, Object *, FindId, (XdrValidator * __this, String * name));
IL2CPP_REGISTER_METHOD(0x022365B0, void, Push, (XdrValidator * __this, XmlQualifiedName * elementName));
IL2CPP_REGISTER_METHOD(0x022367E0, void, Pop, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02236930, void, CheckForwardRefs, (XdrValidator * __this));
IL2CPP_REGISTER_METHOD(0x02236B40, XmlQualifiedName *, QualifiedName, (XdrValidator * __this, String * name, String * ns));
}
