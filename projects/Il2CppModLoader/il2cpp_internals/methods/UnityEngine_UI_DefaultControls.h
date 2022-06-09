#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::DefaultControls {
IL2CPP_REGISTER_METHOD(0x01F31160, GameObject *, CreateUIElementRoot, (app::String * name, app::Vector2 size));
IL2CPP_REGISTER_METHOD(0x01F31340, GameObject *, CreateUIObject, (app::String * name, app::GameObject * parent));
IL2CPP_REGISTER_METHOD(0x01F314E0, void, SetDefaultTextValues, (app::Text * lbl));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, SetDefaultColorTransitionValues, (app::Selectable * slider));
IL2CPP_REGISTER_METHOD(0x01F315C0, void, SetParentAndAlign, (app::GameObject * child, app::GameObject * parent));
IL2CPP_REGISTER_METHOD(0x01F317C0, void, SetLayerRecursively, (app::GameObject * go, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01F319F0, GameObject *, CreatePanel, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F31CE0, GameObject *, CreateButton, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32140, GameObject *, CreateText, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32260, GameObject *, CreateImage, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32340, GameObject *, CreateRawImage, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32420, GameObject *, CreateSlider, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F32DC0, GameObject *, CreateScrollbar, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F33270, GameObject *, CreateToggle, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F33980, GameObject *, CreateInputField, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F34060, GameObject *, CreateDropdown, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F35B10, GameObject *, CreateScrollView, (app::DefaultControls_Resources resources));
IL2CPP_REGISTER_METHOD(0x01F36560, void, __cctor, ());
}
