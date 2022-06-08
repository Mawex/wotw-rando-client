#include <interception_macros.h>

namespace app::methods::CatlikeCoding::TextBox::TextBox {
IL2CPP_REGISTER_METHOD(0x01032580, int32_t, get_LineCount, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_DefaultText, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_TabSize, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01032610, void, set_TabSize, (TextBox * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TextFadeTime, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TextFadeTime, (TextBox * __this, float value));
IL2CPP_REGISTER_METHOD(0x01032640, void, SetStyleCollection, (TextBox * __this, TextStyleCollection * textStyleCollection));
IL2CPP_REGISTER_METHOD(0x010327C0, void, CacheRenderers, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x010329A0, int32_t, get_TextRendererCount, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01032AC0, CharMetaData, GetCharacterMetaData, (TextBox * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01032B30, void, ResetTextRenderers, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01032B40, TextBoxLine, GetLineInfo, (TextBox * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01032C10, float, GetLeftContour, (TextBox * __this, float height));
IL2CPP_REGISTER_METHOD(0x01032C40, float, GetRightContour, (TextBox * __this, float height));
IL2CPP_REGISTER_METHOD(0x01032C80, void, RenderText, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01032D70, void, SetText, (TextBox * __this, StringBuilder * text));
IL2CPP_REGISTER_METHOD(0x01032E90, void, SetText, (TextBox * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01032FB0, void, SetDigit, (TextBox * __this, int32_t digit));
IL2CPP_REGISTER_METHOD(0x010330B0, TextRenderer *, GetTextRenderer, (TextBox * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x010331F0, void, OnEnable, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01033200, void, Update, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x010332D0, void, CreateRendersIfThereAreNone, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01033450, void, RefreshText, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01033B50, float, GetContourOffset, (Vector2__Array * contourData, float height));
IL2CPP_REGISTER_METHOD(0x01033C60, Vector2, ComputeAnchorAndBounds, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01033CE0, void, SetText, (TextBox * __this, CharMetaData__Array * text, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01033D90, void, SetTextLength, (TextBox * __this, int32_t length));
IL2CPP_REGISTER_METHOD(0x01033F80, void, ApplyStyleStatement, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x010342A0, int32_t, ParseStyleStatementAt, (TextBox * __this, int32_t index, int32_t unstyledCharIndex, Vector2 caret));
IL2CPP_REGISTER_METHOD(0x01034400, void, GenerateMetaData, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01035290, LineDescent, FindLineDataForLastWord, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01035390, void, EraseVisibleCharacters, (TextBox * __this, int32_t startIndex, int32_t endIndex));
IL2CPP_REGISTER_METHOD(0x01035400, void, OverFlow, (TextBox * __this, int32_t overflowIndex));
IL2CPP_REGISTER_METHOD(0x01035550, void, AdjustBaseline, (TextBox * __this, int32_t currentCharIndex, float baselineAdjustment, Vector2 * caret, TextBoxLine * line));
IL2CPP_REGISTER_METHOD(0x010356A0, int32_t, FindWrapStart, (TextBox * __this, int32_t textIndex, int32_t firstCharIndex));
IL2CPP_REGISTER_METHOD(0x01035C00, void, AlignTextCenterOrRight, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01035E60, void, JustifyText, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01035FE0, void, JustifyLine, (TextBox * __this, int32_t first, int32_t last, float width));
IL2CPP_REGISTER_METHOD(0x010362A0, Rect, GetRealTextBoxLocalRect, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01036490, void, __ctor, (TextBox * __this));
IL2CPP_REGISTER_METHOD(0x01036A20, bool, _CreateRendersIfThereAreNone_g__NeedsCreation_61_0, (TextBox * __this));
}
