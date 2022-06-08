using namespace app;

namespace app::methods::Moon::PlayerPrefsUtility::FloatPref {
IL2CPP_REGISTER_METHOD(0x00C3D220, void, __ctor, (FloatPref * __this, String * _key, float _defaultValue));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_value, (FloatPref * __this));
IL2CPP_REGISTER_METHOD(0x00C3D2A0, void, set_value, (FloatPref * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C3D3B0, float, operator_, (FloatPref * _pref));
IL2CPP_REGISTER_METHOD(0x00C3D3D0, String *, ToString, (FloatPref * __this));
}
