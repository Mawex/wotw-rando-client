using namespace app;

namespace app::methods::System::Net::HttpConnection {
IL2CPP_REGISTER_METHOD(0x01D3DAA0, void, __ctor, (HttpConnection * __this, Socket * sock, EndPointListener * epl, bool secure, X509Certificate_1 * cert));
IL2CPP_REGISTER_METHOD(0x002FBCA0, SslStream *, get_SslStream, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, Int32__Array *, get_ClientCertificateErrors, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x002FBC80, X509Certificate2 *, get_ClientCertificate, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3E060, void, Init, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x0150AEB0, bool, get_IsClosed, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_Reuses, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3E2A0, IPEndPoint *, get_LocalEndPoint, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3E3A0, IPEndPoint *, get_RemoteEndPoint, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_IsSecure, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, ListenerPrefix *, get_Prefix, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Prefix, (HttpConnection * __this, ListenerPrefix * value));
IL2CPP_REGISTER_METHOD(0x01D3E5A0, void, OnTimeout, (HttpConnection * __this, Object * unused));
IL2CPP_REGISTER_METHODINFO(0x04711FF8, HttpConnection_OnTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D3E600, void, BeginReadRequest, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3E7B0, RequestStream *, GetRequestStream, (HttpConnection * __this, bool chunked, int64_t contentlength));
IL2CPP_REGISTER_METHOD(0x01D3EBC0, ResponseStream *, GetResponseStream, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3EE70, void, OnRead, (IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x0477C830, HttpConnection_OnRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D3EF40, void, OnReadInternal, (HttpConnection * __this, IAsyncResult * ares));
IL2CPP_REGISTER_METHOD(0x01D3F420, void, RemoveConnection, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3F480, bool, ProcessInput, (HttpConnection * __this, MemoryStream * ms));
IL2CPP_REGISTER_METHOD(0x01D3F7D0, String *, ReadLine, (HttpConnection * __this, Byte__Array * buffer, int32_t offset, int32_t len, int32_t * used));
IL2CPP_REGISTER_METHOD(0x01D3FA30, void, SendError, (HttpConnection * __this, String * msg, int32_t status));
IL2CPP_REGISTER_METHOD(0x01D3FD20, void, SendError, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3FD50, void, Unbind, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3FDA0, void, Close, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3FDB0, void, CloseSocket, (HttpConnection * __this));
IL2CPP_REGISTER_METHOD(0x01D3FF00, void, Close, (HttpConnection * __this, bool force_close));
IL2CPP_REGISTER_METHOD(0x01D40360, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01D404C0, bool, __ctor_b__24_0, (HttpConnection * __this, Object * t, X509Certificate_1 * c, X509Chain * ch, SslPolicyErrors__Enum e));
IL2CPP_REGISTER_METHODINFO(0x0475E478, HttpConnection___ctor_b__24_0__MethodInfo);
}
