using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificateVerify {
IL2CPP_REGISTER_METHOD(0x01F6AC60, void, __ctor, (TlsClientCertificateVerify_1 * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (TlsClientCertificateVerify_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6AC90, void, ProcessAsSsl3, (TlsClientCertificateVerify_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A708, TlsClientCertificateVerify_1_ProcessAsSsl3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6B040, void, ProcessAsTls1, (TlsClientCertificateVerify_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04744AD0, TlsClientCertificateVerify_1_ProcessAsTls1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6B3E0, RSA *, getClientCertRSA, (TlsClientCertificateVerify_1 * __this, RSA * privKey));
IL2CPP_REGISTER_METHOD(0x01F6B870, Byte__Array *, getUnsignedBigInteger, (TlsClientCertificateVerify_1 * __this, Byte__Array * integer));
}
