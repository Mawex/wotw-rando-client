using namespace app;

namespace app::methods::System::Xml::Schema::DateTimeFacetsChecker {
IL2CPP_REGISTER_METHOD(0x02364270, Exception *, CheckValueFacets, (DateTimeFacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02364300, Exception *, CheckValueFacets, (DateTimeFacetsChecker * __this, DateTime value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02364AC0, bool, MatchEnumeration, (DateTimeFacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02364B50, bool, MatchEnumeration, (DateTimeFacetsChecker * __this, DateTime value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DateTimeFacetsChecker * __this));
}
