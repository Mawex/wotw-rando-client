#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Dropdown_DropdownItem {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Dropdown_DropdownItem * __this));
IL2CPP_REGISTER_METHOD(0x01F22F90, Text *, get_text, (Dropdown_DropdownItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_text, (Dropdown_DropdownItem * __this, Text * value));
IL2CPP_REGISTER_METHOD(0x01F1C1D0, Image *, get_image, (Dropdown_DropdownItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_image, (Dropdown_DropdownItem * __this, Image * value));
IL2CPP_REGISTER_METHOD(0x01F1A590, RectTransform *, get_rectTransform, (Dropdown_DropdownItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_rectTransform, (Dropdown_DropdownItem * __this, RectTransform * value));
IL2CPP_REGISTER_METHOD(0x024ACCC0, Toggle *, get_toggle, (Dropdown_DropdownItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_toggle, (Dropdown_DropdownItem * __this, Toggle * value));
IL2CPP_REGISTER_METHOD(0x024ACCD0, void, OnPointerEnter, (Dropdown_DropdownItem * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024ACDE0, void, OnCancel, (Dropdown_DropdownItem * __this, BaseEventData * eventData));
}
