#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XsdValidator {
IL2CPP_REGISTER_METHOD(0x01C83140, void, __ctor, (XsdValidator * __this, BaseValidator * validator));
IL2CPP_REGISTER_METHOD(0x01C831B0, void, __ctor, (XsdValidator * __this, XmlValidatingReaderImpl * reader, XmlSchemaCollection * schemaCollection, IValidationEventHandling * eventHandling));
IL2CPP_REGISTER_METHOD(0x01C831E0, void, Init, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C83880, void, Validate, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C83960, void, CompleteValidation, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x005D1A10, bool, get_IsInlineSchemaStarted, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C83970, void, ProcessInlineSchema, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C83CE0, void, ValidateElement, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C83F80, Object *, ValidateChildElement, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C84240, void, ProcessElement, (XsdValidator * __this, Object * particle));
IL2CPP_REGISTER_METHOD(0x01C84680, void, ProcessXsiAttributes, (XsdValidator * __this, XmlQualifiedName * * xsiType, String * * xsiNil));
IL2CPP_REGISTER_METHOD(0x01C84E10, void, ValidateEndElement, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C85100, SchemaElementDecl *, FastGetElementDecl, (XsdValidator * __this, Object * particle));
IL2CPP_REGISTER_METHOD(0x01C85220, SchemaElementDecl *, ThoroughGetElementDecl, (XsdValidator * __this, SchemaElementDecl * elementDecl, XmlQualifiedName * xsiType, String * xsiNil));
IL2CPP_REGISTER_METHOD(0x01C857C0, void, ValidateStartElement, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C86200, void, ValidateEndStartElement, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C86690, void, LoadSchemaFromLocation, (XsdValidator * __this, String * uri, String * url));
IL2CPP_REGISTER_METHOD(0x01C86E60, void, LoadSchema, (XsdValidator * __this, String * uri, String * url));
IL2CPP_REGISTER_METHODINFO(0x047925A8, XsdValidator_LoadSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C87090, bool, get_HasSchema, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C870B0, bool, get_PreserveWhitespace, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C87110, void, ProcessTokenizedType, (XsdValidator * __this, XmlTokenizedType__Enum ttype, String * name));
IL2CPP_REGISTER_METHOD(0x01C87420, void, CheckValue, (XsdValidator * __this, String * value, SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x01C878A0, void, AddID, (XsdValidator * __this, String * name, Object * node));
IL2CPP_REGISTER_METHOD(0x01C87A40, Object *, FindId, (XsdValidator * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01C87A60, bool, IsXSDRoot, (XsdValidator * __this, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01C87A80, void, Push, (XsdValidator * __this, XmlQualifiedName * elementName));
IL2CPP_REGISTER_METHOD(0x01C87D00, void, Pop, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C87E80, void, CheckForwardRefs, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C88090, void, ValidateStartElementIdentityConstraints, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C880F0, bool, get_HasIdentityConstraints, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C88100, void, AddIdentityConstraints, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C889A0, void, ElementIdentityConstraints, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C88E50, void, AttributeIdentityConstraints, (XsdValidator * __this, String * name, String * ns, Object * obj, String * sobj, SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x01C89290, Object *, UnWrapUnion, (XsdValidator * __this, Object * typedValue));
IL2CPP_REGISTER_METHOD(0x01C89360, void, EndElementIdentityConstraints, (XsdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C8A720, void, __cctor, ());
}
