#include <interception_macros.h>

namespace app::methods::Steamworks::servernetadr_t {
IL2CPP_REGISTER_METHOD(0x00113C90, void, Init, (servernetadr_t__Boxed * __this, uint32_t ip, uint16_t usQueryPort, uint16_t usConnectionPort));
IL2CPP_REGISTER_METHOD(0x00113CA0, uint16_t, GetQueryPort, (servernetadr_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CB0, void, SetQueryPort, (servernetadr_t__Boxed * __this, uint16_t usPort));
IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, GetConnectionPort, (servernetadr_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CD0, void, SetConnectionPort, (servernetadr_t__Boxed * __this, uint16_t usPort));
IL2CPP_REGISTER_METHOD(0x00113CE0, uint32_t, GetIP, (servernetadr_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CF0, void, SetIP, (servernetadr_t__Boxed * __this, uint32_t unIP));
IL2CPP_REGISTER_METHOD(0x00113D00, String *, GetConnectionAddressString, (servernetadr_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113D10, String *, GetQueryAddressString, (servernetadr_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0064E190, String *, ToString, (uint32_t unIP, uint16_t usPort));
IL2CPP_REGISTER_METHOD(0x0064E470, bool, operator__, (servernetadr_t x, servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x0064E4A0, bool, operator__, (servernetadr_t x, servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x00113D20, bool, Equals, (servernetadr_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x00113E20, int32_t, GetHashCode, (servernetadr_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0064E4D0, bool, operator___, (servernetadr_t x, servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x0064E510, bool, operator___, (servernetadr_t x, servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x00113E30, bool, Equals, (servernetadr_t__Boxed * __this, servernetadr_t other));
IL2CPP_REGISTER_METHOD(0x00113E60, int32_t, CompareTo, (servernetadr_t__Boxed * __this, servernetadr_t other));
}
