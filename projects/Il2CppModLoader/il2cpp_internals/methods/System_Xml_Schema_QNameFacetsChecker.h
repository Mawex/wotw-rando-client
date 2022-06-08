using namespace app;

namespace app::methods::System::Xml::Schema::QNameFacetsChecker {
IL2CPP_REGISTER_METHOD(0x016E53A0, Exception *, CheckValueFacets, (QNameFacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016E5520, Exception *, CheckValueFacets, (QNameFacetsChecker * __this, XmlQualifiedName * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016E5A10, bool, MatchEnumeration, (QNameFacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016E5B90, bool, MatchEnumeration, (QNameFacetsChecker * __this, XmlQualifiedName * value, ArrayList * enumeration));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (QNameFacetsChecker * __this));
}
