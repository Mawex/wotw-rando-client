using namespace app;

namespace app::methods::System::Xml::Schema::FacetsChecker {
IL2CPP_REGISTER_METHOD(0x02369B00, Exception *, CheckLexicalFacets, (FacetsChecker * __this, String * * parseString, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, Decimal value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, int64_t value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, int32_t value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, int16_t value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, DateTime value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, double value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, float value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, String * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, Byte__Array * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, TimeSpan value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x00420EE0, Exception *, CheckValueFacets, (FacetsChecker * __this, XmlQualifiedName * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02369C20, void, CheckWhitespaceFacets, (FacetsChecker * __this, String * * s, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02369D30, Exception *, CheckPatternFacets, (FacetsChecker * __this, RestrictionFacets * restriction, String * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, MatchEnumeration, (FacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x02369F60, RestrictionFacets *, ConstructRestriction, (FacetsChecker * __this, DatatypeImplementation * datatype, XmlSchemaObjectCollection * facets, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHODINFO(0x04766A70, FacetsChecker_ConstructRestriction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0236A480, Decimal, Power, (int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FacetsChecker * __this));
}
