#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::AutoValidator {
IL2CPP_REGISTER_METHOD(0x019A2480, void, __ctor, (AutoValidator * __this, XmlValidatingReaderImpl * reader, XmlSchemaCollection * schemaCollection, IValidationEventHandling * eventHandling));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_PreserveWhitespace, (AutoValidator * __this));
IL2CPP_REGISTER_METHOD(0x019A25F0, void, Validate, (AutoValidator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CompleteValidation, (AutoValidator * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, FindId, (AutoValidator * __this, String * name));
IL2CPP_REGISTER_METHOD(0x019A29F0, ValidationType__Enum, DetectValidationType, (AutoValidator * __this));
}
