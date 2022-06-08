#include <interception_macros.h>

namespace app::methods::Moon::UI::CharMetaData {
IL2CPP_REGISTER_METHOD(0x0011E1B0, void, EraseIfVisible, (CharMetaData_1__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011E1E0, void, RenderIfVisible, (CharMetaData_1__Boxed * __this, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x0011E290, void, AdjustPositionInBox, (CharMetaData_1__Boxed * __this, Vector2 delta));
IL2CPP_REGISTER_METHOD(0x0011E2C0, void, AdjustPositionInBox, (CharMetaData_1__Boxed * __this, float xDelta, float yDelta));
IL2CPP_REGISTER_METHOD(0x0011E2E0, uint16_t, MarkAsStyleStatement, (CharMetaData_1__Boxed * __this, int32_t unstyledIndex, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0011E310, void, MarkAsWhitespace, (CharMetaData_1__Boxed * __this, int32_t unstyledIndex, Vector2 position, AppliedTextStyle_1 * style));
IL2CPP_REGISTER_METHOD(0x0011E350, BitmapFontChar_1 *, MarkAsVisible, (CharMetaData_1__Boxed * __this, int32_t unstyledIndex, Vector2 position, AppliedTextStyle_1 * style));
IL2CPP_REGISTER_METHOD(0x0011E3D0, float, get_After, (CharMetaData_1__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011E3E0, float, get_HorizontalMiddle, (CharMetaData_1__Boxed * __this));
}
