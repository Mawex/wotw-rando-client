#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::CoroutineTween::ColorTween {
IL2CPP_REGISTER_METHOD(0x001D9AC0, Color, get_startColor, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9AD0, void, set_startColor, (ColorTween__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D9AE0, Color, get_targetColor, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9AF0, void, set_targetColor, (ColorTween__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D9B00, ColorTween_ColorTweenMode__Enum, get_tweenMode, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001CF280, void, set_tweenMode, (ColorTween__Boxed * __this, ColorTween_ColorTweenMode__Enum value));
IL2CPP_REGISTER_METHOD(0x001D9B10, float, get_duration, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B90, void, set_duration, (ColorTween__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9B20, bool, get_ignoreTimeScale, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9B30, void, set_ignoreTimeScale, (ColorTween__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x001D9B40, void, TweenValue, (ColorTween__Boxed * __this, float floatPercentage));
IL2CPP_REGISTER_METHOD(0x001D9B50, void, AddOnChangedCallback, (ColorTween__Boxed * __this, UnityAction_1_UnityEngine_Color_ * callback));
IL2CPP_REGISTER_METHOD(0x001D9B20, bool, GetIgnoreTimescale, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9B10, float, GetDuration, (ColorTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9B60, bool, ValidTarget, (ColorTween__Boxed * __this));
}
