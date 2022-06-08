#include <interception_macros.h>

namespace app::methods::Steamworks::SNetSocket_t {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (SNetSocket_t__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (SNetSocket_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0020B020, bool, Equals, (SNetSocket_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (SNetSocket_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (SNetSocket_t x, SNetSocket_t y));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator___, (SNetSocket_t x, SNetSocket_t y));
IL2CPP_REGISTER_METHOD(0x006CE970, SNetSocket_t, operator_, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (SNetSocket_t that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (SNetSocket_t__Boxed * __this, SNetSocket_t other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (SNetSocket_t__Boxed * __this, SNetSocket_t other));
}
