using namespace app;

namespace app::methods::System::IO::IOException {
IL2CPP_REGISTER_METHOD(0x0236FF50, void, __ctor, (IOException * __this));
IL2CPP_REGISTER_METHOD(0x0236FFE0, void, __ctor, (IOException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01A93D50, void, __ctor, (IOException * __this, String * message, int32_t hresult));
IL2CPP_REGISTER_METHOD(0x02370000, void, __ctor, (IOException * __this, String * message, int32_t hresult, String * maybeFullPath));
IL2CPP_REGISTER_METHOD(0x02370040, void, __ctor, (IOException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (IOException * __this, SerializationInfo * info, StreamingContext context));
}
