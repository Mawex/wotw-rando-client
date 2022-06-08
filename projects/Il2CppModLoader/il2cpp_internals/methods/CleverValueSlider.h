#include <interception_macros.h>

namespace app::methods::CleverValueSlider {
IL2CPP_REGISTER_METHOD(0x012C19C0, float, get_Step, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x01176330, void, set_Step, (CleverValueSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x0061BAF0, float, get_AccelerationRampTime, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C1A70, float, get_NormalizedValue, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C1C20, void, set_NormalizedValue, (CleverValueSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x012C1D90, float, get_NormalizedDefaultValue, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C1E80, float, get_MouseDragStepParameter, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B39320, bool, get_IsActive, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C1EA0, void, set_IsActive, (CleverValueSlider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012C1EC0, bool, get_IsVisible, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C1ED0, void, set_IsVisible, (CleverValueSlider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012C1EE0, bool, get_IsHighlightVisible, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C1EF0, void, set_IsHighlightVisible, (CleverValueSlider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012C2090, void, Awake, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B99730, void, OnEnable, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeEntered, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C20B0, void, EnterInGroup, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C21C0, void, PlayDownSound, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C2510, void, PlayUpSound, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C2860, int32_t, get_HoldAccelerationMultiplier, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C2880, float, get_AcceleratedStep, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C29E0, void, Start, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C29F0, void, FixedUpdate, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C3C50, void, UpdateSlider, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C3EC0, void, SetSliderDefaultValueBar, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C4160, Rect, get_DotRect, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C4320, Rect, get_SliderRect, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C4330, void, CacheSliderBounds, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C4550, bool, OnMenuItemChangedInGroup, (CleverValueSlider * __this, CleverMenuItemGroup * group));
IL2CPP_REGISTER_METHOD(0x012C4650, void, RefreshDisplayedValue, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x012C4750, String *, GetValueToDisplay, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyValueOnSliderReleased, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateStep, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHOD(0x00420240, void, _PlayDownSound_b__54_0, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E830, CleverValueSlider__PlayDownSound_b__54_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420240, void, _PlayUpSound_b__55_0, (CleverValueSlider * __this));
IL2CPP_REGISTER_METHODINFO(0x04731790, CleverValueSlider__PlayUpSound_b__55_0__MethodInfo);
}
