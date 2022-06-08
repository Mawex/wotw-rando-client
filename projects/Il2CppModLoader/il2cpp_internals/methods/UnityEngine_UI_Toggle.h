#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Toggle {
IL2CPP_REGISTER_METHOD(0x0267BD60, void, __ctor, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x01F36B40, ToggleGroup *, get_group, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267BF40, void, set_group, (Toggle * __this, ToggleGroup * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, (Toggle * __this, CanvasUpdate__Enum executing));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267BF70, void, OnEnable, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267BFB0, void, OnDisable, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267BFE0, void, OnDidApplyAnimationProperties, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267C180, void, SetToggleGroup, (Toggle * __this, ToggleGroup * newGroup, bool setMemberValue));
IL2CPP_REGISTER_METHOD(0x0267C4B0, bool, get_isOn, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267C4C0, void, set_isOn, (Toggle * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0267C4C0, void, Set, (Toggle * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0267C4D0, void, Set, (Toggle * __this, bool value, bool sendCallback));
IL2CPP_REGISTER_METHOD(0x0267C680, void, PlayEffect, (Toggle * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x0267C790, void, Start, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267C7A0, void, InternalToggle, (Toggle * __this));
IL2CPP_REGISTER_METHOD(0x0267C800, void, OnPointerClick, (Toggle * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x0267C7A0, void, OnSubmit, (Toggle * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, ICanvasElement_get_transform, (Toggle * __this));
}
