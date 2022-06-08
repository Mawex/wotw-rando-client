#include <interception_macros.h>

namespace app::methods::SceneInspector {
IL2CPP_REGISTER_METHOD(0x00BA1150, int32_t, get_QueryRange, ());
IL2CPP_REGISTER_METHOD(0x00BA1270, void, set_QueryRange, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00BA1400, bool, get_Show, ());
IL2CPP_REGISTER_METHOD(0x00BA1560, void, set_Show, (bool value));
IL2CPP_REGISTER_METHOD(0x00BA1690, void, CreateLineMaterial, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA1830, void, Awake, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA1920, void, OnEnable, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA1B00, void, OnDisable, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA1CD0, void, _updateResolution, (SceneInspector * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x00BA1D40, void, _updateWorldBounds, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA28E0, void, Update, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawScene, (SceneInspector * __this, SceneMetaData * scene));
IL2CPP_REGISTER_METHOD(0x00BA28F0, Vector2, _toScreenSpace, (SceneInspector * __this, Vector2 worldSpacePos));
IL2CPP_REGISTER_METHOD(0x00BA2A30, Rect, _toScreenSpace, (SceneInspector * __this, Rect worldSpaceRect));
IL2CPP_REGISTER_METHOD(0x00BA2B00, void, Draw, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA4010, void, OnEndOfFrame, (SceneInspector * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B158, SceneInspector_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BA4020, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x00BA4160, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x00BA42A0, void, DrawCross, (SceneInspector * __this, Vector2 center));
IL2CPP_REGISTER_METHOD(0x00BA4360, void, DrawIntWithBackgroundPadded, (SceneInspector * __this, int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00BA4800, void, DrawIntWithBackground, (SceneInspector * __this, int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y, bool center));
IL2CPP_REGISTER_METHOD(0x00BA4DA0, void, DrawFloatWithBackground, (SceneInspector * __this, float value, Color backgroundColor, Color textColor, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00BA5130, void, DrawRectWithOutline, (SceneInspector * __this, float x1, float y1, float x2, float y2, Color outlineColor, Color fillColor));
IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, (SceneInspector * __this, float x1, float y1, float x2, float y2));
IL2CPP_REGISTER_METHOD(0x00BA5340, void, DrawNumber, (SceneInspector * __this, int32_t x, int32_t y, int32_t num, bool isLeading));
IL2CPP_REGISTER_METHOD(0x00BA5550, void, DrawDot, (SceneInspector * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00BA55A0, void, __ctor, (SceneInspector * __this));
IL2CPP_REGISTER_METHOD(0x00BA5810, void, __cctor, ());
}
