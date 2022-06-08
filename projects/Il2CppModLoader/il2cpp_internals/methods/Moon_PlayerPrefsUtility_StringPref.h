#include <interception_macros.h>

namespace app::methods::Moon::PlayerPrefsUtility::StringPref {
IL2CPP_REGISTER_METHOD(0x00C3DA40, void, __ctor, (StringPref * __this, String * _key, String * _defaultValue));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_value, (StringPref * __this));
IL2CPP_REGISTER_METHOD(0x00C3DAC0, void, set_value, (StringPref * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00C3DB20, String *, operator_, (StringPref * _pref));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, ToString, (StringPref * __this));
}
