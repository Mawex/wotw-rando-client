#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Mask {
IL2CPP_REGISTER_METHOD(0x008223A0, void, __ctor, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F370, RectTransform *, get_rectTransform, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F400, bool, get_showMaskGraphic, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F410, void, set_showMaskGraphic, (Mask_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0265F500, Graphic *, get_graphic, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F590, bool, MaskEnabled, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSiblingGraphicEnabledDisabled, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F660, void, OnEnable, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F7C0, void, OnDisable, (Mask_1 * __this));
IL2CPP_REGISTER_METHOD(0x0265F9F0, bool, IsRaycastLocationValid, (Mask_1 * __this, Vector2 sp, Camera * eventCamera));
IL2CPP_REGISTER_METHOD(0x0265FB80, Material *, GetModifiedMaterial, (Mask_1 * __this, Material * baseMaterial));
}
