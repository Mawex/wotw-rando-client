using namespace app;

namespace app::methods::System::Net::HttpListenerContext {
IL2CPP_REGISTER_METHOD(0x01D44CE0, void, __ctor, (HttpListenerContext * __this, HttpConnection * cnc));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_ErrorStatus, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_ErrorStatus, (HttpListenerContext * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ErrorMessage, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ErrorMessage, (HttpListenerContext * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00519290, bool, get_HaveError, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, HttpConnection *, get_Connection, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, HttpListenerRequest *, get_Request, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, HttpListenerResponse *, get_Response, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, IPrincipal *, get_User, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHOD(0x01D45050, void, ParseAuthentication, (HttpListenerContext * __this, AuthenticationSchemes__Enum expectedSchemes));
IL2CPP_REGISTER_METHOD(0x01D45200, IPrincipal *, ParseBasicAuthentication, (HttpListenerContext * __this, String * authData));
IL2CPP_REGISTER_METHOD(0x01D45690, Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_ *, AcceptWebSocketAsync, (HttpListenerContext * __this, String * subProtocol));
IL2CPP_REGISTER_METHODINFO(0x0477C5C0, HttpListenerContext_AcceptWebSocketAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D456E0, Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_ *, AcceptWebSocketAsync, (HttpListenerContext * __this, String * subProtocol, TimeSpan keepAliveInterval));
IL2CPP_REGISTER_METHODINFO(0x0470C108, HttpListenerContext_AcceptWebSocketAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D45730, Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_ *, AcceptWebSocketAsync, (HttpListenerContext * __this, String * subProtocol, int32_t receiveBufferSize, TimeSpan keepAliveInterval));
IL2CPP_REGISTER_METHODINFO(0x04798408, HttpListenerContext_AcceptWebSocketAsync_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D45780, Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_ *, AcceptWebSocketAsync, (HttpListenerContext * __this, String * subProtocol, int32_t receiveBufferSize, TimeSpan keepAliveInterval, ArraySegment_1_Byte_ internalBuffer));
IL2CPP_REGISTER_METHODINFO(0x04753F88, HttpListenerContext_AcceptWebSocketAsync_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D457D0, void, __ctor, (HttpListenerContext * __this));
IL2CPP_REGISTER_METHODINFO(0x0478EFF8, HttpListenerContext__ctor_1__MethodInfo);
}
