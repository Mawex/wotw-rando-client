#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_QName {
IL2CPP_REGISTER_METHOD(0x02356E60, XmlValueConverter *, CreateValueConverter, (app::Datatype_QName * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x023576E0, FacetsChecker *, get_FacetsChecker, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3E950, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x008556D0, XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02357780, Type *, get_ValueType, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02357820, Type *, get_ListValueType, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x023578C0, Exception *, TryParseValue, (app::Datatype_QName * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x02357B90, void, __ctor, (app::Datatype_QName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02357C30, void, __cctor, ());
}
