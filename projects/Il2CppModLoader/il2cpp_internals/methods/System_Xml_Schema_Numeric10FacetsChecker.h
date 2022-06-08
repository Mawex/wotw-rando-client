#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Numeric10FacetsChecker {
IL2CPP_REGISTER_METHOD(0x016D0D80, void, __ctor, (Numeric10FacetsChecker * __this, Decimal minVal, Decimal maxVal));
IL2CPP_REGISTER_METHOD(0x016D0D90, Exception *, CheckValueFacets, (Numeric10FacetsChecker * __this, Object * value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D0E30, Exception *, CheckValueFacets, (Numeric10FacetsChecker * __this, Decimal value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D19A0, Exception *, CheckValueFacets, (Numeric10FacetsChecker * __this, int64_t value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D1AA0, Exception *, CheckValueFacets, (Numeric10FacetsChecker * __this, int32_t value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D1BA0, Exception *, CheckValueFacets, (Numeric10FacetsChecker * __this, int16_t value, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D1CA0, bool, MatchEnumeration, (Numeric10FacetsChecker * __this, Object * value, ArrayList * enumeration, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x016D1D60, bool, MatchEnumeration, (Numeric10FacetsChecker * __this, Decimal value, ArrayList * enumeration, XmlValueConverter * valueConverter));
IL2CPP_REGISTER_METHOD(0x016D1ED0, Exception *, CheckTotalAndFractionDigits, (Numeric10FacetsChecker * __this, Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction));
IL2CPP_REGISTER_METHOD(0x016D2530, void, __cctor, ());
}
