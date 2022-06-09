#include <interception_macros.h>

namespace app::methods::System_Net::WebConnectionGroup_ConnectionState {
IL2CPP_REGISTER_METHOD(0x002FA280, WebConnection *, get_Connection, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Connection, (app::WebConnectionGroup_ConnectionState * this_ptr, app::WebConnection * value));
IL2CPP_REGISTER_METHOD(0x002FB930, WebConnectionGroup *, get_Group, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Group, (app::WebConnectionGroup_ConnectionState * this_ptr, app::WebConnectionGroup * value));
IL2CPP_REGISTER_METHOD(0x0195B0F0, ServicePoint *, get_ServicePoint, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Busy, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, DateTime, get_IdleSince, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D6A3A0, bool, TrySetBusy, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D6A590, void, SetIdle, (app::WebConnectionGroup_ConnectionState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D6A700, void, __ctor, (app::WebConnectionGroup_ConnectionState * this_ptr, app::WebConnectionGroup * group));
}
