#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::DefaultControls {
IL2CPP_REGISTER_METHOD(0x01F31160, GameObject *, CreateUIElementRoot, (String * name, Vector2 size));
IL2CPP_REGISTER_METHOD(0x01F31340, GameObject *, CreateUIObject, (String * name, GameObject * parent));
IL2CPP_REGISTER_METHOD(0x01F314E0, void, SetDefaultTextValues, (Text * lbl));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, SetDefaultColorTransitionValues, (Selectable * slider));
IL2CPP_REGISTER_METHOD(0x01F315C0, void, SetParentAndAlign, (GameObject * child, GameObject * parent));
IL2CPP_REGISTER_METHOD(0x01F317C0, void, SetLayerRecursively, (GameObject * go, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01F319F0, GameObject *, CreatePanel, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F31CE0, GameObject *, CreateButton, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32140, GameObject *, CreateText, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32260, GameObject *, CreateImage, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32340, GameObject *, CreateRawImage, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32420, GameObject *, CreateSlider, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32DC0, GameObject *, CreateScrollbar, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F33270, GameObject *, CreateToggle, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F33980, GameObject *, CreateInputField, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F34060, GameObject *, CreateDropdown, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F35B10, GameObject *, CreateScrollView, (DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F36560, void, __cctor, ());
}
