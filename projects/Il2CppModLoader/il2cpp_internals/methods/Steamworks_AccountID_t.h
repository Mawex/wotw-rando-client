#include <interception_macros.h>

namespace app::methods::Steamworks::AccountID_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::AccountID_t__Boxed * this_ptr, uint32_t value));
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::AccountID_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012ECF0, bool, Equals_1, (app::AccountID_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::AccountID_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::AccountID_t x, app::AccountID_t y));
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator____2, (app::AccountID_t x, app::AccountID_t y));
    IL2CPP_REGISTER_METHOD(0x006CE970, app::AccountID_t, operator__1, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator__2, (app::AccountID_t that));
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::AccountID_t__Boxed * this_ptr, app::AccountID_t other));
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::AccountID_t__Boxed * this_ptr, app::AccountID_t other));
}
