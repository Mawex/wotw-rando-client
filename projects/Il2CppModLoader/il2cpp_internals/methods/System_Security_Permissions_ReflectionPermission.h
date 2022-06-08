#include <interception_macros.h>

namespace app::methods::System::Security::Permissions::ReflectionPermission {
IL2CPP_REGISTER_METHOD(0x01E1A610, void, __ctor, (ReflectionPermission * __this, PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01E1A640, void, __ctor, (ReflectionPermission * __this, ReflectionPermissionFlag__Enum flag));
IL2CPP_REGISTER_METHOD(0x002FC6D0, ReflectionPermissionFlag__Enum, get_Flags, (ReflectionPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1A650, void, set_Flags, (ReflectionPermission * __this, ReflectionPermissionFlag__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0474A870, ReflectionPermission_set_Flags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1A750, IPermission *, Copy, (ReflectionPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1A8A0, void, FromXml, (ReflectionPermission * __this, SecurityElement * esd));
IL2CPP_REGISTER_METHOD(0x01E1AA50, IPermission *, Intersect, (ReflectionPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1ABC0, bool, IsSubsetOf, (ReflectionPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1AC20, bool, IsUnrestricted, (ReflectionPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1AC30, SecurityElement *, ToXml, (ReflectionPermission * __this));
IL2CPP_REGISTER_METHOD(0x01E1ADF0, IPermission *, Union, (ReflectionPermission * __this, IPermission * other));
IL2CPP_REGISTER_METHOD(0x01E1B010, ReflectionPermission *, Cast, (ReflectionPermission * __this, IPermission * target));
}
