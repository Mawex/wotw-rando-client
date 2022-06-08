using namespace app;

namespace app::methods::System::Net::EndPoint {
IL2CPP_REGISTER_METHOD(0x01EB4230, AddressFamily__Enum, get_AddressFamily, (EndPoint * __this));
IL2CPP_REGISTER_METHODINFO(0x0470EB28, EndPoint_get_AddressFamily__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB4270, SocketAddress *, Serialize, (EndPoint * __this));
IL2CPP_REGISTER_METHODINFO(0x0474EB60, EndPoint_Serialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB42B0, EndPoint *, Create, (EndPoint * __this, SocketAddress * socketAddress));
IL2CPP_REGISTER_METHODINFO(0x0478A620, EndPoint_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EndPoint * __this));
}
