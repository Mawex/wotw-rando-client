using namespace app;

namespace app::methods::System::Xml::Schema::ContentValidator {
IL2CPP_REGISTER_METHOD(0x0234D420, void, __ctor, (ContentValidator * __this, XmlSchemaContentType__Enum contentType));
IL2CPP_REGISTER_METHOD(0x0234D430, void, __ctor, (ContentValidator * __this, XmlSchemaContentType__Enum contentType, bool isOpen, bool isEmptiable));
IL2CPP_REGISTER_METHOD(0x002FC6D0, XmlSchemaContentType__Enum, get_ContentType, (ContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x0234D440, bool, get_PreserveWhitespace, (ContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_IsEmptiable, (ContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x0234D460, bool, get_IsOpen, (ContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x007EA280, void, set_IsOpen, (ContentValidator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitValidation, (ContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x0234D470, Object *, ValidateElement, (ContentValidator * __this, XmlQualifiedName * name, ValidationState * context, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CompleteValidation, (ContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, ArrayList *, ExpectedElements, (ContentValidator * __this, ValidationState * context, bool isRequiredOnly));
IL2CPP_REGISTER_METHOD(0x00420EE0, ArrayList *, ExpectedParticles, (ContentValidator * __this, ValidationState * context, bool isRequiredOnly, XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x0234D4A0, void, AddParticleToExpected, (XmlSchemaParticle * p, XmlSchemaSet * schemaSet, ArrayList * particles));
IL2CPP_REGISTER_METHOD(0x0234D570, void, AddParticleToExpected, (XmlSchemaParticle * p, XmlSchemaSet * schemaSet, ArrayList * particles, bool global));
IL2CPP_REGISTER_METHOD(0x0234D870, void, __cctor, (MethodInfo * method));
}
