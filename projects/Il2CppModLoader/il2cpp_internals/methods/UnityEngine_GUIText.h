#include <interception_macros.h>

namespace app::methods::UnityEngine::GUIText {
IL2CPP_REGISTER_METHOD(0x0319B000, String *, get_text, (GUIText * __this));
IL2CPP_REGISTER_METHOD(0x0319B050, void, set_text, (GUIText * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0319B0B0, void, set_fontSize, (GUIText * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0319B110, void, set_fontStyle, (GUIText * __this, FontStyle__Enum value));
}
