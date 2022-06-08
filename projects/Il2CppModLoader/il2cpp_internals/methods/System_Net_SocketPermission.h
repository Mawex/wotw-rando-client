using namespace app;

namespace app::methods::System::Net::SocketPermission {
IL2CPP_REGISTER_METHOD(0x01BDD090, void, __ctor, (SocketPermission * __this, PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01BDD2B0, void, __ctor, (SocketPermission * __this, NetworkAccess__Enum access, TransportType__Enum transport, String * hostName, int32_t portNumber));
IL2CPP_REGISTER_METHOD(0x01BDD500, IEnumerator *, get_AcceptList, (SocketPermission * __this));
IL2CPP_REGISTER_METHOD(0x01BDD530, IEnumerator *, get_ConnectList, (SocketPermission * __this));
IL2CPP_REGISTER_METHOD(0x01BDD560, void, AddPermission, (SocketPermission * __this, NetworkAccess__Enum access, TransportType__Enum transport, String * hostName, int32_t portNumber));
IL2CPP_REGISTER_METHOD(0x01BDD720, IPermission *, Copy, (SocketPermission * __this));
IL2CPP_REGISTER_METHOD(0x01BDD980, IPermission *, Intersect, (SocketPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHODINFO(0x047651D0, SocketPermission_Intersect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDDCB0, bool, IntersectEmpty, (SocketPermission * __this, SocketPermission * permission));
IL2CPP_REGISTER_METHOD(0x01BDDD20, void, Intersect, (SocketPermission * __this, ArrayList * list1, ArrayList * list2, ArrayList * result));
IL2CPP_REGISTER_METHOD(0x01BDE110, bool, IsSubsetOf, (SocketPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHODINFO(0x0473B4E8, SocketPermission_IsSubsetOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDE340, bool, IsSubsetOf, (SocketPermission * __this, ArrayList * list1, ArrayList * list2));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, IsUnrestricted, (SocketPermission * __this));
IL2CPP_REGISTER_METHOD(0x01BDE690, SecurityElement *, ToXml, (SocketPermission * __this));
IL2CPP_REGISTER_METHOD(0x01BDE950, void, ToXml, (SocketPermission * __this, SecurityElement * root, String * childName, IEnumerator * enumerator));
IL2CPP_REGISTER_METHOD(0x01BDEE20, void, FromXml, (SocketPermission * __this, SecurityElement * securityElement));
IL2CPP_REGISTER_METHODINFO(0x0475A3D8, SocketPermission_FromXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDF300, void, FromXml, (SocketPermission * __this, ArrayList * endpoints, NetworkAccess__Enum access));
IL2CPP_REGISTER_METHOD(0x01BDF640, IPermission *, Union, (SocketPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHODINFO(0x0478FC88, SocketPermission_Union__MethodInfo);
}
