#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_boolean {
IL2CPP_REGISTER_METHOD(0x023594E0, XmlValueConverter *, CreateValueConverter, (app::Datatype_boolean * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x023594F0, FacetsChecker *, get_FacetsChecker, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x004AB2B0, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x02359590, Type *, get_ValueType, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x02359630, Type *, get_ListValueType, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C754B0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x023596D0, int32_t, Compare, (app::Datatype_boolean * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x02359790, Exception *, TryParseValue, (app::Datatype_boolean * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x023598E0, void, __ctor, (app::Datatype_boolean * this_ptr));
IL2CPP_REGISTER_METHOD(0x02359980, void, __cctor, ());
}
