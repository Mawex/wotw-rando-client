#include <interception_macros.h>

namespace app::methods::DebugMenuToggler {
IL2CPP_REGISTER_METHOD(0x00DF7260, void, SetCurrentToggleOption, (app::DebugMenuToggler * this_ptr, int32_t toggle_option_id));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Path, (app::DebugMenuToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Name, (app::DebugMenuToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_HelpText, (app::DebugMenuToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::DebugMenuToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00DF77E0, String__Array *, get_ToggleOptions, (app::DebugMenuToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_CurrentToggleOptionId, (app::DebugMenuToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00DF7A90, void, set_CurrentToggleOptionId, (app::DebugMenuToggler * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x0094D720, void, __ctor, (app::DebugMenuToggler * this_ptr));
}
