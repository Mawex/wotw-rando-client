using namespace app;

namespace app::methods::System::Runtime::InteropServices::ExternalException {
IL2CPP_REGISTER_METHOD(0x01A94260, void, __ctor, (ExternalException * __this));
IL2CPP_REGISTER_METHOD(0x01A942F0, void, __ctor, (ExternalException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01A94310, void, __ctor, (ExternalException * __this, String * message, Exception * inner));
IL2CPP_REGISTER_METHOD(0x01A93D50, void, __ctor, (ExternalException * __this, String * message, int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (ExternalException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_ErrorCode, (ExternalException * __this));
IL2CPP_REGISTER_METHOD(0x01A94330, String *, ToString, (ExternalException * __this));
}
