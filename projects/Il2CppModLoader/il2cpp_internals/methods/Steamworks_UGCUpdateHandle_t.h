#include <interception_macros.h>

namespace app::methods::Steamworks::UGCUpdateHandle_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (UGCUpdateHandle_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (UGCUpdateHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00200BD0, bool, Equals, (UGCUpdateHandle_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (UGCUpdateHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (UGCUpdateHandle_t x, UGCUpdateHandle_t y));
IL2CPP_REGISTER_METHOD(0x027A6B90, bool, operator___, (UGCUpdateHandle_t x, UGCUpdateHandle_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, UGCUpdateHandle_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (UGCUpdateHandle_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (UGCUpdateHandle_t__Boxed * __this, UGCUpdateHandle_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (UGCUpdateHandle_t__Boxed * __this, UGCUpdateHandle_t other));
IL2CPP_REGISTER_METHOD(0x027A6C40, void, __cctor, ());
}
