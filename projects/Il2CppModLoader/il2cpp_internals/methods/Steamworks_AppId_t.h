#include <interception_macros.h>

namespace app::methods::Steamworks::AppId_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::AppId_t__Boxed * this_ptr, uint32_t value));
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::AppId_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012EDF0, bool, Equals_1, (app::AppId_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::AppId_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::AppId_t x, app::AppId_t y));
    IL2CPP_REGISTER_METHOD(0x015F7760, bool, operator____2, (app::AppId_t x, app::AppId_t y));
    IL2CPP_REGISTER_METHOD(0x006CE970, app::AppId_t, operator__1, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator__2, (app::AppId_t that));
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::AppId_t__Boxed * this_ptr, app::AppId_t other));
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::AppId_t__Boxed * this_ptr, app::AppId_t other));
    IL2CPP_REGISTER_METHOD(0x015F7800, void, __cctor, ());
}
