#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::TlsException {
IL2CPP_REGISTER_METHOD(0x002FBC20, Alert *, get_Alert, (TlsException * __this));
IL2CPP_REGISTER_METHOD(0x0291BD90, void, __ctor, (TlsException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0291BE40, void, __ctor, (TlsException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0291BF00, void, __ctor, (TlsException * __this, String * message, Exception * ex));
IL2CPP_REGISTER_METHOD(0x0291BFC0, void, __ctor, (TlsException * __this, AlertLevel__Enum level, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x0291C160, void, __ctor, (TlsException * __this, AlertLevel__Enum level, AlertDescription__Enum_1 description, String * message));
IL2CPP_REGISTER_METHOD(0x0291C2F0, void, __ctor, (TlsException * __this, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x0291C330, void, __ctor, (TlsException * __this, AlertDescription__Enum_1 description, String * message));
}
