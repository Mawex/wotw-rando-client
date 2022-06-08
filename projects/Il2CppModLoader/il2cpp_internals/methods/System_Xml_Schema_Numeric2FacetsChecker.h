using namespace app;

namespace app::methods::System::Xml::Schema::Numeric2FacetsChecker {
IL2CPP_REGISTER_METHOD(0x016D2610, Exception *, CheckValueFacets, (Numeric2FacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D26A0, Exception *, CheckValueFacets, (Numeric2FacetsChecker * __this, double value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D2D40, Exception *, CheckValueFacets, (Numeric2FacetsChecker * __this, float value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D2D60, bool, MatchEnumeration, (Numeric2FacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D2E10, bool, MatchEnumeration, (Numeric2FacetsChecker * __this, double value, ArrayList * enumeration, XmlValueConverter * valueConverter));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Numeric2FacetsChecker * __this));
}
