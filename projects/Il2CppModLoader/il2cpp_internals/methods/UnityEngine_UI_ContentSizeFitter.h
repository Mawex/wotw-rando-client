using namespace app;

namespace app::methods::UnityEngine::UI::ContentSizeFitter {
IL2CPP_REGISTER_METHOD(0x01F30480, void, __ctor, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2AB70, ContentSizeFitter_FitMode__Enum, get_horizontalFit, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F30490, void, set_horizontalFit, (ContentSizeFitter * __this, ContentSizeFitter_FitMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F30530, ContentSizeFitter_FitMode__Enum, get_verticalFit, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F30540, void, set_verticalFit, (ContentSizeFitter * __this, ContentSizeFitter_FitMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F305E0, RectTransform *, get_rectTransform, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F306B0, void, OnEnable, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F306C0, void, OnDisable, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F306B0, void, OnRectTransformDimensionsChange, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F30770, void, HandleSelfFittingAlongAxis, (ContentSizeFitter * __this, int32_t axis));
IL2CPP_REGISTER_METHOD(0x01F30820, void, SetLayoutHorizontal, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F308A0, void, SetLayoutVertical, (ContentSizeFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F30920, void, SetDirty, (ContentSizeFitter * __this));
}
