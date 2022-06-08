#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::DfaContentValidator {
IL2CPP_REGISTER_METHOD(0x02364CC0, void, __ctor, (DfaContentValidator * __this, Int32__Array__Array * transitionTable, SymbolsDictionary * symbols, XmlSchemaContentType__Enum contentType, bool isOpen, bool isEmptiable));
IL2CPP_REGISTER_METHOD(0x02364D90, void, InitValidation, (DfaContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x02364E20, Object *, ValidateElement, (DfaContentValidator * __this, XmlQualifiedName * name, ValidationState * context, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x02364FF0, bool, CompleteValidation, (DfaContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x02365010, ArrayList *, ExpectedElements, (DfaContentValidator * __this, ValidationState * context, bool isRequiredOnly));
IL2CPP_REGISTER_METHOD(0x023652E0, ArrayList *, ExpectedParticles, (DfaContentValidator * __this, ValidationState * context, bool isRequiredOnly, XmlSchemaSet * schemaSet));
}
