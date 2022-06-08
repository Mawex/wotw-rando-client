#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::GraphicRaycaster {
IL2CPP_REGISTER_METHOD(0x024B1F60, void, __ctor, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x024B20C0, int32_t, get_sortOrderPriority, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x024B21A0, int32_t, get_renderOrderPriority, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_ignoreReversedGraphics, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_ignoreReversedGraphics, (GraphicRaycaster * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F30530, GraphicRaycaster_BlockingObjects__Enum, get_blockingObjects, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_blockingObjects, (GraphicRaycaster * __this, GraphicRaycaster_BlockingObjects__Enum value));
IL2CPP_REGISTER_METHOD(0x024B22E0, Canvas *, get_canvas, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x024B23B0, void, Raycast, (GraphicRaycaster * __this, PointerEventData * eventData, List_1_UnityEngine_EventSystems_RaycastResult_ * resultAppendList));
IL2CPP_REGISTER_METHOD(0x024B35C0, Camera *, get_eventCamera, (GraphicRaycaster * __this));
IL2CPP_REGISTER_METHOD(0x024B3880, void, Raycast, (Canvas * canvas, Camera * eventCamera, Vector2 pointerPosition, IList_1_UnityEngine_UI_Graphic_ * foundGraphics, List_1_UnityEngine_UI_Graphic_ * results));
IL2CPP_REGISTER_METHOD(0x024B3ED0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x024B4020, int32_t, _Raycast_m__0, (Graphic * g1, Graphic * g2));
IL2CPP_REGISTER_METHODINFO(0x0473D120, GraphicRaycaster__Raycast_m__0__MethodInfo);
}
