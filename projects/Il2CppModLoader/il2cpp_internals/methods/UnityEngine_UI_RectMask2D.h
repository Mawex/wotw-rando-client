using namespace app;

namespace app::methods::UnityEngine::UI::RectMask2D {
IL2CPP_REGISTER_METHOD(0x02664160, void, __ctor, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02664510, Canvas *, get_Canvas, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02664690, Rect, get_canvasRect, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02664710, RectTransform *, get_rectTransform, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x026647A0, void, OnEnable, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02664850, void, OnDisable, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x026649F0, bool, IsRaycastLocationValid, (RectMask2D * __this, Vector2 sp, Camera * eventCamera));
IL2CPP_REGISTER_METHOD(0x02664B20, Rect, get_rootCanvasRect, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02664E30, void, PerformClipping, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02665250, void, AddClippable, (RectMask2D * __this, IClippable * clippable));
IL2CPP_REGISTER_METHOD(0x02665330, void, RemoveClippable, (RectMask2D * __this, IClippable * clippable));
IL2CPP_REGISTER_METHOD(0x00617EB0, void, OnTransformParentChanged, (RectMask2D * __this));
IL2CPP_REGISTER_METHOD(0x02665470, void, OnCanvasHierarchyChanged, (RectMask2D * __this));
}
