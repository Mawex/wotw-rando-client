#include <interception_macros.h>

namespace app::methods::Steamworks::CGameID {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor_1, (app::CGameID__Boxed * this_ptr, uint64_t game_i_d));
    IL2CPP_REGISTER_METHOD(0x0012F080, void, __ctor_2, (app::CGameID__Boxed * this_ptr, app::AppId_t n_app_i_d));
    IL2CPP_REGISTER_METHOD(0x0012F090, void, __ctor_3, (app::CGameID__Boxed * this_ptr, app::AppId_t n_app_i_d, uint32_t n_mod_i_d));
    IL2CPP_REGISTER_METHOD(0x0012F0E0, bool, IsSteamApp, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F0F0, bool, IsMod, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F100, bool, IsShortcut, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F110, bool, IsP2PFile, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F120, app::AppId_t, AppID, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F130, app::CGameID_EGameIDType__Enum, Type, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F140, uint32_t, ModID, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F150, bool, IsValid, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00120B90, void, Reset, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, Set, (app::CGameID__Boxed * this_ptr, uint64_t game_i_d));
    IL2CPP_REGISTER_METHOD(0x0012F160, void, SetAppID, (app::CGameID__Boxed * this_ptr, app::AppId_t other));
    IL2CPP_REGISTER_METHOD(0x0012F170, void, SetType, (app::CGameID__Boxed * this_ptr, app::CGameID_EGameIDType__Enum other));
    IL2CPP_REGISTER_METHOD(0x0012F190, void, SetModID, (app::CGameID__Boxed * this_ptr, uint32_t other));
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F1E0, bool, Equals_1, (app::CGameID__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::CGameID__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::CGameID x, app::CGameID y));
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator____2, (app::CGameID x, app::CGameID y));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::CGameID, operator__1, (uint64_t value));
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__2, (app::CGameID that));
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::CGameID__Boxed * this_ptr, app::CGameID other));
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::CGameID__Boxed * this_ptr, app::CGameID other));
}
