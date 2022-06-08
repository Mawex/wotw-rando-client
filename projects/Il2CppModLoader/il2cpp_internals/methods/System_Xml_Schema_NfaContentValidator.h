#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::NfaContentValidator {
IL2CPP_REGISTER_METHOD(0x016D0120, void, __ctor, (NfaContentValidator * __this, BitSet * firstpos, BitSet__Array * followpos, SymbolsDictionary * symbols, Positions * positions, int32_t endMarkerPos, XmlSchemaContentType__Enum contentType, bool isOpen, bool isEmptiable));
IL2CPP_REGISTER_METHOD(0x016D0210, void, InitValidation, (NfaContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x016D0470, Object *, ValidateElement, (NfaContentValidator * __this, XmlQualifiedName * name, ValidationState * context, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x016D0750, bool, CompleteValidation, (NfaContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x016D0800, ArrayList *, ExpectedElements, (NfaContentValidator * __this, ValidationState * context, bool isRequiredOnly));
IL2CPP_REGISTER_METHOD(0x016D0AE0, ArrayList *, ExpectedParticles, (NfaContentValidator * __this, ValidationState * context, bool isRequiredOnly, XmlSchemaSet * schemaSet));
}
