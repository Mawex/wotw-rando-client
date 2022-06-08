using namespace app;

namespace app::methods::System::Net::Sockets::TcpListener {
IL2CPP_REGISTER_METHOD(0x020A4480, void, __ctor, (TcpListener * __this, IPEndPoint * localEP));
IL2CPP_REGISTER_METHODINFO(0x0474A310, TcpListener__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A4680, void, __ctor, (TcpListener * __this, IPAddress * localaddr, int32_t port));
IL2CPP_REGISTER_METHODINFO(0x0475AA98, TcpListener__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A49C0, TcpListener *, Create, (int32_t port));
IL2CPP_REGISTER_METHODINFO(0x0476C968, TcpListener_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, Socket *, get_Server, (TcpListener * __this));
IL2CPP_REGISTER_METHOD(0x020A4C10, void, Start, (TcpListener * __this));
IL2CPP_REGISTER_METHOD(0x020A4C20, void, Start, (TcpListener * __this, int32_t backlog));
IL2CPP_REGISTER_METHODINFO(0x04792058, TcpListener_Start_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A4DD0, void, Stop, (TcpListener * __this));
IL2CPP_REGISTER_METHOD(0x020A5080, bool, Pending, (TcpListener * __this));
IL2CPP_REGISTER_METHODINFO(0x04757150, TcpListener_Pending__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A5160, TcpClient *, AcceptTcpClient, (TcpListener * __this));
IL2CPP_REGISTER_METHODINFO(0x04777C88, TcpListener_AcceptTcpClient__MethodInfo);
}
