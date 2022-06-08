#include <interception_macros.h>

namespace app::methods::TextBoxExtended {
IL2CPP_REGISTER_METHOD(0x010E3CF0, Rect, GetRect, (TextBox * textBox));
IL2CPP_REGISTER_METHOD(0x010E4180, Vector2, ComputeAnchor, (TextBox * textBox));
IL2CPP_REGISTER_METHOD(0x010E41F0, int32_t, CountLetters, (TextBox * textBox));
IL2CPP_REGISTER_METHOD(0x010E4290, int32_t, CountLetters, (Text_1 * textBox));
}
