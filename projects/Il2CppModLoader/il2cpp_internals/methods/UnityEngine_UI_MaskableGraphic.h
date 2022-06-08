using namespace app;

namespace app::methods::UnityEngine::UI::MaskableGraphic {
IL2CPP_REGISTER_METHOD(0x02661200, void, __ctor, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x01F26FA0, MaskableGraphic_CullStateChangedEvent *, get_onCullStateChanged, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_onCullStateChanged, (MaskableGraphic * __this, MaskableGraphic_CullStateChangedEvent * value));
IL2CPP_REGISTER_METHOD(0x02661400, bool, get_maskable, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02661410, void, set_maskable, (MaskableGraphic * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02661440, Material *, GetModifiedMaterial, (MaskableGraphic * __this, Material * baseMaterial));
IL2CPP_REGISTER_METHOD(0x02661610, void, Cull, (MaskableGraphic * __this, Rect clipRect, bool validRect));
IL2CPP_REGISTER_METHOD(0x02661670, void, UpdateCull, (MaskableGraphic * __this, bool cull));
IL2CPP_REGISTER_METHOD(0x02661810, void, SetClipRect, (MaskableGraphic * __this, Rect clipRect, bool validRect));
IL2CPP_REGISTER_METHOD(0x02661900, void, OnEnable, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02661A00, void, OnDisable, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02661B30, void, OnTransformParentChanged, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ParentMaskStateChanged, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02661C90, void, OnCanvasHierarchyChanged, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02661E60, Rect, get_rootCanvasRect, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x026622B0, void, UpdateClipParent, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02662650, void, RecalculateClipping, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x02662660, void, RecalculateMasking, (MaskableGraphic * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IClippable_get_gameObject, (MaskableGraphic * __this));
}
