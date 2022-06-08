using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PrivateKeySelectionCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, AsymmetricAlgorithm *, Invoke, (PrivateKeySelectionCallback * __this, X509Certificate_1 * certificate, String * targetHost));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PrivateKeySelectionCallback * __this, X509Certificate_1 * certificate, String * targetHost, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, AsymmetricAlgorithm *, EndInvoke, (PrivateKeySelectionCallback * __this, IAsyncResult * result));
}
