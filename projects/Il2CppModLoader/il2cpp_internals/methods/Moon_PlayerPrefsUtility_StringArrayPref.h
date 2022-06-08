#include <interception_macros.h>

namespace app::methods::Moon::PlayerPrefsUtility::StringArrayPref {
IL2CPP_REGISTER_METHOD(0x00C3D4F0, void, __ctor, (StringArrayPref * __this, String * _key, String__Array * _defaultValue));
IL2CPP_REGISTER_METHOD(0x00C3D650, String *, GetStringFromArray, (StringArrayPref * __this, String__Array * array));
IL2CPP_REGISTER_METHOD(0x00C3D8D0, String__Array *, GetArrayFromString, (StringArrayPref * __this, String * val));
IL2CPP_REGISTER_METHOD(0x002FB950, String__Array *, get_value, (StringArrayPref * __this));
IL2CPP_REGISTER_METHOD(0x00C3D9B0, void, set_value, (StringArrayPref * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x00C3D9F0, String__Array *, operator_, (StringArrayPref * pref));
IL2CPP_REGISTER_METHOD(0x00C3DA10, String *, ToString, (StringArrayPref * __this));
}
