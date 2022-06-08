#include <interception_macros.h>

namespace app::methods::DebugMenuToggler {
IL2CPP_REGISTER_METHOD(0x00DF7260, void, SetCurrentToggleOption, (DebugMenuToggler * __this, int32_t toggleOptionId));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Path, (DebugMenuToggler * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Name, (DebugMenuToggler * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_HelpText, (DebugMenuToggler * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (DebugMenuToggler * __this));
IL2CPP_REGISTER_METHOD(0x00DF77E0, String__Array *, get_ToggleOptions, (DebugMenuToggler * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_CurrentToggleOptionId, (DebugMenuToggler * __this));
IL2CPP_REGISTER_METHOD(0x00DF7A90, void, set_CurrentToggleOptionId, (DebugMenuToggler * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0094D720, void, __ctor, (DebugMenuToggler * __this));
}
