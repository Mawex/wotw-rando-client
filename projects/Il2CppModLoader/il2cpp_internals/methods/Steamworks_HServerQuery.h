#include <interception_macros.h>

namespace app::methods::Steamworks::HServerQuery {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (HServerQuery__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001311C0, String *, ToString, (HServerQuery__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001311F0, bool, Equals, (HServerQuery__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (HServerQuery__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (HServerQuery x, HServerQuery y));
IL2CPP_REGISTER_METHOD(0x015FBAE0, bool, operator___, (HServerQuery x, HServerQuery y));
IL2CPP_REGISTER_METHOD(0x006CE970, HServerQuery, operator_, (int32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator_, (HServerQuery that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (HServerQuery__Boxed * __this, HServerQuery other));
IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (HServerQuery__Boxed * __this, HServerQuery other));
IL2CPP_REGISTER_METHOD(0x015FBB80, void, __cctor, ());
}
