#include <interception_macros.h>

namespace app::methods::Steamworks::DepotId_t {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::DepotId_t__Boxed * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (app::DepotId_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012F870, bool, Equals_1, (app::DepotId_t__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::DepotId_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::DepotId_t x, app::DepotId_t y));
IL2CPP_REGISTER_METHOD(0x015FAC80, bool, operator____2, (app::DepotId_t x, app::DepotId_t y));
IL2CPP_REGISTER_METHOD(0x006CE970, DepotId_t, operator__1, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator__2, (app::DepotId_t that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::DepotId_t__Boxed * this_ptr, app::DepotId_t other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::DepotId_t__Boxed * this_ptr, app::DepotId_t other));
IL2CPP_REGISTER_METHOD(0x015FAD20, void, __cctor, ());
}
