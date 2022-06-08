#include <interception_macros.h>

namespace app::methods::Swing::Int2 {
IL2CPP_REGISTER_METHOD(0x00115520, void, __ctor, (Int2__Boxed * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00115520, void, Set, (Int2__Boxed * __this, int32_t newX, int32_t newY));
IL2CPP_REGISTER_METHOD(0x0182AFF0, bool, operator___, (Int2 lhs, Int2 rhs));
IL2CPP_REGISTER_METHOD(0x0182B010, bool, operator___, (Int2 lhs, Int2 rhs));
IL2CPP_REGISTER_METHOD(0x0014B310, bool, Equals, (Int2__Boxed * __this, Int2 other));
IL2CPP_REGISTER_METHOD(0x0014B330, bool, Equals, (Int2__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0014B340, int32_t, GetHashCode, (Int2__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0182B110, Int2, operator__, (Int2 a, Int2 b));
IL2CPP_REGISTER_METHOD(0x0182B130, Int2, operator__, (Int2 a, Int2 b));
IL2CPP_REGISTER_METHOD(0x0182B150, Int2, operator__, (Int2 a));
IL2CPP_REGISTER_METHOD(0x0182B170, Int2, operator__, (Int2 a, int32_t d));
IL2CPP_REGISTER_METHOD(0x0182B190, Int2, operator__, (int32_t d, Int2 a));
IL2CPP_REGISTER_METHOD(0x0182B1B0, Int2, operator__, (Int2 a, Int2 b));
IL2CPP_REGISTER_METHOD(0x0182B1D0, Vector2, operator__, (Int2 a, float d));
IL2CPP_REGISTER_METHOD(0x0182B200, Vector2, operator__, (float d, Int2 a));
IL2CPP_REGISTER_METHOD(0x0182B230, Vector2, operator__, (Int2 a, float d));
IL2CPP_REGISTER_METHOD(0x0182B260, Vector2, operator__, (float f, Int2 d));
IL2CPP_REGISTER_METHOD(0x0182B290, Vector2, operator__, (Int2 a, Int2 b));
IL2CPP_REGISTER_METHOD(0x0182B2D0, Int2, Round, (Vector2 v));
IL2CPP_REGISTER_METHOD(0x0182B390, Int2, operator_, (Vector2 v));
IL2CPP_REGISTER_METHOD(0x0182B3B0, Vector2, operator_, (Int2 v));
IL2CPP_REGISTER_METHOD(0x0182B3D0, Int2, operator_, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x0182B400, Vector3, operator_, (Int2 v));
IL2CPP_REGISTER_METHOD(0x0014B350, int32_t, get_Item, (Int2__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047882F0, Int2_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0014B420, void, set_Item, (Int2__Boxed * __this, int32_t index, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04712D28, Int2_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0014B500, float, get_magnitude, (Int2__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B5C0, int32_t, get_sqrMagnitude, (Int2__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B5D0, String *, ToString, (Int2__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B6E0, String *, ToString, (Int2__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x0182B430, Int2, get_zero, ());
IL2CPP_REGISTER_METHOD(0x0182B440, Int2, get_one, ());
IL2CPP_REGISTER_METHOD(0x0182B460, Int2, get_up, ());
IL2CPP_REGISTER_METHOD(0x0182B480, Int2, get_down, ());
IL2CPP_REGISTER_METHOD(0x0182B4A0, Int2, get_left, ());
IL2CPP_REGISTER_METHOD(0x0182B4C0, Int2, get_right, ());
IL2CPP_REGISTER_METHOD(0x0182B4D0, Int2, get_maxValue, ());
IL2CPP_REGISTER_METHOD(0x0182B4F0, Int2, get_minValue, ());
}
