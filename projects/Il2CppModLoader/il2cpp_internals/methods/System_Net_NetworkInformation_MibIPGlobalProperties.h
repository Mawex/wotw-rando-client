#include <interception_macros.h>

namespace app::methods::System::Net::NetworkInformation::MibIPGlobalProperties {
IL2CPP_REGISTER_METHOD(0x01E76A20, void, __ctor, (MibIPGlobalProperties * __this, String * procDir));
IL2CPP_REGISTER_METHOD(0x01E76B50, Exception *, CreateException, (MibIPGlobalProperties * __this, String * file, String * msg));
IL2CPP_REGISTER_METHOD(0x01E76D20, IPEndPoint__Array *, GetLocalAddresses, (MibIPGlobalProperties * __this, List_1_System_String__1 * list));
IL2CPP_REGISTER_METHOD(0x01E76EA0, IPEndPoint *, ToEndpoint, (MibIPGlobalProperties * __this, String * s));
IL2CPP_REGISTER_METHOD(0x01E773E0, void, GetRows, (MibIPGlobalProperties * __this, String * file, List_1_System_String__1 * list));
IL2CPP_REGISTER_METHODINFO(0x0477B748, MibIPGlobalProperties_GetRows__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E77710, IPEndPoint__Array *, GetActiveTcpListeners, (MibIPGlobalProperties * __this));
IL2CPP_REGISTER_METHOD(0x01E77890, void, __cctor, ());
}
