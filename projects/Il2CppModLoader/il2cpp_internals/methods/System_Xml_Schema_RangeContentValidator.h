#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::RangeContentValidator {
IL2CPP_REGISTER_METHOD(0x016E5D30, void, __ctor, (RangeContentValidator * __this, BitSet * firstpos, BitSet__Array * followpos, SymbolsDictionary * symbols, Positions * positions, int32_t endMarkerPos, XmlSchemaContentType__Enum contentType, bool isEmptiable, BitSet * positionsWithRangeTerminals, int32_t minmaxNodesCount));
IL2CPP_REGISTER_METHOD(0x016E5E30, void, InitValidation, (RangeContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x016E61F0, Object *, ValidateElement, (RangeContentValidator * __this, XmlQualifiedName * name, ValidationState * context, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x016E6DF0, bool, CompleteValidation, (RangeContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x016E6E10, ArrayList *, ExpectedElements, (RangeContentValidator * __this, ValidationState * context, bool isRequiredOnly));
IL2CPP_REGISTER_METHOD(0x016E7270, ArrayList *, ExpectedParticles, (RangeContentValidator * __this, ValidationState * context, bool isRequiredOnly, XmlSchemaSet * schemaSet));
}
