#include <interception_macros.h>

namespace app::methods::UnityEngine::GUIStyleState {
IL2CPP_REGISTER_METHOD(0x029F75C0, void, __ctor, (GUIStyleState * __this));
IL2CPP_REGISTER_METHOD(0x0231B8E0, void, __ctor, (GUIStyleState * __this, GUIStyle * sourceStyle, void * source));
IL2CPP_REGISTER_METHOD(0x029F7620, Texture2D *, get_background, (GUIStyleState * __this));
IL2CPP_REGISTER_METHOD(0x029F7670, void, set_background, (GUIStyleState * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x029F76D0, Color, get_textColor, (GUIStyleState * __this));
IL2CPP_REGISTER_METHOD(0x029F7750, void, set_textColor, (GUIStyleState * __this, Color value));
IL2CPP_REGISTER_METHOD(0x029F77B0, void *, Init, ());
IL2CPP_REGISTER_METHOD(0x029F7800, void, Cleanup, (GUIStyleState * __this));
IL2CPP_REGISTER_METHOD(0x029F7850, GUIStyleState *, GetGUIStyleState, (GUIStyle * sourceStyle, void * source));
IL2CPP_REGISTER_METHOD(0x029F79A0, void, Finalize, (GUIStyleState * __this));
IL2CPP_REGISTER_METHOD(0x029F7AC0, void, get_textColor_Injected, (GUIStyleState * __this, Color * ret));
IL2CPP_REGISTER_METHOD(0x029F7B20, void, set_textColor_Injected, (GUIStyleState * __this, Color * value));
}
