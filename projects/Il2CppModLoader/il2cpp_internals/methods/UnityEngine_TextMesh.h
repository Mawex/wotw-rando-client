#include <interception_macros.h>

namespace app::methods::UnityEngine::TextMesh {
IL2CPP_REGISTER_METHOD(0x0319D520, String *, get_text, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D570, void, set_text, (TextMesh * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0319D5D0, Font *, get_font, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D620, void, set_font, (TextMesh * __this, Font * value));
IL2CPP_REGISTER_METHOD(0x0319D680, int32_t, get_fontSize, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D6D0, void, set_fontSize, (TextMesh * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0319D730, float, get_offsetZ, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D780, void, set_offsetZ, (TextMesh * __this, float value));
IL2CPP_REGISTER_METHOD(0x0319D7E0, TextAlignment__Enum, get_alignment, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D830, void, set_alignment, (TextMesh * __this, TextAlignment__Enum value));
IL2CPP_REGISTER_METHOD(0x0319D890, TextAnchor__Enum, get_anchor, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D8E0, void, set_anchor, (TextMesh * __this, TextAnchor__Enum value));
IL2CPP_REGISTER_METHOD(0x0319D940, float, get_characterSize, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319D990, void, set_characterSize, (TextMesh * __this, float value));
IL2CPP_REGISTER_METHOD(0x0319D9F0, float, get_lineSpacing, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319DA40, void, set_lineSpacing, (TextMesh * __this, float value));
IL2CPP_REGISTER_METHOD(0x0319DAA0, float, get_tabSize, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319DAF0, void, set_tabSize, (TextMesh * __this, float value));
IL2CPP_REGISTER_METHOD(0x0319DB50, bool, get_richText, (TextMesh * __this));
IL2CPP_REGISTER_METHOD(0x0319DBA0, void, set_richText, (TextMesh * __this, bool value));
}
