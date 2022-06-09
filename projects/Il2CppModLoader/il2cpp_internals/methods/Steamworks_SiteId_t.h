#include <interception_macros.h>

namespace app::methods::Steamworks::SiteId_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::SiteId_t__Boxed * this_ptr, uint64_t value));
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::SiteId_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0020B1E0, bool, Equals_1, (app::SiteId_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::SiteId_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::SiteId_t x, app::SiteId_t y));
    IL2CPP_REGISTER_METHOD(0x027E1DD0, bool, operator____2, (app::SiteId_t x, app::SiteId_t y));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::SiteId_t, operator__1, (uint64_t value));
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__2, (app::SiteId_t that));
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::SiteId_t__Boxed * this_ptr, app::SiteId_t other));
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::SiteId_t__Boxed * this_ptr, app::SiteId_t other));
    IL2CPP_REGISTER_METHOD(0x027E1E80, void, __cctor, ());
}
