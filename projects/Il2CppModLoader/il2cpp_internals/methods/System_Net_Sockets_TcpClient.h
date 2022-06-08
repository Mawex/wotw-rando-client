using namespace app;

namespace app::methods::System::Net::Sockets::TcpClient {
IL2CPP_REGISTER_METHOD(0x020A2BC0, void, __ctor, (TcpClient * __this));
IL2CPP_REGISTER_METHOD(0x020A2C70, void, __ctor, (TcpClient * __this, AddressFamily__Enum family));
IL2CPP_REGISTER_METHODINFO(0x0478A140, TcpClient__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A2F10, void, __ctor, (TcpClient * __this, String * hostname, int32_t port));
IL2CPP_REGISTER_METHODINFO(0x047380E0, TcpClient__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A3130, void, __ctor, (TcpClient * __this, Socket * acceptedSocket));
IL2CPP_REGISTER_METHOD(0x002FA280, Socket *, get_Client, (TcpClient * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Client, (TcpClient * __this, Socket * value));
IL2CPP_REGISTER_METHOD(0x020A31E0, void, Connect, (TcpClient * __this, String * hostname, int32_t port));
IL2CPP_REGISTER_METHODINFO(0x04725F50, TcpClient_Connect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A3A60, void, Connect, (TcpClient * __this, IPEndPoint * remoteEP));
IL2CPP_REGISTER_METHODINFO(0x04717AF8, TcpClient_Connect_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A3BD0, IAsyncResult *, BeginConnect, (TcpClient * __this, String * host, int32_t port, AsyncCallback * requestCallback, Object * state));
IL2CPP_REGISTER_METHOD(0x020A3CC0, void, EndConnect, (TcpClient * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x020A3D80, NetworkStream *, GetStream, (TcpClient * __this));
IL2CPP_REGISTER_METHODINFO(0x04748A68, TcpClient_GetStream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A3FE0, void, Close, (TcpClient * __this));
IL2CPP_REGISTER_METHOD(0x020A4080, void, Dispose, (TcpClient * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020A4270, void, Dispose, (TcpClient * __this));
IL2CPP_REGISTER_METHOD(0x020A4290, void, Finalize, (TcpClient * __this));
IL2CPP_REGISTER_METHOD(0x020A4310, void, initialize, (TcpClient * __this));
}
