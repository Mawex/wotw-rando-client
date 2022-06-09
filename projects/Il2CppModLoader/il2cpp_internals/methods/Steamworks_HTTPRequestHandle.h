#include <interception_macros.h>

namespace app::methods::Steamworks::HTTPRequestHandle {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::HTTPRequestHandle__Boxed * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (app::HTTPRequestHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001321A0, bool, Equals_1, (app::HTTPRequestHandle__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HTTPRequestHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::HTTPRequestHandle x, app::HTTPRequestHandle y));
IL2CPP_REGISTER_METHOD(0x015FBD20, bool, operator____2, (app::HTTPRequestHandle x, app::HTTPRequestHandle y));
IL2CPP_REGISTER_METHOD(0x006CE970, HTTPRequestHandle, operator__1, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator__2, (app::HTTPRequestHandle that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HTTPRequestHandle__Boxed * this_ptr, app::HTTPRequestHandle other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::HTTPRequestHandle__Boxed * this_ptr, app::HTTPRequestHandle other));
IL2CPP_REGISTER_METHOD(0x015FBDC0, void, __cctor, ());
}
