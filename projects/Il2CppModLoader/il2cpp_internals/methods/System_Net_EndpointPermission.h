using namespace app;

namespace app::methods::System::Net::EndpointPermission {
IL2CPP_REGISTER_METHOD(0x01D25D60, void, __ctor, (EndpointPermission * __this, String * hostname, int32_t port, TransportType__Enum transport));
IL2CPP_REGISTER_METHODINFO(0x047498B0, EndpointPermission__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Hostname, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Port, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, TransportType__Enum, get_Transport, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D25E50, bool, Equals, (EndpointPermission * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01D25F50, int32_t, GetHashCode, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D25F90, String *, ToString, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D26210, bool, IsSubsetOf, (EndpointPermission * __this, EndpointPermission * perm));
IL2CPP_REGISTER_METHOD(0x01D263A0, bool, IsSubsetOf, (EndpointPermission * __this, String * addr1, String * addr2));
IL2CPP_REGISTER_METHOD(0x01D26570, EndpointPermission *, Intersect, (EndpointPermission * __this, EndpointPermission * perm));
IL2CPP_REGISTER_METHOD(0x01D26750, String *, IntersectHostname, (EndpointPermission * __this, EndpointPermission * perm));
IL2CPP_REGISTER_METHOD(0x01D26A00, String *, Intersect, (EndpointPermission * __this, String * addr1, String * addr2));
IL2CPP_REGISTER_METHOD(0x01D26E80, int32_t, ToNumber, (EndpointPermission * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04799768, EndpointPermission_ToNumber__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D27010, void, Resolve, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x00CE0760, void, UndoResolve, (EndpointPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D27260, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01D27320, void, __ctor, (EndpointPermission * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D858, EndpointPermission__ctor_1__MethodInfo);
}
