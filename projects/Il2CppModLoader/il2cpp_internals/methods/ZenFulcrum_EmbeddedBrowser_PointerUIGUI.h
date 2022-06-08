#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::PointerUIGUI {
IL2CPP_REGISTER_METHOD(0x01661A30, void, Awake, (PointerUIGUI * __this));
IL2CPP_REGISTER_METHOD(0x01661BE0, void, OnEnable, (PointerUIGUI * __this));
IL2CPP_REGISTER_METHOD(0x01661D40, IEnumerator *, WatchResize, (PointerUIGUI * __this));
IL2CPP_REGISTER_METHOD(0x01661E90, void, UpdateTexture, (PointerUIGUI * __this, Texture2D * texture));
IL2CPP_REGISTER_METHODINFO(0x047939B0, PointerUIGUI_UpdateTexture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01661F40, Vector2, MapPointerToBrowser, (PointerUIGUI * __this, Vector2 screenPosition, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x016622D0, Vector2, MapRayToBrowser, (PointerUIGUI * __this, Ray worldRay, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x016623B0, void, GetCurrentHitLocation, (PointerUIGUI * __this, Vector3 * pos, Quaternion * rot));
IL2CPP_REGISTER_METHOD(0x01662480, bool, get_MouseHasFocus, (PointerUIGUI * __this));
IL2CPP_REGISTER_METHOD(0x00FD90B0, void, set_MouseHasFocus, (PointerUIGUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x016624A0, bool, get_KeyboardHasFocus, (PointerUIGUI * __this));
IL2CPP_REGISTER_METHOD(0x016624C0, void, OnSelect, (PointerUIGUI * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01662520, void, OnDeselect, (PointerUIGUI * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x00954540, void, OnPointerEnter, (PointerUIGUI * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x00954550, void, OnPointerExit, (PointerUIGUI * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01662570, void, OnPointerDown, (PointerUIGUI * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01662680, void, __ctor, (PointerUIGUI * __this));
}
