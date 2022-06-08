#include <interception_macros.h>

namespace app::methods::RECT {
IL2CPP_REGISTER_METHOD(0x0011FC50, void, __ctor, (RECT__Boxed * __this, int32_t left, int32_t top, int32_t right, int32_t bottom));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_X, (RECT__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FC70, void, set_X, (RECT__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_Y, (RECT__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FC80, void, set_Y, (RECT__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0011FC90, int32_t, get_Height, (RECT__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FCA0, void, set_Height, (RECT__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0011FCB0, int32_t, get_Width, (RECT__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FCC0, void, set_Width, (RECT__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00E96EE0, bool, operator___, (RECT r1, RECT r2));
IL2CPP_REGISTER_METHOD(0x00E96F20, bool, operator___, (RECT r1, RECT r2));
IL2CPP_REGISTER_METHOD(0x0011FCD0, bool, Equals, (RECT__Boxed * __this, RECT r));
IL2CPP_REGISTER_METHOD(0x0011FD10, bool, Equals, (RECT__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0011FE20, String *, ToString, (RECT__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FE30, int32_t, GetHashCode, (RECT__Boxed * __this));
}
