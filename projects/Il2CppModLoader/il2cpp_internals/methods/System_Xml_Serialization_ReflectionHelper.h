using namespace app;

namespace app::methods::System::Xml::Serialization::ReflectionHelper {
IL2CPP_REGISTER_METHOD(0x01C8F6C0, void, RegisterSchemaType, (ReflectionHelper * __this, XmlTypeMapping * map, String * xmlType, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8F7C0, XmlTypeMapping *, GetRegisteredSchemaType, (ReflectionHelper * __this, String * xmlType, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8F8D0, void, RegisterClrType, (ReflectionHelper * __this, XmlTypeMapping * map, Type * type, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8FA30, XmlTypeMapping *, GetRegisteredClrType, (ReflectionHelper * __this, Type * type, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8FBB0, void, CheckSerializableType, (Type * type, bool allowPrivateConstructors));
IL2CPP_REGISTER_METHODINFO(0x0475DD00, ReflectionHelper_CheckSerializableType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C8FF50, void, __ctor, (ReflectionHelper * __this));
IL2CPP_REGISTER_METHOD(0x01C90180, void, __cctor, (MethodInfo * method));
}
