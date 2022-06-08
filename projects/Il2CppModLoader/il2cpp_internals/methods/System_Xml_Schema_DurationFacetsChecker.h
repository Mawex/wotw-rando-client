using namespace app;

namespace app::methods::System::Xml::Schema::DurationFacetsChecker {
IL2CPP_REGISTER_METHOD(0x02369080, Exception *, CheckValueFacets, (DurationFacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x023691E0, Exception *, CheckValueFacets, (DurationFacetsChecker * __this, TimeSpan value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02369910, bool, MatchEnumeration, (DurationFacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x023699D0, bool, MatchEnumeration, (DurationFacetsChecker * __this, TimeSpan value, ArrayList * enumeration));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DurationFacetsChecker * __this));
}
