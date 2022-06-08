using namespace app;

namespace app::methods::System::Xml::Schema::AllElementsContentValidator {
IL2CPP_REGISTER_METHOD(0x019A0650, void, __ctor, (AllElementsContentValidator * __this, XmlSchemaContentType__Enum contentType, int32_t size, bool isEmptiable));
IL2CPP_REGISTER_METHOD(0x019A08C0, bool, AddElement, (AllElementsContentValidator * __this, XmlQualifiedName * name, Object * particle, bool isEmptiable));
IL2CPP_REGISTER_METHOD(0x019A0A80, bool, get_IsEmptiable, (AllElementsContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x019A0AA0, void, InitValidation, (AllElementsContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x019A0C30, Object *, ValidateElement, (AllElementsContentValidator * __this, XmlQualifiedName * name, ValidationState * context, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x019A0E30, bool, CompleteValidation, (AllElementsContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x019A0E80, ArrayList *, ExpectedElements, (AllElementsContentValidator * __this, ValidationState * context, bool isRequiredOnly));
IL2CPP_REGISTER_METHOD(0x019A12B0, ArrayList *, ExpectedParticles, (AllElementsContentValidator * __this, ValidationState * context, bool isRequiredOnly, XmlSchemaSet * schemaSet));
}
