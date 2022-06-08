#include <interception_macros.h>

namespace app::methods::Moon::ComboSystem::ComboInput {
IL2CPP_REGISTER_METHOD(0x00CC59C0, void, __ctor, (ComboInput * __this, InputDirection__Enum direction, AbilityType__Enum action, ButtonInputType__Enum inputType, bool facingLeft));
IL2CPP_REGISTER_METHOD(0x0052B590, AbilityType__Enum, get_ActionInput, (ComboInput * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, InputDirection__Enum, get_InputDirection, (ComboInput * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, ButtonInputType__Enum, get_ButtonInputType, (ComboInput * __this));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_StartFacingLeft, (ComboInput * __this));
IL2CPP_REGISTER_METHOD(0x00CC59F0, bool, Equals, (ComboInput * __this, ComboInput * other));
IL2CPP_REGISTER_METHOD(0x00CC5A20, bool, Equals, (ComboInput * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00CC5B30, int32_t, GetHashCode, (ComboInput * __this));
}
