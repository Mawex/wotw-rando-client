#include <interception_macros.h>

namespace app::methods::PoolToggler {
IL2CPP_REGISTER_METHOD(0x00C60A90, String *, get_Path, (PoolToggler * __this));
IL2CPP_REGISTER_METHOD(0x00C60B10, String *, get_Name, (PoolToggler * __this));
IL2CPP_REGISTER_METHOD(0x00C60B90, String *, get_HelpText, (PoolToggler * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (PoolToggler * __this));
IL2CPP_REGISTER_METHOD(0x00C60C10, String__Array *, get_ToggleOptions, (PoolToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (PoolToggler * __this));
IL2CPP_REGISTER_METHOD(0x00C60D50, void, set_CurrentToggleOptionId, (PoolToggler * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (PoolToggler * __this));
}
