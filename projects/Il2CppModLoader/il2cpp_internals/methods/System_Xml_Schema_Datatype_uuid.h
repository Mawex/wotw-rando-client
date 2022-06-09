#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_uuid {
IL2CPP_REGISTER_METHOD(0x023637C0, Type *, get_ValueType, (app::Datatype_uuid * this_ptr));
IL2CPP_REGISTER_METHOD(0x02363860, Type *, get_ListValueType, (app::Datatype_uuid * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_uuid * this_ptr));
IL2CPP_REGISTER_METHOD(0x02363900, int32_t, Compare, (app::Datatype_uuid * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x023639D0, Object *, ParseValue, (app::Datatype_uuid * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x04722268, Datatype_uuid_ParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02363B40, Exception *, TryParseValue, (app::Datatype_uuid * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x02363C30, void, __ctor, (app::Datatype_uuid * this_ptr));
IL2CPP_REGISTER_METHOD(0x02363CD0, void, __cctor, ());
}
