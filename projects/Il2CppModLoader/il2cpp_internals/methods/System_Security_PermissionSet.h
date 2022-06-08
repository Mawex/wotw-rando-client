using namespace app;

namespace app::methods::System::Security::PermissionSet {
IL2CPP_REGISTER_METHOD(0x01E19450, void, __ctor, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E195A0, void, __ctor, (PermissionSet * __this, PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01E195D0, void, __ctor, (PermissionSet * __this, IPermission * perm));
IL2CPP_REGISTER_METHOD(0x01E19620, void, CopyTo, (PermissionSet * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04757700, PermissionSet_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E197C0, void, Demand, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E19A10, void, CasOnlyDemand, (PermissionSet * __this, int32_t skip));
IL2CPP_REGISTER_METHOD(0x01BDD530, IEnumerator *, GetEnumerator, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E19AC0, bool, IsEmpty, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x005150C0, bool, IsUnrestricted, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E19D00, String *, ToString, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E19D40, SecurityElement *, ToXml, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E1A180, int32_t, get_Count, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E1A1B0, bool, get_IsSynchronized, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, (PermissionSet * __this, Object * sender));
IL2CPP_REGISTER_METHOD(0x01E1A1E0, bool, Equals, (PermissionSet * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01E1A410, int32_t, GetHashCode, (PermissionSet * __this));
IL2CPP_REGISTER_METHOD(0x01E1A460, void, __cctor, (MethodInfo * method));
}
