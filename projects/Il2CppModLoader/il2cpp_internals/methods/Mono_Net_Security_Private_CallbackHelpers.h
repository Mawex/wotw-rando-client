using namespace app;

namespace app::methods::Mono::Net::Security::Private::CallbackHelpers {
IL2CPP_REGISTER_METHOD(0x02185570, MonoRemoteCertificateValidationCallback *, PublicToMono, (RemoteCertificateValidationCallback * callback));
IL2CPP_REGISTER_METHOD(0x021857B0, RemoteCertificateValidationCallback *, MonoToPublic, (MonoRemoteCertificateValidationCallback * callback));
IL2CPP_REGISTER_METHOD(0x021859F0, LocalCertSelectionCallback *, MonoToInternal, (MonoLocalCertificateSelectionCallback * callback));
}
