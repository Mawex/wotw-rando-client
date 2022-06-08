using namespace app;

namespace app::methods::System::Xml::Serialization::XmlCustomFormatter {
IL2CPP_REGISTER_METHOD(0x01C9D2B0, String *, FromEnum, (int64_t value, String__Array * values, Int64__Array * ids, String * typeName));
IL2CPP_REGISTER_METHODINFO(0x04760928, XmlCustomFormatter_FromEnum__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C9D6D0, String *, FromXmlName, (String * name));
IL2CPP_REGISTER_METHOD(0x01C9D770, String *, FromXmlNCName, (String * ncName));
IL2CPP_REGISTER_METHOD(0x01C9D810, String *, ToXmlString, (TypeData * type, Object * value));
IL2CPP_REGISTER_METHOD(0x01C9E770, Object *, FromXmlString, (TypeData * type, String * value));
IL2CPP_REGISTER_METHOD(0x01C9F450, void, __cctor, (MethodInfo * method));
}
