using namespace app;

namespace app::methods::Steamworks::CGameID {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (CGameID__Boxed * __this, uint64_t GameID));
IL2CPP_REGISTER_METHOD(0x0012F080, void, __ctor, (CGameID__Boxed * __this, AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x0012F090, void, __ctor, (CGameID__Boxed * __this, AppId_t nAppID, uint32_t nModID));
IL2CPP_REGISTER_METHOD(0x0012F0E0, bool, IsSteamApp, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F0F0, bool, IsMod, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F100, bool, IsShortcut, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F110, bool, IsP2PFile, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F120, AppId_t, AppID, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F130, CGameID_EGameIDType__Enum, Type, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F140, uint32_t, ModID, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F150, bool, IsValid, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120B90, void, Reset, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, Set, (CGameID__Boxed * __this, uint64_t GameID));
IL2CPP_REGISTER_METHOD(0x0012F160, void, SetAppID, (CGameID__Boxed * __this, AppId_t other));
IL2CPP_REGISTER_METHOD(0x0012F170, void, SetType, (CGameID__Boxed * __this, CGameID_EGameIDType__Enum other));
IL2CPP_REGISTER_METHOD(0x0012F190, void, SetModID, (CGameID__Boxed * __this, uint32_t other));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F1E0, bool, Equals, (CGameID__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (CGameID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (CGameID x, CGameID y));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (CGameID x, CGameID y));
IL2CPP_REGISTER_METHOD(0x004C50A0, CGameID, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (CGameID that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (CGameID__Boxed * __this, CGameID other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (CGameID__Boxed * __this, CGameID other));
}
