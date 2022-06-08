using namespace app;

namespace app::methods::UnityEngine::UI::ColorBlock {
IL2CPP_REGISTER_METHOD(0x001D9980, Color, get_normalColor, (ColorBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120520, void, set_normalColor, (ColorBlock__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D9990, Color, get_highlightedColor, (ColorBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D99A0, void, set_highlightedColor, (ColorBlock__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D99B0, Color, get_pressedColor, (ColorBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D99C0, void, set_pressedColor, (ColorBlock__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D99D0, Color, get_disabledColor, (ColorBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D99E0, void, set_disabledColor, (ColorBlock__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D99F0, float, get_colorMultiplier, (ColorBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9A00, void, set_colorMultiplier, (ColorBlock__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9A10, float, get_fadeDuration, (ColorBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9A20, void, set_fadeDuration, (ColorBlock__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2FF00, ColorBlock, get_defaultColorBlock, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x001D9A30, bool, Equals, (ColorBlock__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001D9A40, bool, Equals, (ColorBlock__Boxed * __this, ColorBlock other));
IL2CPP_REGISTER_METHOD(0x01F30310, bool, operator___, (ColorBlock point1, ColorBlock point2));
IL2CPP_REGISTER_METHOD(0x01F30360, bool, operator___, (ColorBlock point1, ColorBlock point2));
IL2CPP_REGISTER_METHOD(0x001D9A90, int32_t, GetHashCode, (ColorBlock__Boxed * __this));
}
