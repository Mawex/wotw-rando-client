#include <interception_macros.h>

namespace app::methods::Steamworks::HSteamPipe {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (HSteamPipe__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001311C0, String *, ToString, (HSteamPipe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00131300, bool, Equals, (HSteamPipe__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (HSteamPipe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (HSteamPipe x, HSteamPipe y));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator___, (HSteamPipe x, HSteamPipe y));
IL2CPP_REGISTER_METHOD(0x006CE970, HSteamPipe, operator_, (int32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator_, (HSteamPipe that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (HSteamPipe__Boxed * __this, HSteamPipe other));
IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (HSteamPipe__Boxed * __this, HSteamPipe other));
}
