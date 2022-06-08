using namespace app;

namespace app::methods::UnityEngine::EventSystems::PointerInputModule {
IL2CPP_REGISTER_METHOD(0x01F23A50, void, __ctor, (PointerInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F23DC0, bool, GetPointerData, (PointerInputModule * __this, int32_t id, PointerEventData * * data, bool create));
IL2CPP_REGISTER_METHOD(0x01F23FB0, void, RemovePointerData, (PointerInputModule * __this, PointerEventData * data));
IL2CPP_REGISTER_METHOD(0x01F24060, PointerEventData *, GetTouchPointerEventData, (PointerInputModule * __this, Touch input, bool * pressed, bool * released));
IL2CPP_REGISTER_METHOD(0x01F24370, void, CopyFromTo, (PointerInputModule * __this, PointerEventData * from, PointerEventData * to));
IL2CPP_REGISTER_METHOD(0x01F24440, PointerEventData_FramePressState__Enum, StateForMouseButton, (PointerInputModule * __this, int32_t buttonId));
IL2CPP_REGISTER_METHOD(0x01F24500, PointerInputModule_MouseState *, GetMousePointerEventData, (PointerInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F24520, PointerInputModule_MouseState *, GetMousePointerEventData, (PointerInputModule * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01F24A70, PointerEventData *, GetLastPointerEventData, (PointerInputModule * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01F24B20, bool, ShouldStartDrag, (Vector2 pressPos, Vector2 currentPos, float threshold, bool useDragThreshold));
IL2CPP_REGISTER_METHOD(0x01F24C10, void, ProcessMove, (PointerInputModule * __this, PointerEventData * pointerEvent));
IL2CPP_REGISTER_METHOD(0x01F24CA0, void, ProcessDrag, (PointerInputModule * __this, PointerEventData * pointerEvent));
IL2CPP_REGISTER_METHOD(0x01F25150, bool, IsPointerOverGameObject, (PointerInputModule * __this, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x01F25220, void, ClearSelection, (PointerInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F25400, String *, ToString, (PointerInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F25760, void, DeselectIfSelectionChanged, (PointerInputModule * __this, GameObject * currentOverGo, BaseEventData * pointerEvent));
}
