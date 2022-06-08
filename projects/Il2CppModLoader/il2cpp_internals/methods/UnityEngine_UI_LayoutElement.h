using namespace app;

namespace app::methods::UnityEngine::UI::LayoutElement {
IL2CPP_REGISTER_METHOD(0x024CEFE0, void, __ctor, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_ignoreLayout, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF020, void, set_ignoreLayout, (LayoutElement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x01F2AC20, float, get_minWidth, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF0F0, void, set_minWidth, (LayoutElement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2C2A0, float, get_minHeight, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF1C0, void, set_minHeight, (LayoutElement * __this, float value));
IL2CPP_REGISTER_METHOD(0x024AD1C0, float, get_preferredWidth, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF290, void, set_preferredWidth, (LayoutElement * __this, float value));
IL2CPP_REGISTER_METHOD(0x024CF360, float, get_preferredHeight, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF370, void, set_preferredHeight, (LayoutElement * __this, float value));
IL2CPP_REGISTER_METHOD(0x024CF440, float, get_flexibleWidth, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF450, void, set_flexibleWidth, (LayoutElement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2C500, float, get_flexibleHeight, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF520, void, set_flexibleHeight, (LayoutElement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F1C1C0, int32_t, get_layoutPriority, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF5F0, void, set_layoutPriority, (LayoutElement * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnEnable, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnTransformParentChanged, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnDisable, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnDidApplyAnimationProperties, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnBeforeTransformParentChanged, (LayoutElement * __this));
IL2CPP_REGISTER_METHOD(0x024CF6D0, void, SetDirty, (LayoutElement * __this));
}
