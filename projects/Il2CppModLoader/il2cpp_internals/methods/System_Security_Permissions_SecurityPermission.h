using namespace app;

namespace app::methods::System::Security::Permissions::SecurityPermission {
IL2CPP_REGISTER_METHOD(0x01E1B0F0, void, __ctor, (SecurityPermission * __this, PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01E1B120, void, __ctor, (SecurityPermission * __this, SecurityPermissionFlag__Enum flag));
IL2CPP_REGISTER_METHOD(0x01E1B120, void, set_Flags, (SecurityPermission * __this, SecurityPermissionFlag__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04798DF0, SecurityPermission_set_Flags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1B220, bool, IsUnrestricted, (SecurityPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1B230, IPermission *, Copy, (SecurityPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1B380, IPermission *, Intersect, (SecurityPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1B650, IPermission *, Union, (SecurityPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1B8E0, bool, IsSubsetOf, (SecurityPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1B940, void, FromXml, (SecurityPermission * __this, SecurityElement * esd));
IL2CPP_REGISTER_METHOD(0x01E1BAD0, SecurityElement *, ToXml, (SecurityPermission * __this));
IL2CPP_REGISTER_METHOD(0x007A3190, bool, IsEmpty, (SecurityPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1BBF0, SecurityPermission *, Cast, (SecurityPermission * __this, IPermission * target));
}
