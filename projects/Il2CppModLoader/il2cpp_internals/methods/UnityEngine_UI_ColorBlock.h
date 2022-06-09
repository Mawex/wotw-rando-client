#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::ColorBlock {
IL2CPP_REGISTER_METHOD(0x001D9980, Color, get_normalColor, (app::ColorBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00120520, void, set_normalColor, (app::ColorBlock__Boxed * this_ptr, app::Color value));
IL2CPP_REGISTER_METHOD(0x001D9990, Color, get_highlightedColor, (app::ColorBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D99A0, void, set_highlightedColor, (app::ColorBlock__Boxed * this_ptr, app::Color value));
IL2CPP_REGISTER_METHOD(0x001D99B0, Color, get_pressedColor, (app::ColorBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D99C0, void, set_pressedColor, (app::ColorBlock__Boxed * this_ptr, app::Color value));
IL2CPP_REGISTER_METHOD(0x001D99D0, Color, get_disabledColor, (app::ColorBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D99E0, void, set_disabledColor, (app::ColorBlock__Boxed * this_ptr, app::Color value));
IL2CPP_REGISTER_METHOD(0x001D99F0, float, get_colorMultiplier, (app::ColorBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D9A00, void, set_colorMultiplier, (app::ColorBlock__Boxed * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x001D9A10, float, get_fadeDuration, (app::ColorBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D9A20, void, set_fadeDuration, (app::ColorBlock__Boxed * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01F2FF00, ColorBlock, get_defaultColorBlock, ());
IL2CPP_REGISTER_METHOD(0x001D9A30, bool, Equals_1, (app::ColorBlock__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x001D9A40, bool, Equals_2, (app::ColorBlock__Boxed * this_ptr, app::ColorBlock other));
IL2CPP_REGISTER_METHOD(0x01F30310, bool, operator____1, (app::ColorBlock point1, app::ColorBlock point2));
IL2CPP_REGISTER_METHOD(0x01F30360, bool, operator____2, (app::ColorBlock point1, app::ColorBlock point2));
IL2CPP_REGISTER_METHOD(0x001D9A90, int32_t, GetHashCode, (app::ColorBlock__Boxed * this_ptr));
}
