#include <interception_macros.h>

namespace app::methods::Moon::UI::Text {
IL2CPP_REGISTER_METHOD(0x01184DB0, int32_t, get_LineCount, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, String *, get_DefaultText, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x008663D0, float, get_TabSize, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01184E40, void, set_TabSize, (Text_1 * __this, float value));
IL2CPP_REGISTER_METHOD(0x01184E70, void, SetStyleCollection, (Text_1 * __this, TextStyleCollection * textStyleCollection));
IL2CPP_REGISTER_METHOD(0x01184FE0, int32_t, get_TextRendererCount, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x011850F0, void, RefreshSprite, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01185490, CharMetaData, GetCharacterMetaData, (Text_1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01185500, void, RenderText, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x011855F0, float, GetLeftContour, (Text_1 * __this, float height));
IL2CPP_REGISTER_METHOD(0x01185630, float, GetRightContour, (Text_1 * __this, float height));
IL2CPP_REGISTER_METHOD(0x01185680, void, CreateRendersIfThereAreNone, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01033B50, float, GetContourOffset, (Vector2__Array * contourData, float height));
IL2CPP_REGISTER_METHOD(0x011856D0, void, AlignTextCenterOrRight, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01185930, Vector2, ComputeAnchorAndBounds, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x011859C0, void, RefreshText, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01186030, void, ApplyStyleStatement, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01186350, int32_t, ParseStyleStatementAt, (Text_1 * __this, int32_t index, int32_t unstyledCharIndex, Vector2 caret));
IL2CPP_REGISTER_METHOD(0x011864B0, void, OverFlow, (Text_1 * __this, int32_t overflowIndex));
IL2CPP_REGISTER_METHOD(0x01186600, void, AdjustBaseline, (Text_1 * __this, int32_t currentCharIndex, float baselineAdjustment, Vector2 * caret, TextBoxLine_1 * line));
IL2CPP_REGISTER_METHOD(0x01186750, LineDescent, FindLineDataForLastWord, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01186850, void, GenerateMetaData, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x01187700, void, EraseVisibleCharacters, (Text_1 * __this, int32_t startIndex, int32_t endIndex));
IL2CPP_REGISTER_METHOD(0x01187770, int32_t, FindWrapStart, (Text_1 * __this, int32_t textIndex, int32_t firstCharIndex));
IL2CPP_REGISTER_METHOD(0x01187C90, TextBoxLine_1, GetLineInfo, (Text_1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01187D60, void, SetText, (Text_1 * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01187E80, void, SetText, (Text_1 * __this, CharMetaData__Array * text, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01187F30, void, SetTextLength, (Text_1 * __this, int32_t length));
IL2CPP_REGISTER_METHOD(0x01188120, void, JustifyText, (Text_1 * __this));
IL2CPP_REGISTER_METHOD(0x011882A0, void, JustifyLine, (Text_1 * __this, int32_t first, int32_t last, float width));
IL2CPP_REGISTER_METHOD(0x01188560, void, __ctor, (Text_1 * __this));
}
