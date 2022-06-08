#include <interception_macros.h>

namespace app::methods::ConsoleConnection {
IL2CPP_REGISTER_METHOD(0x011E4E90, void, __ctor, (ConsoleConnection * __this, bool receiveFiles));
IL2CPP_REGISTER_METHOD(0x011E4EF0, void, Close, (ConsoleConnection * __this));
IL2CPP_REGISTER_METHOD(0x011E4F40, void, Update, (ConsoleConnection * __this));
IL2CPP_REGISTER_METHOD(0x011E4FA0, void, UpdateState, (ConsoleConnection * __this, float time));
IL2CPP_REGISTER_METHOD(0x011E53C0, void, ChangeState, (ConsoleConnection * __this, ConsoleConnection_State__Enum state));
IL2CPP_REGISTER_METHOD(0x011E5870, void, ReceiveFile, (ConsoleConnection * __this));
IL2CPP_REGISTER_METHODINFO(0x047399B8, ConsoleConnection_ReceiveFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E5B40, void, ReceiveFileSwitch, (ConsoleConnection * __this));
IL2CPP_REGISTER_METHOD(0x011E5EA0, void, Connect, (ConsoleConnection * __this));
IL2CPP_REGISTER_METHODINFO(0x04709CD8, ConsoleConnection_Connect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E61B0, bool, RequestReplay, (ConsoleConnection * __this, String * path, float duration));
IL2CPP_REGISTER_METHOD(0x011E61E0, bool, RequestReplay, (ConsoleConnection * __this, float duration));
IL2CPP_REGISTER_METHOD(0x011E6200, bool, RequestScreenshot, (ConsoleConnection * __this, String * path));
IL2CPP_REGISTER_METHOD(0x00446970, bool, IsConnected, (ConsoleConnection * __this));
}
