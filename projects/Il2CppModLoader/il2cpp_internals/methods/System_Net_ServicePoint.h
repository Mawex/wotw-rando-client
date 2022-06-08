using namespace app;

namespace app::methods::System::Net::ServicePoint {
IL2CPP_REGISTER_METHOD(0x01BD4A90, void, __ctor, (ServicePoint * __this, Uri * uri, int32_t connectionLimit, int32_t maxIdleTime));
IL2CPP_REGISTER_METHOD(0x002FA280, Uri *, get_Address, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD4C30, Exception *, GetMustImplement, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FBBC0, BindIPEndPoint *, get_BindIPEndPointDelegate, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_BindIPEndPointDelegate, (ServicePoint * __this, BindIPEndPoint * value));
IL2CPP_REGISTER_METHOD(0x01BD4D70, int32_t, get_ConnectionLeaseTimeout, (ServicePoint * __this));
IL2CPP_REGISTER_METHODINFO(0x04722908, ServicePoint_get_ConnectionLeaseTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD4DB0, void, set_ConnectionLeaseTimeout, (ServicePoint * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0475CD90, ServicePoint_set_ConnectionLeaseTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConnectionLimit, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD4DF0, void, set_ConnectionLimit, (ServicePoint * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04754A28, ServicePoint_set_ConnectionLimit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD4EA0, String *, get_ConnectionName, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_CurrentConnections, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD4EC0, DateTime, get_IdleSince, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MaxIdleTime, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD4ED0, void, set_MaxIdleTime, (ServicePoint * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0472E248, ServicePoint_set_MaxIdleTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9B0, Version *, get_ProtocolVersion, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD5050, int32_t, get_ReceiveBufferSize, (ServicePoint * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B850, ServicePoint_get_ReceiveBufferSize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD5090, void, set_ReceiveBufferSize, (ServicePoint * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04720D48, ServicePoint_set_ReceiveBufferSize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD50D0, bool, get_SupportsPipelining, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD5190, bool, get_Expect100Continue, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, set_Expect100Continue, (ServicePoint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_UseNagleAlgorithm, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_UseNagleAlgorithm, (ServicePoint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BD51A0, bool, get_SendContinue, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, set_SendContinue, (ServicePoint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BD5300, void, SetTcpKeepAlive, (ServicePoint * __this, bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval));
IL2CPP_REGISTER_METHODINFO(0x04764378, ServicePoint_SetTcpKeepAlive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD5420, void, KeepAliveSetup, (ServicePoint * __this, Socket * socket));
IL2CPP_REGISTER_METHOD(0x01BD5680, void, PutBytes, (Byte__Array * bytes, uint32_t v, int32_t offset));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_UsesProxy, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_UsesProxy, (ServicePoint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_UseConnect, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_UseConnect, (ServicePoint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BD5890, WebConnectionGroup *, GetConnectionGroup, (ServicePoint * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01BD5D30, void, RemoveConnectionGroup, (ServicePoint * __this, WebConnectionGroup * group));
IL2CPP_REGISTER_METHODINFO(0x04761C38, ServicePoint_RemoveConnectionGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD5E10, bool, CheckAvailableForRecycling, (ServicePoint * __this, DateTime * outIdleSince));
IL2CPP_REGISTER_METHOD(0x01BD65A0, void, IdleTimerCallback, (ServicePoint * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0474F800, ServicePoint_IdleTimerCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD65C0, bool, get_HasTimedOut, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD6780, IPHostEntry *, get_HostEntry, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVersion, (ServicePoint * __this, Version * version));
IL2CPP_REGISTER_METHOD(0x01BD6C10, EventHandler *, SendRequest, (ServicePoint * __this, HttpWebRequest * request, String * groupName));
IL2CPP_REGISTER_METHOD(0x01BD6F90, bool, CloseConnectionGroup, (ServicePoint * __this, String * connectionGroupName));
IL2CPP_REGISTER_METHOD(0x01BD70C0, X509Certificate_1 *, get_Certificate, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD7300, void, UpdateServerCertificate, (ServicePoint * __this, X509Certificate_1 * certificate));
IL2CPP_REGISTER_METHOD(0x01BD7340, X509Certificate_1 *, get_ClientCertificate, (ServicePoint * __this));
IL2CPP_REGISTER_METHOD(0x01BD7580, void, UpdateClientCertificate, (ServicePoint * __this, X509Certificate_1 * certificate));
IL2CPP_REGISTER_METHOD(0x01BD75C0, bool, CallEndPointDelegate, (ServicePoint * __this, Socket * sock, IPEndPoint * remote));
IL2CPP_REGISTER_METHODINFO(0x0476EFF0, ServicePoint_CallEndPointDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD7710, Socket *, GetConnection, (ServicePoint * __this, PooledStream * PooledStream, Object * owner, bool async, IPAddress * * address, Socket * * abortSocket, Socket * * abortSocket6));
IL2CPP_REGISTER_METHODINFO(0x047262D8, ServicePoint_GetConnection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD7760, void, _GetConnectionGroup_b__66_0, (ServicePoint * __this, Object * s, EventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x0473AE18, ServicePoint__GetConnectionGroup_b__66_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD7770, void, __ctor, (ServicePoint * __this));
IL2CPP_REGISTER_METHODINFO(0x0473CFC8, ServicePoint__ctor_1__MethodInfo);
}
