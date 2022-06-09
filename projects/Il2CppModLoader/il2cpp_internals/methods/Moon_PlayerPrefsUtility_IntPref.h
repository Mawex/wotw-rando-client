#include <interception_macros.h>

namespace app::methods::Moon_PlayerPrefsUtility::IntPref {
IL2CPP_REGISTER_METHOD(0x00C3D400, void, __ctor, (app::IntPref * this_ptr, app::String * _key, int32_t _default_value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_value, (app::IntPref * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C3D480, void, set_value, (app::IntPref * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x00C3D4A0, int32_t, operator_, (app::IntPref * _pref));
IL2CPP_REGISTER_METHOD(0x00C3D4C0, String *, ToString, (app::IntPref * this_ptr));
}
