using namespace app;

namespace app::methods::System::Security::NamedPermissionSet {
IL2CPP_REGISTER_METHOD(0x01E18EC0, void, __ctor, (NamedPermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E18F60, void, __ctor, (NamedPermissionSet * __this, String * name, PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01E19100, void, __ctor, (NamedPermissionSet * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (NamedPermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E19110, void, set_Name, (NamedPermissionSet * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047720F8, NamedPermissionSet_set_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E19210, SecurityElement *, ToXml, (NamedPermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E192F0, bool, Equals, (NamedPermissionSet * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01E193E0, int32_t, GetHashCode, (NamedPermissionSet * __this));
}
