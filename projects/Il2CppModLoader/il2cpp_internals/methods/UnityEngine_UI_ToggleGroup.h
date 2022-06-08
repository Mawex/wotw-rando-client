#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::ToggleGroup {
IL2CPP_REGISTER_METHOD(0x0267C900, void, __ctor, (ToggleGroup * __this));
IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_allowSwitchOff, (ToggleGroup * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_allowSwitchOff, (ToggleGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0267CA60, void, ValidateToggleIsInGroup, (ToggleGroup * __this, Toggle * toggle));
IL2CPP_REGISTER_METHODINFO(0x04789470, ToggleGroup_ValidateToggleIsInGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267CBD0, void, NotifyToggleOn, (ToggleGroup * __this, Toggle * toggle));
IL2CPP_REGISTER_METHOD(0x0267CEA0, void, UnregisterToggle, (ToggleGroup * __this, Toggle * toggle));
IL2CPP_REGISTER_METHOD(0x0267CF60, void, RegisterToggle, (ToggleGroup * __this, Toggle * toggle));
IL2CPP_REGISTER_METHOD(0x0267D020, bool, AnyTogglesOn, (ToggleGroup * __this));
IL2CPP_REGISTER_METHOD(0x0267D200, IEnumerable_1_UnityEngine_UI_Toggle_ *, ActiveToggles, (ToggleGroup * __this));
IL2CPP_REGISTER_METHOD(0x0267D3A0, void, SetAllTogglesOff, (ToggleGroup * __this));
IL2CPP_REGISTER_METHOD(0x0267D4B0, bool, _AnyTogglesOn_m__0, (Toggle * x));
IL2CPP_REGISTER_METHODINFO(0x04734880, ToggleGroup__AnyTogglesOn_m__0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267D4B0, bool, _ActiveToggles_m__1, (Toggle * x));
IL2CPP_REGISTER_METHODINFO(0x04731EF8, ToggleGroup__ActiveToggles_m__1__MethodInfo);
}
