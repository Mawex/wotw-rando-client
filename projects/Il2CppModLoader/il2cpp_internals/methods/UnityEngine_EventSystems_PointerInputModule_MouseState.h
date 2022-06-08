using namespace app;

namespace app::methods::UnityEngine::EventSystems::PointerInputModule_MouseState {
IL2CPP_REGISTER_METHOD(0x01F258E0, void, __ctor, (PointerInputModule_MouseState * __this));
IL2CPP_REGISTER_METHOD(0x01F25A30, bool, AnyPressesThisFrame, (PointerInputModule_MouseState * __this));
IL2CPP_REGISTER_METHOD(0x01F25B20, bool, AnyReleasesThisFrame, (PointerInputModule_MouseState * __this));
IL2CPP_REGISTER_METHOD(0x01F25C10, PointerInputModule_ButtonState *, GetButtonState, (PointerInputModule_MouseState * __this, PointerEventData_InputButton__Enum button));
IL2CPP_REGISTER_METHOD(0x01F25EB0, void, SetButtonState, (PointerInputModule_MouseState * __this, PointerEventData_InputButton__Enum button, PointerEventData_FramePressState__Enum stateForMouseButton, PointerEventData * data));
}
