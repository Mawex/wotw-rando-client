#include <interception_macros.h>

namespace app::methods::UnityEngine::GUILayoutEntry {
IL2CPP_REGISTER_METHOD(0x029E6F30, void, __ctor, (GUILayoutEntry * __this, float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle * _style));
IL2CPP_REGISTER_METHOD(0x029E7070, void, __ctor, (GUILayoutEntry * __this, float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle * _style, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x01F1A590, GUIStyle *, get_style, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E71A0, void, set_style, (GUILayoutEntry * __this, GUIStyle * value));
IL2CPP_REGISTER_METHOD(0x029E71C0, int32_t, get_marginLeft, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E7240, int32_t, get_marginRight, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E72C0, int32_t, get_marginTop, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E7340, int32_t, get_marginBottom, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E73C0, int32_t, get_marginHorizontal, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E7400, int32_t, get_marginVertical, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CalcWidth, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CalcHeight, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E7440, void, SetHorizontal, (GUILayoutEntry * __this, float x, float width));
IL2CPP_REGISTER_METHOD(0x029E7450, void, SetVertical, (GUILayoutEntry * __this, float y, float height));
IL2CPP_REGISTER_METHOD(0x029E7460, void, ApplyStyleSettings, (GUILayoutEntry * __this, GUIStyle * style));
IL2CPP_REGISTER_METHOD(0x029E75F0, void, ApplyOptions, (GUILayoutEntry * __this, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029E79E0, String *, ToString, (GUILayoutEntry * __this));
IL2CPP_REGISTER_METHOD(0x029E8260, void, __cctor, ());
}
