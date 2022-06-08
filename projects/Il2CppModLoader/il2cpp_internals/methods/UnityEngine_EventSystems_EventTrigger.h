using namespace app;

namespace app::methods::UnityEngine::EventSystems::EventTrigger {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x01F1DF80, List_1_UnityEngine_EventSystems_EventTrigger_Entry_ *, get_triggers, (EventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_triggers, (EventTrigger * __this, List_1_UnityEngine_EventSystems_EventTrigger_Entry_ * value));
IL2CPP_REGISTER_METHOD(0x01F1E0E0, void, Execute, (EventTrigger * __this, EventTriggerType__Enum id, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E220, void, OnPointerEnter, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E230, void, OnPointerExit, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E240, void, OnDrag, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E250, void, OnDrop, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E260, void, OnPointerDown, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E270, void, OnPointerUp, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E280, void, OnPointerClick, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E290, void, OnSelect, (EventTrigger * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E2A0, void, OnDeselect, (EventTrigger * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E2B0, void, OnScroll, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E2C0, void, OnMove, (EventTrigger * __this, AxisEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E2D0, void, OnUpdateSelected, (EventTrigger * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E2E0, void, OnInitializePotentialDrag, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E2F0, void, OnBeginDrag, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E300, void, OnEndDrag, (EventTrigger * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E310, void, OnSubmit, (EventTrigger * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F1E320, void, OnCancel, (EventTrigger * __this, BaseEventData * eventData));
}
