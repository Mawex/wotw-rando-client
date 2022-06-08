#include <interception_macros.h>

namespace app::methods::System::Net::WebConnectionGroup_ConnectionState {
IL2CPP_REGISTER_METHOD(0x002FA280, WebConnection *, get_Connection, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Connection, (WebConnectionGroup_ConnectionState * __this, WebConnection * value));
IL2CPP_REGISTER_METHOD(0x002FB930, WebConnectionGroup *, get_Group, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Group, (WebConnectionGroup_ConnectionState * __this, WebConnectionGroup * value));
IL2CPP_REGISTER_METHOD(0x0195B0F0, ServicePoint *, get_ServicePoint, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Busy, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, DateTime, get_IdleSince, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x01D6A3A0, bool, TrySetBusy, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x01D6A590, void, SetIdle, (WebConnectionGroup_ConnectionState * __this));
IL2CPP_REGISTER_METHOD(0x01D6A700, void, __ctor, (WebConnectionGroup_ConnectionState * __this, WebConnectionGroup * group));
}
