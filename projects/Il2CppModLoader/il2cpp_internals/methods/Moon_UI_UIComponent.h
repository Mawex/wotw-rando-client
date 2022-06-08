#include <interception_macros.h>

namespace app::methods::Moon::UI::UIComponent {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (UIComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnActivated, (UIComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeactivated, (UIComponent * __this));
IL2CPP_REGISTER_METHOD(0x0118B4C0, RectTransform *, get_RectTransform, (UIComponent * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Active, (UIComponent * __this));
IL2CPP_REGISTER_METHOD(0x0118B540, void, set_Active, (UIComponent * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0118B570, void, PlayTimelineSequence, (UIComponent * __this, LegacyTimelineSequence * sequence));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (UIComponent * __this));
}
