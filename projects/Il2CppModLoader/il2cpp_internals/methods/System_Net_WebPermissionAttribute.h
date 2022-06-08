#include <interception_macros.h>

namespace app::methods::System::Net::WebPermissionAttribute {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (WebPermissionAttribute * __this, SecurityAction__Enum action));
IL2CPP_REGISTER_METHOD(0x01D7F640, String *, get_Connect, (WebPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01D7F6E0, void, set_Connect, (WebPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04709428, WebPermissionAttribute_set_Connect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7F820, String *, get_Accept, (WebPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01D7F8C0, void, set_Accept, (WebPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04714D28, WebPermissionAttribute_set_Accept__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7FA00, String *, get_ConnectPattern, (WebPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01D7FB40, void, set_ConnectPattern, (WebPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473E270, WebPermissionAttribute_set_ConnectPattern__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7FDA0, String *, get_AcceptPattern, (WebPermissionAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01D7FEE0, void, set_AcceptPattern, (WebPermissionAttribute * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473E260, WebPermissionAttribute_set_AcceptPattern__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D80140, IPermission *, CreatePermission, (WebPermissionAttribute * __this));
}
