#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlCustomFormatter {
IL2CPP_REGISTER_METHOD(0x01C9D2B0, String *, FromEnum, (int64_t value, app::String__Array * values, app::Int64__Array * ids, app::String * type_name));
IL2CPP_REGISTER_METHODINFO(0x04760928, XmlCustomFormatter_FromEnum__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C9D6D0, String *, FromXmlName, (app::String * name));
IL2CPP_REGISTER_METHOD(0x01C9D770, String *, FromXmlNCName, (app::String * nc_name));
IL2CPP_REGISTER_METHOD(0x01C9D810, String *, ToXmlString, (app::TypeData * type, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01C9E770, Object *, FromXmlString, (app::TypeData * type, app::String * value));
IL2CPP_REGISTER_METHOD(0x01C9F450, void, __cctor, ());
}
