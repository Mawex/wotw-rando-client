#include <interception_macros.h>

namespace app::methods::Moon::PlayerPrefsUtility::IntPref {
IL2CPP_REGISTER_METHOD(0x00C3D400, void, __ctor, (IntPref * __this, String * _key, int32_t _defaultValue));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_value, (IntPref * __this));
IL2CPP_REGISTER_METHOD(0x00C3D480, void, set_value, (IntPref * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00C3D4A0, int32_t, operator_, (IntPref * _pref));
IL2CPP_REGISTER_METHOD(0x00C3D4C0, String *, ToString, (IntPref * __this));
}
