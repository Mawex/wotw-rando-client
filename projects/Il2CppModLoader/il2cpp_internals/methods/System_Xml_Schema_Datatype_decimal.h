#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_decimal {
IL2CPP_REGISTER_METHOD(0x0235B710, XmlValueConverter *, CreateValueConverter, (app::Datatype_decimal * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x0235B720, FacetsChecker *, get_FacetsChecker, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C8F220, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235B7C0, Type *, get_ValueType, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235B860, Type *, get_ListValueType, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235B900, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235B910, int32_t, Compare, (app::Datatype_decimal * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x0235B9D0, Exception *, TryParseValue, (app::Datatype_decimal * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x0235BBA0, void, __ctor, (app::Datatype_decimal * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235BC40, void, __cctor, ());
}
