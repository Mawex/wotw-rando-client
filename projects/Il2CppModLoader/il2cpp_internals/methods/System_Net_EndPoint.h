#include <interception_macros.h>

namespace app::methods::System_Net::EndPoint {
IL2CPP_REGISTER_METHOD(0x01EB4230, AddressFamily__Enum, get_AddressFamily, (app::EndPoint * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0470EB28, EndPoint_get_AddressFamily__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB4270, SocketAddress *, Serialize, (app::EndPoint * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474EB60, EndPoint_Serialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB42B0, EndPoint *, Create, (app::EndPoint * this_ptr, app::SocketAddress * socket_address));
IL2CPP_REGISTER_METHODINFO(0x0478A620, EndPoint_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::EndPoint * this_ptr));
}
