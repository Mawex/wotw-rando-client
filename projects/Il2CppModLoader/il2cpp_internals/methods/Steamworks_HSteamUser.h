using namespace app;

namespace app::methods::Steamworks::HSteamUser {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (HSteamUser__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001311C0, String *, ToString, (HSteamUser__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001313D0, bool, Equals, (HSteamUser__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (HSteamUser__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (HSteamUser x, HSteamUser y));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator___, (HSteamUser x, HSteamUser y));
IL2CPP_REGISTER_METHOD(0x006CE970, HSteamUser, operator_, (int32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator_, (HSteamUser that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (HSteamUser__Boxed * __this, HSteamUser other));
IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (HSteamUser__Boxed * __this, HSteamUser other));
}
