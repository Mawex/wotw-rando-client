using namespace app;

namespace app::methods::System::Xml::Schema::StringFacetsChecker {
IL2CPP_REGISTER_METHOD(0x01ABA6E0, Regex *, get_LanguagePattern, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01ABA870, Exception *, CheckValueFacets, (StringFacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABA900, Exception *, CheckValueFacets, (StringFacetsChecker * __this, String * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABA920, Exception *, CheckValueFacets, (StringFacetsChecker * __this, String * value, XmlSchemaDatatype * datatype, bool verifyUri));
IL2CPP_REGISTER_METHOD(0x01ABAE70, bool, MatchEnumeration, (StringFacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABAF00, bool, MatchEnumeration, (StringFacetsChecker * __this, String * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABB110, Exception *, CheckBuiltInFacets, (StringFacetsChecker * __this, String * s, XmlTypeCode__Enum typeCode, bool verifyUri));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StringFacetsChecker * __this));
}
