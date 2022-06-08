#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::FontData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x024AD000, FontData *, get_defaultFontData, ());
IL2CPP_REGISTER_METHOD(0x01F2AB40, Font *, get_font, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_font, (FontData * __this, Font * value));
IL2CPP_REGISTER_METHOD(0x024AD170, int32_t, get_fontSize, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_fontSize, (FontData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024AD180, FontStyle__Enum, get_fontStyle, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_fontStyle, (FontData * __this, FontStyle__Enum value));
IL2CPP_REGISTER_METHOD(0x024AD190, bool, get_bestFit, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_bestFit, (FontData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EB1C80, int32_t, get_minSize, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_minSize, (FontData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F19BD0, int32_t, get_maxSize, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_maxSize, (FontData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024AD1A0, TextAnchor__Enum, get_alignment, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x005C4000, void, set_alignment, (FontData * __this, TextAnchor__Enum value));
IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_alignByGeometry, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_alignByGeometry, (FontData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024AD1B0, bool, get_richText, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x0052A080, void, set_richText, (FontData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F30530, HorizontalWrapMode__Enum, get_horizontalOverflow, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_horizontalOverflow, (FontData * __this, HorizontalWrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F22020, VerticalWrapMode__Enum, get_verticalOverflow, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_verticalOverflow, (FontData * __this, VerticalWrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x024AD1C0, float, get_lineSpacing, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, set_lineSpacing, (FontData * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (FontData * __this));
IL2CPP_REGISTER_METHOD(0x024AD1D0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (FontData * __this));
}
