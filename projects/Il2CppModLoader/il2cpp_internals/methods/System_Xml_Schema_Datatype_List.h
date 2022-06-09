#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_List {
IL2CPP_REGISTER_METHOD(0x023557B0, XmlValueConverter *, CreateValueConverter, (app::Datatype_List * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x02355AF0, void, __ctor, (app::Datatype_List * this_ptr, app::DatatypeImplementation * type, int32_t min_list_size));
IL2CPP_REGISTER_METHOD(0x02355BB0, int32_t, Compare, (app::Datatype_List * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x02355F40, Type *, get_ValueType, (app::Datatype_List * this_ptr));
IL2CPP_REGISTER_METHOD(0x02355F60, XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_List * this_ptr));
IL2CPP_REGISTER_METHOD(0x02355F90, Type *, get_ListValueType, (app::Datatype_List * this_ptr));
IL2CPP_REGISTER_METHOD(0x02355FC0, FacetsChecker *, get_FacetsChecker, (app::Datatype_List * this_ptr));
IL2CPP_REGISTER_METHOD(0x02356060, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_List * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_List * this_ptr));
IL2CPP_REGISTER_METHOD(0x02356090, Exception *, TryParseValue_1, (app::Datatype_List * this_ptr, app::Object * value, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * namespace_resolver, app::Object * * typed_value));
IL2CPP_REGISTER_METHODINFO(0x047221A8, Datatype_List_TryParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02356610, Exception *, TryParseValue_2, (app::Datatype_List * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
}
