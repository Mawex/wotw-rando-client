#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::GUIBrowserUI {
IL2CPP_REGISTER_METHOD(0x01DDE910, void, Awake, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDED70, void, OnEnable, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDEED0, IEnumerator *, WatchResize, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDF020, void, UpdateTexture, (GUIBrowserUI * __this, Texture2D * texture));
IL2CPP_REGISTER_METHODINFO(0x04730AA0, GUIBrowserUI_UpdateTexture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DDF0D0, void, InputUpdate, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDF9F0, void, OnGUI, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDFC10, void, SetCursor, (GUIBrowserUI * __this, BrowserCursor * newCursor));
IL2CPP_REGISTER_METHOD(0x01DDFEB0, bool, get_MouseHasFocus, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01464330, Vector2, get_MousePosition, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01464350, void, set_MousePosition, (GUIBrowserUI * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, MouseButton__Enum, get_MouseButtons, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_MouseButtons, (GUIBrowserUI * __this, MouseButton__Enum value));
IL2CPP_REGISTER_METHOD(0x01DDFEC0, Vector2, get_MouseScroll, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDFEE0, void, set_MouseScroll, (GUIBrowserUI * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01DDFF00, bool, get_KeyboardHasFocus, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_UnityEngine_Event_ *, get_KeyEvents, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, BrowserCursor *, get_BrowserCursor, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_BrowserCursor, (GUIBrowserUI * __this, BrowserCursor * value));
IL2CPP_REGISTER_METHOD(0x002FBC40, BrowserInputSettings *, get_InputSettings, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_InputSettings, (GUIBrowserUI * __this, BrowserInputSettings * value));
IL2CPP_REGISTER_METHOD(0x0050B250, void, OnSelect, (GUIBrowserUI * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x0109C540, void, OnDeselect, (GUIBrowserUI * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01DDFF20, void, OnPointerEnter, (GUIBrowserUI * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01DDFF40, void, OnPointerExit, (GUIBrowserUI * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01DDFF60, void, OnPointerDown, (GUIBrowserUI * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01DE0070, void, __ctor, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DE02A0, void, _Awake_b__4_0, (GUIBrowserUI * __this));
IL2CPP_REGISTER_METHODINFO(0x04739C78, GUIBrowserUI__Awake_b__4_0__MethodInfo);
}
