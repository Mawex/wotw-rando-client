using namespace app;

namespace app::methods::UnityEngine::EventSystems::TouchInputModule {
IL2CPP_REGISTER_METHOD(0x01F29500, void, __ctor, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29510, bool, get_allowActivationOnStandalone, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_allowActivationOnStandalone, (TouchInputModule * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F29510, bool, get_forceModuleActive, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_forceModuleActive, (TouchInputModule * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F29520, void, UpdateModule, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F296E0, bool, IsModuleSupported, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29730, bool, ShouldActivateModule, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29900, bool, UseFakeInput, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29940, void, Process, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29B40, void, FakeTouches, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29D30, void, ProcessTouchEvents, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F29ED0, void, ProcessTouchPress, (TouchInputModule * __this, PointerEventData * pointerEvent, bool pressed, bool released));
IL2CPP_REGISTER_METHOD(0x01F27740, void, DeactivateModule, (TouchInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F2A510, String *, ToString, (TouchInputModule * __this));
}
