using namespace app;

namespace app::methods::Steamworks::AccountID_t {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (AccountID_t__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (AccountID_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012ECF0, bool, Equals, (AccountID_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (AccountID_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (AccountID_t x, AccountID_t y));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator___, (AccountID_t x, AccountID_t y));
IL2CPP_REGISTER_METHOD(0x006CE970, AccountID_t, operator_, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (AccountID_t that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (AccountID_t__Boxed * __this, AccountID_t other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (AccountID_t__Boxed * __this, AccountID_t other));
}
