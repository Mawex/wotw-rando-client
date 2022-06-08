#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::CoroutineTween::FloatTween {
IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_startValue, (FloatTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B30, void, set_startValue, (FloatTween__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_targetValue, (FloatTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B40, void, set_targetValue, (FloatTween__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9BB0, float, get_duration, (FloatTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B50, void, set_duration, (FloatTween__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9BC0, bool, get_ignoreTimeScale, (FloatTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9BD0, void, set_ignoreTimeScale, (FloatTween__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x001D9BE0, void, TweenValue, (FloatTween__Boxed * __this, float floatPercentage));
IL2CPP_REGISTER_METHOD(0x001D9BF0, void, AddOnChangedCallback, (FloatTween__Boxed * __this, UnityAction_1_System_Single_ * callback));
IL2CPP_REGISTER_METHOD(0x001D9BC0, bool, GetIgnoreTimescale, (FloatTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9BB0, float, GetDuration, (FloatTween__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9B60, bool, ValidTarget, (FloatTween__Boxed * __this));
}
