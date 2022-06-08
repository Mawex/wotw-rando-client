#include <interception_macros.h>

namespace app::methods::UnityEngine::GUIContent {
IL2CPP_REGISTER_METHOD(0x029E2910, void, __ctor, (GUIContent * __this));
IL2CPP_REGISTER_METHOD(0x029E29B0, void, __ctor, (GUIContent * __this, String * text));
IL2CPP_REGISTER_METHOD(0x029E2AB0, void, __ctor, (GUIContent * __this, String * text, Texture * image, String * tooltip));
IL2CPP_REGISTER_METHOD(0x029E2B50, void, __ctor, (GUIContent * __this, GUIContent * src));
IL2CPP_REGISTER_METHOD(0x01F2AB40, String *, get_text, (GUIContent * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_text, (GUIContent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_image, (GUIContent * __this, Texture * value));
IL2CPP_REGISTER_METHOD(0x01704A60, String *, get_tooltip, (GUIContent * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_tooltip, (GUIContent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x029E2C20, GUIContent *, Temp, (String * t));
IL2CPP_REGISTER_METHOD(0x029E2D20, GUIContent *, Temp, (Texture * i));
IL2CPP_REGISTER_METHOD(0x029E2E20, void, ClearStaticCache, ());
IL2CPP_REGISTER_METHOD(0x029E2FA0, void, __cctor, ());
}
