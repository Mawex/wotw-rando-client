#include <interception_macros.h>

namespace app::methods::UnityEngine::RectTransformUtility {
IL2CPP_REGISTER_METHOD(0x031A6C20, bool, RectangleContainsScreenPoint, (RectTransform * rect, Vector2 screenPoint, Camera * cam));
IL2CPP_REGISTER_METHOD(0x031A6DA0, bool, ScreenPointToWorldPointInRectangle, (RectTransform * rect, Vector2 screenPoint, Camera * cam, Vector3 * worldPoint));
IL2CPP_REGISTER_METHOD(0x031A7090, bool, ScreenPointToLocalPointInRectangle, (RectTransform * rect, Vector2 screenPoint, Camera * cam, Vector2 * localPoint));
IL2CPP_REGISTER_METHOD(0x031A7280, Ray, ScreenPointToRay, (Camera * cam, Vector2 screenPos));
IL2CPP_REGISTER_METHOD(0x031A7500, Vector2, WorldToScreenPoint, (Camera * cam, Vector3 worldPoint));
IL2CPP_REGISTER_METHOD(0x031A76A0, void, FlipLayoutOnAxis, (RectTransform * rect, int32_t axis, bool keepPositioning, bool recursive));
IL2CPP_REGISTER_METHOD(0x031A79D0, void, FlipLayoutAxes, (RectTransform * rect, bool keepPositioning, bool recursive));
IL2CPP_REGISTER_METHOD(0x031A7CD0, Vector2, GetTransposed, (Vector2 input));
IL2CPP_REGISTER_METHOD(0x031A7CF0, Vector2, PixelAdjustPoint, (Vector2 point, Transform * elementTransform, Canvas * canvas));
IL2CPP_REGISTER_METHOD(0x031A7DF0, Rect, PixelAdjustRect, (RectTransform * rectTransform, Canvas * canvas));
IL2CPP_REGISTER_METHOD(0x031A7F00, bool, PointInRectangle, (Vector2 screenPoint, RectTransform * rect, Camera * cam));
IL2CPP_REGISTER_METHOD(0x031A7FF0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x031A8080, void, PixelAdjustPoint_Injected, (Vector2 * point, Transform * elementTransform, Canvas * canvas, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x031A8100, void, PixelAdjustRect_Injected, (RectTransform * rectTransform, Canvas * canvas, Rect * ret));
IL2CPP_REGISTER_METHOD(0x031A8170, bool, PointInRectangle_Injected, (Vector2 * screenPoint, RectTransform * rect, Camera * cam));
}
