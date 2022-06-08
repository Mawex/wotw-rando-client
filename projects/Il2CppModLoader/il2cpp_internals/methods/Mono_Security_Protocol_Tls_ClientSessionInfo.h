using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::ClientSessionInfo {
IL2CPP_REGISTER_METHOD(0x01F68830, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F68910, void, __ctor, (ClientSessionInfo * __this, String * hostname, Byte__Array * id));
IL2CPP_REGISTER_METHOD(0x01F68920, void, Finalize, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HostName, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Byte__Array *, get_Id, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01F689B0, bool, get_Valid, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01F68A70, void, GetContext, (ClientSessionInfo * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F68BE0, void, SetContext, (ClientSessionInfo * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F68D50, void, KeepAlive, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01F68E40, void, Dispose, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01F68EF0, void, Dispose, (ClientSessionInfo * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01F68FD0, void, CheckDisposed, (ClientSessionInfo * __this));
IL2CPP_REGISTER_METHODINFO(0x047430C0, ClientSessionInfo_CheckDisposed__MethodInfo);
}
