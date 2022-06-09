#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::CryptographicException {
    IL2CPP_REGISTER_METHOD(0x020CFEC0, void, __ctor_1, (app::CryptographicException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020CFF50, void, __ctor_2, (app::CryptographicException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x020CFF70, void, __ctor_3, (app::CryptographicException * this_ptr, app::String * format, app::String * insert));
    IL2CPP_REGISTER_METHOD(0x020D00B0, void, __ctor_4, (app::CryptographicException * this_ptr, app::String * message, app::Exception * inner));
    IL2CPP_REGISTER_METHOD(0x020D00D0, void, __ctor_5, (app::CryptographicException * this_ptr, int32_t hr));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_6, (app::CryptographicException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x020D0120, void, ThrowCryptographicException, (int32_t hr));
    IL2CPP_REGISTER_METHODINFO(0x04736990, CryptographicException_ThrowCryptographicException__MethodInfo);
}
