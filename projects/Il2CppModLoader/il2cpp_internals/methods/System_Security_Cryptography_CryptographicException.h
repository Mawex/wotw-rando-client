using namespace app;

namespace app::methods::System::Security::Cryptography::CryptographicException {
IL2CPP_REGISTER_METHOD(0x020CFEC0, void, __ctor, (CryptographicException * __this));
IL2CPP_REGISTER_METHOD(0x020CFF50, void, __ctor, (CryptographicException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x020CFF70, void, __ctor, (CryptographicException * __this, String * format, String * insert));
IL2CPP_REGISTER_METHOD(0x020D00B0, void, __ctor, (CryptographicException * __this, String * message, Exception * inner));
IL2CPP_REGISTER_METHOD(0x020D00D0, void, __ctor, (CryptographicException * __this, int32_t hr));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (CryptographicException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020D0120, void, ThrowCryptographicException, (int32_t hr));
IL2CPP_REGISTER_METHODINFO(0x04736990, CryptographicException_ThrowCryptographicException__MethodInfo);
}
