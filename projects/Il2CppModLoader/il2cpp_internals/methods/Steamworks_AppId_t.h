using namespace app;

namespace app::methods::Steamworks::AppId_t {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (AppId_t__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (AppId_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012EDF0, bool, Equals, (AppId_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (AppId_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (AppId_t x, AppId_t y));
IL2CPP_REGISTER_METHOD(0x015F7760, bool, operator___, (AppId_t x, AppId_t y));
IL2CPP_REGISTER_METHOD(0x006CE970, AppId_t, operator_, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (AppId_t that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (AppId_t__Boxed * __this, AppId_t other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (AppId_t__Boxed * __this, AppId_t other));
IL2CPP_REGISTER_METHOD(0x015F7800, void, __cctor, (MethodInfo * method));
}
