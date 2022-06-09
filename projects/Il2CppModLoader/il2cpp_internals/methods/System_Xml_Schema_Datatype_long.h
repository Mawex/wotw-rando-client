#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_long {
IL2CPP_REGISTER_METHOD(0x0235EAE0, FacetsChecker *, get_FacetsChecker, (app::Datatype_long * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasValueFacets, (app::Datatype_long * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E40D50, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_long * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235EB80, int32_t, Compare, (app::Datatype_long * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x0235EC40, Type *, get_ValueType, (app::Datatype_long * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235ECE0, Type *, get_ListValueType, (app::Datatype_long * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235ED80, Exception *, TryParseValue, (app::Datatype_long * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x0235EF30, void, __ctor, (app::Datatype_long * this_ptr));
IL2CPP_REGISTER_METHOD(0x0235EF40, void, __cctor, ());
}
