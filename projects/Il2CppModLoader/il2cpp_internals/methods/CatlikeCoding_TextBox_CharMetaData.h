#include <interception_macros.h>

namespace app::methods::CatlikeCoding::TextBox::CharMetaData {
IL2CPP_REGISTER_METHOD(0x00123DF0, String *, ToString, (CharMetaData__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011E1B0, void, EraseIfVisible, (CharMetaData__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00123E00, void, RenderIfVisible, (CharMetaData__Boxed * __this, Vector2 offset, int32_t index));
IL2CPP_REGISTER_METHOD(0x0011E290, void, AdjustPositionInBox, (CharMetaData__Boxed * __this, Vector2 delta));
IL2CPP_REGISTER_METHOD(0x0011E2C0, void, AdjustPositionInBox, (CharMetaData__Boxed * __this, float xDelta, float yDelta));
IL2CPP_REGISTER_METHOD(0x0011E2E0, uint16_t, MarkAsStyleStatement, (CharMetaData__Boxed * __this, int32_t unstyledIndex, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0011E310, void, MarkAsWhitespace, (CharMetaData__Boxed * __this, int32_t unstyledIndex, Vector2 position, AppliedTextStyle * style));
IL2CPP_REGISTER_METHOD(0x00123E10, BitmapFontChar *, MarkAsVisible, (CharMetaData__Boxed * __this, int32_t unstyledIndex, Vector2 position, AppliedTextStyle * style));
IL2CPP_REGISTER_METHOD(0x00123E20, float, get_After, (CharMetaData__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00123E30, float, get_HorizontalMiddle, (CharMetaData__Boxed * __this));
}
