#include <interception_macros.h>

namespace app::methods::Mono::Security::Interface::MonoTlsSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, MonoRemoteCertificateValidationCallback *, get_RemoteCertificateValidationCallback, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_RemoteCertificateValidationCallback, (MonoTlsSettings * __this, MonoRemoteCertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x002FB930, MonoLocalCertificateSelectionCallback *, get_ClientCertificateSelectionCallback, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ClientCertificateSelectionCallback, (MonoTlsSettings * __this, MonoLocalCertificateSelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x02A467A0, Nullable_1_Boolean_, get_UseServicePointManagerCallback, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x02A467B0, void, set_UseServicePointManagerCallback, (MonoTlsSettings * __this, Nullable_1_Boolean_ value));
IL2CPP_REGISTER_METHOD(0x01F3F910, bool, get_CallbackNeedsCertificateChain, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x01746A40, Nullable_1_DateTime_, get_CertificateValidationTime, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_CertificateValidationTime, (MonoTlsSettings * __this, Nullable_1_DateTime_ value));
IL2CPP_REGISTER_METHOD(0x002FB990, X509CertificateCollection_1 *, get_TrustAnchors, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_TrustAnchors, (MonoTlsSettings * __this, X509CertificateCollection_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Object *, get_UserSettings, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_UserSettings, (MonoTlsSettings * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String__Array *, get_CertificateSearchPaths, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_CertificateSearchPaths, (MonoTlsSettings * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_SendCloseNotify, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_SendCloseNotify, (MonoTlsSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Mono_Security_Interface_TlsProtocols_, get_EnabledProtocols, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_EnabledProtocols, (MonoTlsSettings * __this, Nullable_1_Mono_Security_Interface_TlsProtocols_ value));
IL2CPP_REGISTER_METHOD(0x002FBB60, CipherSuiteCode__Enum__Array *, get_EnabledCiphers, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_EnabledCiphers, (MonoTlsSettings * __this, CipherSuiteCode__Enum__Array * value));
IL2CPP_REGISTER_METHOD(0x02A467C0, void, __ctor, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x02A467D0, MonoTlsSettings *, get_DefaultSettings, ());
IL2CPP_REGISTER_METHOD(0x02A46940, MonoTlsSettings *, CopyDefaultSettings, ());
IL2CPP_REGISTER_METHOD(0x002FBBA0, ICertificateValidator *, get_CertificateValidator, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x02A46970, MonoTlsSettings *, CloneWithValidator, (MonoTlsSettings * __this, ICertificateValidator * validator));
IL2CPP_REGISTER_METHOD(0x02A46AF0, MonoTlsSettings *, Clone, (MonoTlsSettings * __this));
IL2CPP_REGISTER_METHOD(0x02A46C40, void, __ctor, (MonoTlsSettings * __this, MonoTlsSettings * other));
}
