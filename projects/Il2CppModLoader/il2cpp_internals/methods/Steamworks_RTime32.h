using namespace app;

namespace app::methods::Steamworks::RTime32 {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (RTime32__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (RTime32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00207250, bool, Equals, (RTime32__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (RTime32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (RTime32 x, RTime32 y));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator___, (RTime32 x, RTime32 y));
IL2CPP_REGISTER_METHOD(0x006CE970, RTime32, operator_, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (RTime32 that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (RTime32__Boxed * __this, RTime32 other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (RTime32__Boxed * __this, RTime32 other));
}
