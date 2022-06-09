#include <interception_macros.h>

namespace app::methods::Steamworks::UGCHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::UGCHandle_t__Boxed * this_ptr, uint64_t value));
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::UGCHandle_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002009D0, bool, Equals_1, (app::UGCHandle_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::UGCHandle_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::UGCHandle_t x, app::UGCHandle_t y));
    IL2CPP_REGISTER_METHOD(0x027A6930, bool, operator____2, (app::UGCHandle_t x, app::UGCHandle_t y));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::UGCHandle_t, operator__1, (uint64_t value));
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__2, (app::UGCHandle_t that));
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::UGCHandle_t__Boxed * this_ptr, app::UGCHandle_t other));
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::UGCHandle_t__Boxed * this_ptr, app::UGCHandle_t other));
    IL2CPP_REGISTER_METHOD(0x027A69E0, void, __cctor, ());
}
