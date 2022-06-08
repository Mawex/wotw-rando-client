#include <interception_macros.h>

namespace app::methods::System::Net::HostHeaderString {
IL2CPP_REGISTER_METHOD(0x01D3D310, void, __ctor, (HostHeaderString * __this));
IL2CPP_REGISTER_METHOD(0x01D3D320, void, __ctor, (HostHeaderString * __this, String * s));
IL2CPP_REGISTER_METHOD(0x01D3D320, void, Init, (HostHeaderString * __this, String * s));
IL2CPP_REGISTER_METHOD(0x01D3D340, void, Convert, (HostHeaderString * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_String, (HostHeaderString * __this));
IL2CPP_REGISTER_METHOD(0x01D3D320, void, set_String, (HostHeaderString * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01D3D4B0, int32_t, get_ByteCount, (HostHeaderString * __this));
IL2CPP_REGISTER_METHOD(0x01D3D4E0, Byte__Array *, get_Bytes, (HostHeaderString * __this));
IL2CPP_REGISTER_METHOD(0x01D3D500, void, Copy, (HostHeaderString * __this, Byte__Array * destBytes, int32_t destByteIndex));
}
