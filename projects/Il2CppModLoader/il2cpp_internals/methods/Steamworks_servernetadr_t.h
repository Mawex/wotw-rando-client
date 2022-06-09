#include <interception_macros.h>

namespace app::methods::Steamworks::servernetadr_t {
IL2CPP_REGISTER_METHOD(0x00113C90, void, Init, (app::servernetadr_t__Boxed * this_ptr, uint32_t ip, uint16_t us_query_port, uint16_t us_connection_port));
IL2CPP_REGISTER_METHOD(0x00113CA0, uint16_t, GetQueryPort, (app::servernetadr_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00113CB0, void, SetQueryPort, (app::servernetadr_t__Boxed * this_ptr, uint16_t us_port));
IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, GetConnectionPort, (app::servernetadr_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00113CD0, void, SetConnectionPort, (app::servernetadr_t__Boxed * this_ptr, uint16_t us_port));
IL2CPP_REGISTER_METHOD(0x00113CE0, uint32_t, GetIP, (app::servernetadr_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00113CF0, void, SetIP, (app::servernetadr_t__Boxed * this_ptr, uint32_t un_i_p));
IL2CPP_REGISTER_METHOD(0x00113D00, String *, GetConnectionAddressString, (app::servernetadr_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00113D10, String *, GetQueryAddressString, (app::servernetadr_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0064E190, String *, ToString, (uint32_t un_i_p, uint16_t us_port));
IL2CPP_REGISTER_METHOD(0x0064E470, bool, operator___1, (app::servernetadr_t x, app::servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x0064E4A0, bool, operator___2, (app::servernetadr_t x, app::servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x00113D20, bool, Equals_1, (app::servernetadr_t__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x00113E20, int32_t, GetHashCode, (app::servernetadr_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0064E4D0, bool, operator____1, (app::servernetadr_t x, app::servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x0064E510, bool, operator____2, (app::servernetadr_t x, app::servernetadr_t y));
IL2CPP_REGISTER_METHOD(0x00113E30, bool, Equals_2, (app::servernetadr_t__Boxed * this_ptr, app::servernetadr_t other));
IL2CPP_REGISTER_METHOD(0x00113E60, int32_t, CompareTo, (app::servernetadr_t__Boxed * this_ptr, app::servernetadr_t other));
}
