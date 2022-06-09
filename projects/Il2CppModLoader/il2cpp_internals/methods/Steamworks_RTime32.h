#include <interception_macros.h>

namespace app::methods::Steamworks::RTime32 {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::RTime32__Boxed * this_ptr, uint32_t value));
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::RTime32__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00207250, bool, Equals_1, (app::RTime32__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RTime32__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::RTime32 x, app::RTime32 y));
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator____2, (app::RTime32 x, app::RTime32 y));
    IL2CPP_REGISTER_METHOD(0x006CE970, app::RTime32, operator__1, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator__2, (app::RTime32 that));
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::RTime32__Boxed * this_ptr, app::RTime32 other));
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::RTime32__Boxed * this_ptr, app::RTime32 other));
}
