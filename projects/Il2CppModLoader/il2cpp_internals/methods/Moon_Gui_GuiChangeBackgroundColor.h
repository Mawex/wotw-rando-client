#include <interception_macros.h>

namespace app::methods::Moon::Gui::GuiChangeBackgroundColor {
IL2CPP_REGISTER_METHOD(0x01349560, Color, get_PreviousColor, (GuiChangeBackgroundColor * __this));
IL2CPP_REGISTER_METHOD(0x011927A0, void, set_PreviousColor, (GuiChangeBackgroundColor * __this, Color value));
IL2CPP_REGISTER_METHOD(0x01989620, void, __ctor, (GuiChangeBackgroundColor * __this, Color newColor));
IL2CPP_REGISTER_METHOD(0x019896F0, void, Dispose, (GuiChangeBackgroundColor * __this));
}
