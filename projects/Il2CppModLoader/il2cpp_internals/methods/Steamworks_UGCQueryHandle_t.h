#include <interception_macros.h>

namespace app::methods::Steamworks::UGCQueryHandle_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (UGCQueryHandle_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (UGCQueryHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00200AD0, bool, Equals, (UGCQueryHandle_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (UGCQueryHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (UGCQueryHandle_t x, UGCQueryHandle_t y));
IL2CPP_REGISTER_METHOD(0x027A6A60, bool, operator___, (UGCQueryHandle_t x, UGCQueryHandle_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, UGCQueryHandle_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (UGCQueryHandle_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (UGCQueryHandle_t__Boxed * __this, UGCQueryHandle_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (UGCQueryHandle_t__Boxed * __this, UGCQueryHandle_t other));
IL2CPP_REGISTER_METHOD(0x027A6B10, void, __cctor, ());
}
