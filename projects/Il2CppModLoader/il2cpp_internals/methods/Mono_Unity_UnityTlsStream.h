#include <interception_macros.h>

namespace app::methods::Mono_Unity::UnityTlsStream {
IL2CPP_REGISTER_METHOD(0x02491D80, void, __ctor, (app::UnityTlsStream * this_ptr, app::Stream * inner_stream, bool leave_inner_stream_open, app::SslStream * owner, app::MonoTlsSettings * settings, app::MonoTlsProvider * provider));
IL2CPP_REGISTER_METHOD(0x02491E60, MobileTlsContext *, CreateContext, (app::UnityTlsStream * this_ptr, bool server_mode, app::String * target_host, app::SslProtocols__Enum enabled_protocols, app::X509Certificate_1 * server_certificate, app::X509CertificateCollection_1 * client_certificates, bool ask_for_client_cert));
}
