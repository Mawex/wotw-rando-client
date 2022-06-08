using namespace app;

namespace app::methods::Mono::Net::Security::AsyncReadOrWriteRequest {
IL2CPP_REGISTER_METHOD(0x002FB9B0, BufferOffsetSize *, get_UserBuffer, (AsyncReadOrWriteRequest * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_CurrentSize, (AsyncReadOrWriteRequest * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_CurrentSize, (AsyncReadOrWriteRequest * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0217C290, void, __ctor, (AsyncReadOrWriteRequest * __this, MobileAuthenticatedStream * parent, bool sync, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x0217C420, String *, ToString, (AsyncReadOrWriteRequest * __this));
}
