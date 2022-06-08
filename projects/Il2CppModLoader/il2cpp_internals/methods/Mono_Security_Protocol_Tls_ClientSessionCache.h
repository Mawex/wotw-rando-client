using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::ClientSessionCache {
IL2CPP_REGISTER_METHOD(0x01F674F0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F67710, void, Add, (String * host, Byte__Array * id));
IL2CPP_REGISTER_METHOD(0x01F67C70, Byte__Array *, FromHost, (String * host));
IL2CPP_REGISTER_METHOD(0x01F68020, ClientSessionInfo *, FromContext, (Context_1 * context, bool checkValidity));
IL2CPP_REGISTER_METHOD(0x01F68200, bool, SetContextInCache, (Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F68510, bool, SetContextFromCache, (Context_1 * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ClientSessionCache * __this));
}
