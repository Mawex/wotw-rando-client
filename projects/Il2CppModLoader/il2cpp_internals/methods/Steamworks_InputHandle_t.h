using namespace app;

namespace app::methods::Steamworks::InputHandle_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (InputHandle_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (InputHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00132B60, bool, Equals, (InputHandle_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (InputHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (InputHandle_t x, InputHandle_t y));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (InputHandle_t x, InputHandle_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, InputHandle_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (InputHandle_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (InputHandle_t__Boxed * __this, InputHandle_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (InputHandle_t__Boxed * __this, InputHandle_t other));
}
