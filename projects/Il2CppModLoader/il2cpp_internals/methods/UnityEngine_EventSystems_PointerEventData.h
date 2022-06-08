using namespace app;

namespace app::methods::UnityEngine::EventSystems::PointerEventData {
IL2CPP_REGISTER_METHOD(0x01F22D40, void, __ctor, (PointerEventData * __this, EventSystem * eventSystem));
IL2CPP_REGISTER_METHOD(0x01704A60, GameObject *, get_pointerEnter, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_pointerEnter, (PointerEventData * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x01F22F90, GameObject *, get_lastPress, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_lastPress, (PointerEventData * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x01F1C1D0, GameObject *, get_rawPointerPress, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_rawPointerPress, (PointerEventData * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x01F1A590, GameObject *, get_pointerDrag, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_pointerDrag, (PointerEventData * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x01F22FA0, RaycastResult, get_pointerCurrentRaycast, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F22FE0, void, set_pointerCurrentRaycast, (PointerEventData * __this, RaycastResult value));
IL2CPP_REGISTER_METHOD(0x01F23010, RaycastResult, get_pointerPressRaycast, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F23050, void, set_pointerPressRaycast, (PointerEventData * __this, RaycastResult value));
IL2CPP_REGISTER_METHOD(0x01F23090, bool, get_eligibleForClick, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x008496A0, void, set_eligibleForClick, (PointerEventData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F230A0, int32_t, get_pointerId, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x003FBEA0, void, set_pointerId, (PointerEventData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F230B0, Vector2, get_position, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01466B40, void, set_position, (PointerEventData * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F230D0, Vector2, get_delta, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F230F0, void, set_delta, (PointerEventData * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F23120, Vector2, get_pressPosition, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F23140, void, set_pressPosition, (PointerEventData * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F23170, Vector3, get_worldPosition, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F23190, void, set_worldPosition, (PointerEventData * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01F231B0, Vector3, get_worldNormal, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x011607B0, void, set_worldNormal, (PointerEventData * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01F231D0, float, get_clickTime, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x00510F80, void, set_clickTime, (PointerEventData * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F231E0, int32_t, get_clickCount, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x00E30330, void, set_clickCount, (PointerEventData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F231F0, Vector2, get_scrollDelta, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F23210, void, set_scrollDelta, (PointerEventData * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F23240, bool, get_useDragThreshold, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x00B5F820, void, set_useDragThreshold, (PointerEventData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F23250, bool, get_dragging, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F23260, void, set_dragging, (PointerEventData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F23270, PointerEventData_InputButton__Enum, get_button, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x006D6500, void, set_button, (PointerEventData * __this, PointerEventData_InputButton__Enum value));
IL2CPP_REGISTER_METHOD(0x01F23280, bool, IsPointerMoving, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F232B0, bool, IsScrolling, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F232E0, Camera *, get_enterEventCamera, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F233D0, Camera *, get_pressEventCamera, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F234C0, GameObject *, get_pointerPress, (PointerEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F234D0, void, set_pointerPress, (PointerEventData * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x01F235A0, String *, ToString, (PointerEventData * __this));
}
