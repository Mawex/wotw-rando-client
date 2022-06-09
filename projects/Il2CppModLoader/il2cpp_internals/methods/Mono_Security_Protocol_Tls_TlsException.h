#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls::TlsException {
IL2CPP_REGISTER_METHOD(0x002FBC20, Alert *, get_Alert, (app::TlsException * this_ptr));
IL2CPP_REGISTER_METHOD(0x0291BD90, void, __ctor_1, (app::TlsException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x0291BE40, void, __ctor_2, (app::TlsException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0291BF00, void, __ctor_3, (app::TlsException * this_ptr, app::String * message, app::Exception * ex));
IL2CPP_REGISTER_METHOD(0x0291BFC0, void, __ctor_4, (app::TlsException * this_ptr, app::AlertLevel__Enum level, app::AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x0291C160, void, __ctor_5, (app::TlsException * this_ptr, app::AlertLevel__Enum level, app::AlertDescription__Enum_1 description, app::String * message));
IL2CPP_REGISTER_METHOD(0x0291C2F0, void, __ctor_6, (app::TlsException * this_ptr, app::AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x0291C330, void, __ctor_7, (app::TlsException * this_ptr, app::AlertDescription__Enum_1 description, app::String * message));
}
