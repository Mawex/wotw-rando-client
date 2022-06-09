#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_duration {
IL2CPP_REGISTER_METHOD(0x02356E60, XmlValueConverter *, CreateValueConverter, (app::Datatype_duration * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x0235C760, FacetsChecker *, get_FacetsChecker, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x007EC3F0, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235C800, Type *, get_ValueType, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235C8A0, Type *, get_ListValueType, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235AAB0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235C940, int32_t, Compare, (app::Datatype_duration * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x0235CA00, Exception *, TryParseValue, (app::Datatype_duration * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x0235CD80, void, __ctor, (app::Datatype_duration * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235CE20, void, __cctor, ());
}
