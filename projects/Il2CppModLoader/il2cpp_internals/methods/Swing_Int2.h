#include <interception_macros.h>

namespace app::methods::Swing::Int2 {
    IL2CPP_REGISTER_METHOD(0x00115520, void, __ctor, (app::Int2__Boxed * this_ptr, int32_t x, int32_t y));
    IL2CPP_REGISTER_METHOD(0x00115520, void, Set, (app::Int2__Boxed * this_ptr, int32_t new_x, int32_t new_y));
    IL2CPP_REGISTER_METHOD(0x0182AFF0, bool, operator____1, (app::Int2 lhs, app::Int2 rhs));
    IL2CPP_REGISTER_METHOD(0x0182B010, bool, operator____2, (app::Int2 lhs, app::Int2 rhs));
    IL2CPP_REGISTER_METHOD(0x0014B310, bool, Equals_1, (app::Int2__Boxed * this_ptr, app::Int2 other));
    IL2CPP_REGISTER_METHOD(0x0014B330, bool, Equals_2, (app::Int2__Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0014B340, int32_t, GetHashCode, (app::Int2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0182B110, app::Int2, operator___1, (app::Int2 a, app::Int2 b));
    IL2CPP_REGISTER_METHOD(0x0182B130, app::Int2, operator___2, (app::Int2 a, app::Int2 b));
    IL2CPP_REGISTER_METHOD(0x0182B150, app::Int2, operator___3, (app::Int2 a));
    IL2CPP_REGISTER_METHOD(0x0182B170, app::Int2, operator___4, (app::Int2 a, int32_t d));
    IL2CPP_REGISTER_METHOD(0x0182B190, app::Int2, operator___5, (int32_t d, app::Int2 a));
    IL2CPP_REGISTER_METHOD(0x0182B1B0, app::Int2, operator___6, (app::Int2 a, app::Int2 b));
    IL2CPP_REGISTER_METHOD(0x0182B1D0, app::Vector2, operator___7, (app::Int2 a, float d));
    IL2CPP_REGISTER_METHOD(0x0182B200, app::Vector2, operator___8, (float d, app::Int2 a));
    IL2CPP_REGISTER_METHOD(0x0182B230, app::Vector2, operator___9, (app::Int2 a, float d));
    IL2CPP_REGISTER_METHOD(0x0182B260, app::Vector2, operator___10, (float f, app::Int2 d));
    IL2CPP_REGISTER_METHOD(0x0182B290, app::Vector2, operator___11, (app::Int2 a, app::Int2 b));
    IL2CPP_REGISTER_METHOD(0x0182B2D0, app::Int2, Round, (app::Vector2 v));
    IL2CPP_REGISTER_METHOD(0x0182B390, app::Int2, operator__1, (app::Vector2 v));
    IL2CPP_REGISTER_METHOD(0x0182B3B0, app::Vector2, operator__2, (app::Int2 v));
    IL2CPP_REGISTER_METHOD(0x0182B3D0, app::Int2, operator__3, (app::Vector3 v));
    IL2CPP_REGISTER_METHOD(0x0182B400, app::Vector3, operator__4, (app::Int2 v));
    IL2CPP_REGISTER_METHOD(0x0014B350, int32_t, get_Item, (app::Int2__Boxed * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x047882F0, Int2_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0014B420, void, set_Item, (app::Int2__Boxed * this_ptr, int32_t index, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04712D28, Int2_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0014B500, float, get_magnitude, (app::Int2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0014B5C0, int32_t, get_sqrMagnitude, (app::Int2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0014B5D0, app::String *, ToString_1, (app::Int2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0014B6E0, app::String *, ToString_2, (app::Int2__Boxed * this_ptr, app::String * format));
    IL2CPP_REGISTER_METHOD(0x0182B430, app::Int2, get_zero, ());
    IL2CPP_REGISTER_METHOD(0x0182B440, app::Int2, get_one, ());
    IL2CPP_REGISTER_METHOD(0x0182B460, app::Int2, get_up, ());
    IL2CPP_REGISTER_METHOD(0x0182B480, app::Int2, get_down, ());
    IL2CPP_REGISTER_METHOD(0x0182B4A0, app::Int2, get_left, ());
    IL2CPP_REGISTER_METHOD(0x0182B4C0, app::Int2, get_right, ());
    IL2CPP_REGISTER_METHOD(0x0182B4D0, app::Int2, get_maxValue, ());
    IL2CPP_REGISTER_METHOD(0x0182B4F0, app::Int2, get_minValue, ());
}
