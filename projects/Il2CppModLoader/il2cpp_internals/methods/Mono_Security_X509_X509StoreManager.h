using namespace app;

namespace app::methods::Mono::Security::X509::X509StoreManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (X509StoreManager * __this));
IL2CPP_REGISTER_METHOD(0x03169820, String *, get_CurrentUserPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03169940, String *, get_LocalMachinePath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03169A60, String *, get_NewCurrentUserPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03169B80, String *, get_NewLocalMachinePath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03169CA0, X509Stores *, get_CurrentUser, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03169F20, X509Stores *, get_LocalMachine, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316A1A0, X509Stores *, get_NewCurrentUser, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316A420, X509Stores *, get_NewLocalMachine, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316A6A0, X509CertificateCollection_2 *, get_IntermediateCACertificates, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316A8A0, ArrayList *, get_IntermediateCACrls, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316AA80, X509CertificateCollection_2 *, get_TrustedRootCertificates, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316AC80, ArrayList *, get_TrustedRootCACrls, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0316AE60, X509CertificateCollection_2 *, get_UntrustedCertificates, (MethodInfo * method));
}
