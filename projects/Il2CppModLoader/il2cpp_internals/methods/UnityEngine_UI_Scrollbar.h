#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Scrollbar {
IL2CPP_REGISTER_METHOD(0x0266F180, void, __ctor, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x01F2BCB0, RectTransform *, get_handleRect, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F3B0, void, set_handleRect, (Scrollbar * __this, RectTransform * value));
IL2CPP_REGISTER_METHOD(0x0266F480, Scrollbar_Direction__Enum, get_direction, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F490, void, set_direction, (Scrollbar * __this, Scrollbar_Direction__Enum value));
IL2CPP_REGISTER_METHOD(0x0266F540, float, get_value, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F630, void, set_value, (Scrollbar * __this, float value));
IL2CPP_REGISTER_METHOD(0x0266F640, float, get_size, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F650, void, set_size, (Scrollbar * __this, float value));
IL2CPP_REGISTER_METHOD(0x0266F760, int32_t, get_numberOfSteps, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F770, void, set_numberOfSteps, (Scrollbar * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F36B60, Scrollbar_ScrollEvent *, get_onValueChanged, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_onValueChanged, (Scrollbar * __this, Scrollbar_ScrollEvent * value));
IL2CPP_REGISTER_METHOD(0x0266F860, float, get_stepSize, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, (Scrollbar * __this, CanvasUpdate__Enum executing));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F890, void, OnEnable, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F8D0, void, OnDisable, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F8E0, void, UpdateCachedReferences, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266F630, void, Set, (Scrollbar * __this, float input));
IL2CPP_REGISTER_METHOD(0x0266FAC0, void, Set, (Scrollbar * __this, float input, bool sendCallback));
IL2CPP_REGISTER_METHOD(0x0266FC10, void, OnRectTransformDimensionsChange, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266FC50, Scrollbar_Axis__Enum, get_axis, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266FC60, bool, get_reverseValue, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266FC80, void, UpdateVisuals, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x0266FF00, void, UpdateDrag, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x02670290, bool, MayDrag, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x02670300, void, OnBeginDrag, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x026705C0, void, OnDrag, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x026706A0, void, OnPointerDown, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x02670830, IEnumerator *, ClickRepeat, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x02670990, void, OnPointerUp, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x026709D0, void, OnMove, (Scrollbar * __this, AxisEventData * eventData));
IL2CPP_REGISTER_METHOD(0x02670D80, Selectable *, FindSelectableOnLeft, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x02670DB0, Selectable *, FindSelectableOnRight, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x02670DE0, Selectable *, FindSelectableOnUp, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x02670E10, Selectable *, FindSelectableOnDown, (Scrollbar * __this));
IL2CPP_REGISTER_METHOD(0x02670E40, void, OnInitializePotentialDrag, (Scrollbar * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x02670E60, void, SetDirection, (Scrollbar * __this, Scrollbar_Direction__Enum direction, bool includeRectLayouts));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, ICanvasElement_get_transform, (Scrollbar * __this));
}
