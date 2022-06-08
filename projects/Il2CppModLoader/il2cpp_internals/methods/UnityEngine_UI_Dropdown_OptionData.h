#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Dropdown_OptionData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Dropdown_OptionData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (Dropdown_OptionData * __this, String * text));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (Dropdown_OptionData * __this, Sprite * image));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (Dropdown_OptionData * __this, String * text, Sprite * image));
IL2CPP_REGISTER_METHOD(0x01F2AB40, String *, get_text, (Dropdown_OptionData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_text, (Dropdown_OptionData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01F25880, Sprite *, get_image, (Dropdown_OptionData * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_image, (Dropdown_OptionData * __this, Sprite * value));
}
