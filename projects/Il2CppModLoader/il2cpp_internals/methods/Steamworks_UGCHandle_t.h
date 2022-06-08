using namespace app;

namespace app::methods::Steamworks::UGCHandle_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (UGCHandle_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (UGCHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002009D0, bool, Equals, (UGCHandle_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (UGCHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (UGCHandle_t x, UGCHandle_t y));
IL2CPP_REGISTER_METHOD(0x027A6930, bool, operator___, (UGCHandle_t x, UGCHandle_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, UGCHandle_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (UGCHandle_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (UGCHandle_t__Boxed * __this, UGCHandle_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (UGCHandle_t__Boxed * __this, UGCHandle_t other));
IL2CPP_REGISTER_METHOD(0x027A69E0, void, __cctor, (MethodInfo * method));
}
