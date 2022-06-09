#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake_Client::TlsClientHello {
    IL2CPP_REGISTER_METHOD(0x01F6BF80, void, __ctor, (app::TlsClientHello_1 * this_ptr, app::Context_1 * context));
    IL2CPP_REGISTER_METHOD(0x01F6BFB0, void, Update, (app::TlsClientHello_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F6C0D0, void, ProcessAsSsl3, (app::TlsClientHello_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F6C5A0, void, ProcessAsTls1, (app::TlsClientHello_1 * this_ptr));
}
