using namespace app;

namespace app::methods::System::Security::CodeAccessPermission {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CodeAccessPermission * __this));
IL2CPP_REGISTER_METHOD(0x020C7680, void, Demand, (CodeAccessPermission * __this));
IL2CPP_REGISTER_METHOD(0x020C76F0, bool, Equals, (CodeAccessPermission * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (CodeAccessPermission * __this));
IL2CPP_REGISTER_METHOD(0x020C7850, String *, ToString, (CodeAccessPermission * __this));
IL2CPP_REGISTER_METHOD(0x020C7890, IPermission *, Union, (CodeAccessPermission * __this, IPermission * other));
IL2CPP_REGISTER_METHODINFO(0x04782D50, CodeAccessPermission_Union__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C7930, SecurityElement *, Element, (CodeAccessPermission * __this, int32_t version));
IL2CPP_REGISTER_METHOD(0x020C7B80, PermissionState__Enum, CheckPermissionState, (PermissionState__Enum state, bool allowUnrestricted));
IL2CPP_REGISTER_METHODINFO(0x047738D0, CodeAccessPermission_CheckPermissionState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C7C70, int32_t, CheckSecurityElement, (SecurityElement * se, String * parameterName, int32_t minimumVersion, int32_t maximumVersion));
IL2CPP_REGISTER_METHODINFO(0x04758728, CodeAccessPermission_CheckSecurityElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C7F50, bool, IsUnrestricted, (SecurityElement * se));
IL2CPP_REGISTER_METHOD(0x020C8080, void, ThrowInvalidPermission, (IPermission * target, Type * expected));
IL2CPP_REGISTER_METHODINFO(0x0471CC60, CodeAccessPermission_ThrowInvalidPermission__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, IPermission_Demand, (CodeAccessPermission * __this));
}
