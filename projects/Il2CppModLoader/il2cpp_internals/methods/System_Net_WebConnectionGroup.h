#include <interception_macros.h>

namespace app::methods::System::Net::WebConnectionGroup {
IL2CPP_REGISTER_METHOD(0x01D68CC0, void, __ctor, (WebConnectionGroup * __this, ServicePoint * sPoint, String * name));
IL2CPP_REGISTER_METHOD(0x01D68EF0, void, add_ConnectionClosed, (WebConnectionGroup * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x01D68FE0, void, remove_ConnectionClosed, (WebConnectionGroup * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x01D690D0, void, OnConnectionClosed, (WebConnectionGroup * __this));
IL2CPP_REGISTER_METHOD(0x01D690F0, void, Close, (WebConnectionGroup * __this));
IL2CPP_REGISTER_METHOD(0x01D694E0, WebConnection *, GetConnection, (WebConnectionGroup * __this, HttpWebRequest * request, bool * created));
IL2CPP_REGISTER_METHOD(0x01D695F0, void, PrepareSharingNtlm, (WebConnection * cnc, HttpWebRequest * request));
IL2CPP_REGISTER_METHOD(0x01D69860, WebConnectionGroup_ConnectionState *, FindIdleConnection, (WebConnectionGroup * __this));
IL2CPP_REGISTER_METHOD(0x01D69A90, WebConnection *, CreateOrReuseConnection, (WebConnectionGroup * __this, HttpWebRequest * request, bool * created));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (WebConnectionGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Queue *, get_Queue, (WebConnectionGroup * __this));
IL2CPP_REGISTER_METHOD(0x01D69D60, bool, TryRecycle, (WebConnectionGroup * __this, TimeSpan maxIdleTime, DateTime * idleSince));
}
