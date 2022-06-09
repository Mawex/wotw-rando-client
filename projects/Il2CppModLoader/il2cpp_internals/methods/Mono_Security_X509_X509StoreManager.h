#include <interception_macros.h>

namespace app::methods::Mono_Security_X509::X509StoreManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::X509StoreManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x03169820, String *, get_CurrentUserPath, ());
IL2CPP_REGISTER_METHOD(0x03169940, String *, get_LocalMachinePath, ());
IL2CPP_REGISTER_METHOD(0x03169A60, String *, get_NewCurrentUserPath, ());
IL2CPP_REGISTER_METHOD(0x03169B80, String *, get_NewLocalMachinePath, ());
IL2CPP_REGISTER_METHOD(0x03169CA0, X509Stores *, get_CurrentUser, ());
IL2CPP_REGISTER_METHOD(0x03169F20, X509Stores *, get_LocalMachine, ());
IL2CPP_REGISTER_METHOD(0x0316A1A0, X509Stores *, get_NewCurrentUser, ());
IL2CPP_REGISTER_METHOD(0x0316A420, X509Stores *, get_NewLocalMachine, ());
IL2CPP_REGISTER_METHOD(0x0316A6A0, X509CertificateCollection_2 *, get_IntermediateCACertificates, ());
IL2CPP_REGISTER_METHOD(0x0316A8A0, ArrayList *, get_IntermediateCACrls, ());
IL2CPP_REGISTER_METHOD(0x0316AA80, X509CertificateCollection_2 *, get_TrustedRootCertificates, ());
IL2CPP_REGISTER_METHOD(0x0316AC80, ArrayList *, get_TrustedRootCACrls, ());
IL2CPP_REGISTER_METHOD(0x0316AE60, X509CertificateCollection_2 *, get_UntrustedCertificates, ());
}
