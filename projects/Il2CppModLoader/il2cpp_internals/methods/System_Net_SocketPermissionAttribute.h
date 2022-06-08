using namespace app;

namespace app::methods::System::Net::SocketPermissionAttribute {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (SocketPermissionAttribute * __this, SecurityAction__Enum action));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Access, (SocketPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01BDF8D0, void, set_Access, (SocketPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Host, (SocketPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01BDF970, void, set_Host, (SocketPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Port, (SocketPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01BDFA10, void, set_Port, (SocketPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Transport, (SocketPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01BDFAB0, void, set_Transport, (SocketPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01BDFB50, IPermission *, CreatePermission, (SocketPermissionAttribute * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DB90, SocketPermissionAttribute_CreatePermission__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BE01F0, void, AlreadySet, (SocketPermissionAttribute * __this, String * property));
IL2CPP_REGISTER_METHODINFO(0x047316F0, SocketPermissionAttribute_AlreadySet__MethodInfo);
}
