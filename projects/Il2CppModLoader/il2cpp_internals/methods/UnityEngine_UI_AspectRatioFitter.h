using namespace app;

namespace app::methods::UnityEngine::UI::AspectRatioFitter {
IL2CPP_REGISTER_METHOD(0x01F2AB50, void, __ctor, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2AB70, AspectRatioFitter_AspectMode__Enum, get_aspectMode, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2AB80, void, set_aspectMode, (AspectRatioFitter * __this, AspectRatioFitter_AspectMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F2AC20, float, get_aspectRatio, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2AC30, void, set_aspectRatio, (AspectRatioFitter * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2AD00, RectTransform *, get_rectTransform, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2ADD0, void, OnEnable, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2ADE0, void, OnDisable, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2AE90, void, Update, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2ADD0, void, OnRectTransformDimensionsChange, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2AEB0, void, UpdateRect, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2B250, float, GetSizeDeltaToProduceSize, (AspectRatioFitter * __this, float size, int32_t axis));
IL2CPP_REGISTER_METHOD(0x01F2B3E0, Vector2, GetParentSize, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetLayoutHorizontal, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetLayoutVertical, (AspectRatioFitter * __this));
IL2CPP_REGISTER_METHOD(0x01F2ADD0, void, SetDirty, (AspectRatioFitter * __this));
}
