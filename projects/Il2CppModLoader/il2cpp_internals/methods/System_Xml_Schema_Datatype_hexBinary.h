#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_hexBinary {
IL2CPP_REGISTER_METHOD(0x02356E60, XmlValueConverter *, CreateValueConverter, (app::Datatype_hexBinary * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x0235DBD0, FacetsChecker *, get_FacetsChecker, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3AE80, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235DC70, Type *, get_ValueType, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235DD10, Type *, get_ListValueType, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235DDB0, int32_t, Compare, (app::Datatype_hexBinary * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x0235DEC0, Exception *, TryParseValue, (app::Datatype_hexBinary * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x0235E070, void, __ctor, (app::Datatype_hexBinary * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235E110, void, __cctor, ());
}
