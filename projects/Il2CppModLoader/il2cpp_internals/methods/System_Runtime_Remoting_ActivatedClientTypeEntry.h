using namespace app;

namespace app::methods::System::Runtime::Remoting::ActivatedClientTypeEntry {
IL2CPP_REGISTER_METHOD(0x01A97590, void, __ctor, (ActivatedClientTypeEntry * __this, String * typeName, String * assemblyName, String * appUrl));
IL2CPP_REGISTER_METHODINFO(0x04703F98, ActivatedClientTypeEntry__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ApplicationUrl, (ActivatedClientTypeEntry * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IContextAttribute__Array *, get_ContextAttributes, (ActivatedClientTypeEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Type *, get_ObjectType, (ActivatedClientTypeEntry * __this));
IL2CPP_REGISTER_METHOD(0x01A976E0, String *, ToString, (ActivatedClientTypeEntry * __this));
}
