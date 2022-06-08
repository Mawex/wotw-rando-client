#include <interception_macros.h>

namespace app::methods::CleverValueSliderHideMenu {
IL2CPP_REGISTER_METHOD(0x012C4840, float, get_Value, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHODINFO(0x047552E8, CleverValueSliderHideMenu_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C4890, void, set_Value, (CleverValueSliderHideMenu * __this, float value));
IL2CPP_REGISTER_METHODINFO(0x04742678, CleverValueSliderHideMenu_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C1EE0, bool, get_IsHighlightVisible, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C48E0, void, set_IsHighlightVisible, (CleverValueSliderHideMenu * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012C4B90, bool, get_ShouldSKipUiBackgroundBlur, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C4BB0, void, OnEnable, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C4DF0, void, OnDisable, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C4FC0, void, OnAwake, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C5200, void, FixedUpdate, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateValue, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C52B0, void, EnableBackground, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C5620, void, DisableBackground, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C5A90, void, BackPressed, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F480, CleverValueSliderHideMenu_BackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBackgroundEnabled, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBackgroundDisabled, (CleverValueSliderHideMenu * __this));
IL2CPP_REGISTER_METHOD(0x012C5B70, void, __ctor, (CleverValueSliderHideMenu * __this));
}
