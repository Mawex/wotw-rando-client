#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::StringFacetsChecker {
IL2CPP_REGISTER_METHOD(0x01ABA6E0, Regex *, get_LanguagePattern, ());
IL2CPP_REGISTER_METHOD(0x01ABA870, Exception *, CheckValueFacets_1, (app::StringFacetsChecker * this_ptr, app::Object * value, app::XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABA900, Exception *, CheckValueFacets_2, (app::StringFacetsChecker * this_ptr, app::String * value, app::XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABA920, Exception *, CheckValueFacets_3, (app::StringFacetsChecker * this_ptr, app::String * value, app::XmlSchemaDatatype * datatype, bool verify_uri));
IL2CPP_REGISTER_METHOD(0x01ABAE70, bool, MatchEnumeration_1, (app::StringFacetsChecker * this_ptr, app::Object * value, app::ArrayList * enumeration, app::XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABAF00, bool, MatchEnumeration_2, (app::StringFacetsChecker * this_ptr, app::String * value, app::ArrayList * enumeration, app::XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x01ABB110, Exception *, CheckBuiltInFacets, (app::StringFacetsChecker * this_ptr, app::String * s, app::XmlTypeCode__Enum type_code, bool verify_uri));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::StringFacetsChecker * this_ptr));
}
