#include <interception_macros.h>

namespace app::methods::Steamworks::SteamItemDef_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::SteamItemDef_t__Boxed * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String *, ToString, (app::SteamItemDef_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001FFE70, bool, Equals_1, (app::SteamItemDef_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::SteamItemDef_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::SteamItemDef_t x, app::SteamItemDef_t y));
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator____2, (app::SteamItemDef_t x, app::SteamItemDef_t y));
    IL2CPP_REGISTER_METHOD(0x006CE970, app::SteamItemDef_t, operator__1, (int32_t value));
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator__2, (app::SteamItemDef_t that));
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::SteamItemDef_t__Boxed * this_ptr, app::SteamItemDef_t other));
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (app::SteamItemDef_t__Boxed * this_ptr, app::SteamItemDef_t other));
}
