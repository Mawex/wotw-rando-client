#include <interception_macros.h>

namespace app::methods::UnityEngine::Color {
IL2CPP_REGISTER_METHOD(0x00121740, void, __ctor_1, (app::Color__Boxed * this_ptr, float r, float g, float b, float a));
IL2CPP_REGISTER_METHOD(0x001EBCA0, void, __ctor_2, (app::Color__Boxed * this_ptr, float r, float g, float b));
IL2CPP_REGISTER_METHOD(0x001EBCC0, String *, ToString, (app::Color__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EBCD0, int32_t, GetHashCode, (app::Color__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EBCE0, bool, Equals_1, (app::Color__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x001EBCF0, bool, Equals_2, (app::Color__Boxed * this_ptr, app::Color other));
IL2CPP_REGISTER_METHOD(0x02427D30, Color, operator___1, (app::Color a, app::Color b));
IL2CPP_REGISTER_METHOD(0x02427D90, Color, operator___2, (app::Color a, app::Color b));
IL2CPP_REGISTER_METHOD(0x02427DF0, Color, operator___3, (app::Color a, app::Color b));
IL2CPP_REGISTER_METHOD(0x02427E50, Color, operator___4, (app::Color a, float b));
IL2CPP_REGISTER_METHOD(0x02427EA0, Color, operator___5, (float b, app::Color a));
IL2CPP_REGISTER_METHOD(0x02427EF0, Color, operator___6, (app::Color a, float b));
IL2CPP_REGISTER_METHOD(0x02427F40, bool, operator____1, (app::Color lhs, app::Color rhs));
IL2CPP_REGISTER_METHOD(0x02428060, bool, operator____2, (app::Color lhs, app::Color rhs));
IL2CPP_REGISTER_METHOD(0x02428090, Color, Lerp, (app::Color a, app::Color b, float t));
IL2CPP_REGISTER_METHOD(0x024281D0, Color, get_red, ());
IL2CPP_REGISTER_METHOD(0x024281E0, Color, get_green, ());
IL2CPP_REGISTER_METHOD(0x024281F0, Color, get_blue, ());
IL2CPP_REGISTER_METHOD(0x00F87B80, Color, get_white, ());
IL2CPP_REGISTER_METHOD(0x02428200, Color, get_black, ());
IL2CPP_REGISTER_METHOD(0x02428210, Color, get_yellow, ());
IL2CPP_REGISTER_METHOD(0x02428220, Color, get_cyan, ());
IL2CPP_REGISTER_METHOD(0x02428230, Color, get_magenta, ());
IL2CPP_REGISTER_METHOD(0x02428240, Color, get_gray, ());
IL2CPP_REGISTER_METHOD(0x02428240, Color, get_grey, ());
IL2CPP_REGISTER_METHOD(0x00F87B90, Color, get_clear, ());
IL2CPP_REGISTER_METHOD(0x001EBD10, float, get_grayscale, (app::Color__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EBD50, Color, get_linear, (app::Color__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EBF20, Color, get_gamma, (app::Color__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EC0F0, float, get_maxColorComponent, (app::Color__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x02428250, Vector4, operator__1, (app::Color c));
IL2CPP_REGISTER_METHOD(0x02428250, Color, operator__2, (app::Vector4 v));
IL2CPP_REGISTER_METHOD(0x001EC1B0, float, get_Item, (app::Color__Boxed * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0472BDC0, Color_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02428370, void, RGBToHSV, (app::Color rgb_color, app::float * H, app::float * S, app::float * V));
IL2CPP_REGISTER_METHOD(0x024283F0, void, RGBToHSVHelper, (float offset, float dominantcolor, float colorone, float colortwo, app::float * H, app::float * S, app::float * V));
IL2CPP_REGISTER_METHOD(0x02428490, Color, HSVToRGB_1, (float H, float S, float V));
IL2CPP_REGISTER_METHOD(0x024284C0, Color, HSVToRGB_2, (float H, float S, float V, bool hdr));
}
