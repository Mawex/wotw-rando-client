using namespace app;

namespace app::methods::Moon::PlayerPrefsUtility::BoolPref {
IL2CPP_REGISTER_METHOD(0x00C3D150, void, __ctor, (BoolPref * __this, String * _key, bool _defaultValue));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_value, (BoolPref * __this));
IL2CPP_REGISTER_METHOD(0x00C3D1D0, void, set_value, (BoolPref * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C3D1F0, bool, operator_, (BoolPref * _pref));
IL2CPP_REGISTER_METHOD(0x00C3D210, String *, ToString, (BoolPref * __this));
}
