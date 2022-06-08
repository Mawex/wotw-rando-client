#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::BaseProcessor {
IL2CPP_REGISTER_METHOD(0x019A3F00, void, __ctor, (BaseProcessor * __this, XmlNameTable * nameTable, SchemaNames * schemaNames, ValidationEventHandler * eventHandler));
IL2CPP_REGISTER_METHOD(0x019A4080, void, __ctor, (BaseProcessor * __this, XmlNameTable * nameTable, SchemaNames * schemaNames, ValidationEventHandler * eventHandler, XmlSchemaCompilationSettings * compilationSettings));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlNameTable *, get_NameTable, (BaseProcessor * __this));
IL2CPP_REGISTER_METHOD(0x019A4160, SchemaNames *, get_SchemaNames, (BaseProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, ValidationEventHandler *, get_EventHandler, (BaseProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaCompilationSettings *, get_CompilationSettings, (BaseProcessor * __this));
IL2CPP_REGISTER_METHOD(0x019A42C0, bool, get_HasErrors, (BaseProcessor * __this));
IL2CPP_REGISTER_METHOD(0x019A42D0, void, AddToTable, (BaseProcessor * __this, XmlSchemaObjectTable * table, XmlQualifiedName * qname, XmlSchemaObject * item));
IL2CPP_REGISTER_METHOD(0x019A4790, bool, IsValidAttributeGroupRedefine, (BaseProcessor * __this, XmlSchemaObject * existingObject, XmlSchemaObject * item, XmlSchemaObjectTable * table));
IL2CPP_REGISTER_METHOD(0x019A4920, bool, IsValidGroupRedefine, (BaseProcessor * __this, XmlSchemaObject * existingObject, XmlSchemaObject * item, XmlSchemaObjectTable * table));
IL2CPP_REGISTER_METHOD(0x019A4A80, bool, IsValidTypeRedefine, (BaseProcessor * __this, XmlSchemaObject * existingObject, XmlSchemaObject * item, XmlSchemaObjectTable * table));
IL2CPP_REGISTER_METHOD(0x019A4BF0, void, SendValidationEvent, (BaseProcessor * __this, String * code, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x019A4D70, void, SendValidationEvent, (BaseProcessor * __this, String * code, String * msg, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x019A4EF0, void, SendValidationEvent, (BaseProcessor * __this, String * code, String * msg1, String * msg2, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x019A5130, void, SendValidationEvent, (BaseProcessor * __this, String * code, String__Array * args, Exception * innerException, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x019A5300, void, SendValidationEvent, (BaseProcessor * __this, String * code, String * msg1, String * msg2, String * sourceUri, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x019A5550, void, SendValidationEvent, (BaseProcessor * __this, String * code, XmlSchemaObject * source, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x019A56D0, void, SendValidationEvent, (BaseProcessor * __this, XmlSchemaException * e));
IL2CPP_REGISTER_METHOD(0x019A56E0, void, SendValidationEvent, (BaseProcessor * __this, String * code, String * msg, XmlSchemaObject * source, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x019A5870, void, SendValidationEvent, (BaseProcessor * __this, XmlSchemaException * e, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHODINFO(0x04769540, BaseProcessor_SendValidationEvent_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A5A20, void, SendValidationEventNoThrow, (BaseProcessor * __this, XmlSchemaException * e, XmlSeverityType__Enum severity));
}
