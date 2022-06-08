#include <interception_macros.h>

namespace app::methods::UnityEngine::SliderHandler {
IL2CPP_REGISTER_METHOD(0x00218FB0, void, __ctor, (SliderHandler__Boxed * __this, Rect position, float currentValue, float size, float start, float end, GUIStyle * slider, GUIStyle * thumb, bool horiz, int32_t id));
IL2CPP_REGISTER_METHOD(0x00219000, float, Handle, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219010, float, OnMouseDown, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219020, float, OnMouseDrag, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219030, float, OnMouseUp, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219040, float, OnRepaint, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219050, EventType__Enum, CurrentEventType, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219060, int32_t, CurrentScrollTroughSide, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219070, bool, IsEmptySlider, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219090, bool, SupportsPageMovements, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002190A0, float, PageMovementValue, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002190B0, float, PageUpMovementBound, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219110, Event *, CurrentEvent, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219120, float, ValueForCurrentMousePosition, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219130, float, Clamp, (SliderHandler__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00219140, Rect, ThumbSelectionRect, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219190, void, StartDraggingWithValue, (SliderHandler__Boxed * __this, float dragStartValue));
IL2CPP_REGISTER_METHOD(0x002191F0, SliderState *, SliderState, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219140, Rect, ThumbRect, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219200, Rect, VerticalThumbRect, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219230, Rect, HorizontalThumbRect, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219260, float, ClampedCurrentValue, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219270, float, MousePosition, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219280, float, ValuesPerPixel, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00219290, float, ThumbSize, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002192A0, float, MaxValue, (SliderHandler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002192B0, float, MinValue, (SliderHandler__Boxed * __this));
}
