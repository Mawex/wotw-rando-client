#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::StandaloneInputModule {
IL2CPP_REGISTER_METHOD(0x01F26E70, void, __ctor, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, StandaloneInputModule_InputMode__Enum, get_inputMode, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F26F50, bool, get_allowActivationOnMobileDevice, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_allowActivationOnMobileDevice, (StandaloneInputModule * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F26F50, bool, get_forceModuleActive, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_forceModuleActive, (StandaloneInputModule * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F26F60, float, get_inputActionsPerSecond, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x00C7C0A0, void, set_inputActionsPerSecond, (StandaloneInputModule * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F26F70, float, get_repeatDelay, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x00F0E770, void, set_repeatDelay, (StandaloneInputModule * __this, float value));
IL2CPP_REGISTER_METHOD(0x01BA66F0, String *, get_horizontalAxis, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_horizontalAxis, (StandaloneInputModule * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01F26F80, String *, get_verticalAxis, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_verticalAxis, (StandaloneInputModule * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01F26F90, String *, get_submitButton, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_submitButton, (StandaloneInputModule * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01F26FA0, String *, get_cancelButton, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_cancelButton, (StandaloneInputModule * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01F26FB0, bool, ShouldIgnoreEventsOnNoFocus, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F27010, void, UpdateModule, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F271F0, bool, IsModuleSupported, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F27280, bool, ShouldActivateModule, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F27560, void, ActivateModule, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F27740, void, DeactivateModule, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F27750, void, Process, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F27810, bool, ProcessTouchEvents, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F279D0, void, ProcessTouchPress, (StandaloneInputModule * __this, PointerEventData * pointerEvent, bool pressed, bool released));
IL2CPP_REGISTER_METHOD(0x01F28010, bool, SendSubmitEventToSelectedObject, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F28350, Vector2, GetRawMoveVector, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F28530, bool, SendMoveEventToSelectedObject, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F28940, void, ProcessMouseEvent, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, ForceAutoSelect, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F28950, void, ProcessMouseEvent, (StandaloneInputModule * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01F28CE0, bool, SendUpdateEventToSelectedObject, (StandaloneInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F28ED0, void, ProcessMousePress, (StandaloneInputModule * __this, PointerInputModule_MouseButtonEventData * data));
IL2CPP_REGISTER_METHOD(0x01F294F0, GameObject *, GetCurrentFocusedGameObject, (StandaloneInputModule * __this));
}
