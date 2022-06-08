#include <interception_macros.h>

namespace app::methods::Moon::UI::Button {
IL2CPP_REGISTER_METHOD(0x00D23FF0, void, OnSelected, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24000, void, OnDeselected, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24000, void, OnActivated, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24010, void, OnDeactivated, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24020, void, OnUserInput, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24260, Image_1 *, get_Image, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24330, Text_1 *, get_Text, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24400, InputTrigger *, get_Input, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D247E0, InputInfo *, get_Trigger, (Button_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D24890, void, __ctor, (Button_1 * __this));
}
