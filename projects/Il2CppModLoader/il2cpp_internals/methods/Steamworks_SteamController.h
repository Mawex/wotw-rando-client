#include <interception_macros.h>

namespace app::methods::Steamworks::SteamController {
IL2CPP_REGISTER_METHOD(0x027E75F0, bool, Init, ());
IL2CPP_REGISTER_METHOD(0x027E76A0, bool, Shutdown, ());
IL2CPP_REGISTER_METHOD(0x027E7750, void, RunFrame, ());
IL2CPP_REGISTER_METHOD(0x027E7800, int32_t, GetConnectedControllers, (ControllerHandle_t__Array * handlesOut));
IL2CPP_REGISTER_METHODINFO(0x0470B828, SteamController_GetConnectedControllers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E7960, ControllerActionSetHandle_t, GetActionSetHandle, (String * pszActionSetName));
IL2CPP_REGISTER_METHOD(0x027E7C40, void, ActivateActionSet, (ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle));
IL2CPP_REGISTER_METHOD(0x027E7D10, ControllerActionSetHandle_t, GetCurrentActionSet, (ControllerHandle_t controllerHandle));
IL2CPP_REGISTER_METHOD(0x027E7DD0, void, ActivateActionSetLayer, (ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle));
IL2CPP_REGISTER_METHOD(0x027E7EA0, void, DeactivateActionSetLayer, (ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle));
IL2CPP_REGISTER_METHOD(0x027E7F70, void, DeactivateAllActionSetLayers, (ControllerHandle_t controllerHandle));
IL2CPP_REGISTER_METHOD(0x027E8030, int32_t, GetActiveActionSetLayers, (ControllerHandle_t controllerHandle, ControllerActionSetHandle_t__Array * handlesOut));
IL2CPP_REGISTER_METHODINFO(0x0473B940, SteamController_GetActiveActionSetLayers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E81A0, ControllerDigitalActionHandle_t, GetDigitalActionHandle, (String * pszActionName));
IL2CPP_REGISTER_METHOD(0x027E8480, ControllerDigitalActionData_t, GetDigitalActionData, (ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle));
IL2CPP_REGISTER_METHOD(0x027E8550, int32_t, GetDigitalActionOrigins, (ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin__Enum__Array * originsOut));
IL2CPP_REGISTER_METHODINFO(0x0475D968, SteamController_GetDigitalActionOrigins__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E86F0, ControllerAnalogActionHandle_t, GetAnalogActionHandle, (String * pszActionName));
IL2CPP_REGISTER_METHOD(0x027E89D0, ControllerAnalogActionData_t, GetAnalogActionData, (ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle));
IL2CPP_REGISTER_METHOD(0x027E8AC0, int32_t, GetAnalogActionOrigins, (ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin__Enum__Array * originsOut));
IL2CPP_REGISTER_METHODINFO(0x04763980, SteamController_GetAnalogActionOrigins__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E8C60, String *, GetGlyphForActionOrigin, (EControllerActionOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x027E8D20, String *, GetStringForActionOrigin, (EControllerActionOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x027E8DE0, void, StopAnalogActionMomentum, (ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction));
IL2CPP_REGISTER_METHOD(0x027E8EB0, ControllerMotionData_t, GetMotionData, (ControllerHandle_t controllerHandle));
IL2CPP_REGISTER_METHOD(0x027E8F90, void, TriggerHapticPulse, (ControllerHandle_t controllerHandle, ESteamControllerPad__Enum eTargetPad, uint16_t usDurationMicroSec));
IL2CPP_REGISTER_METHOD(0x027E9070, void, TriggerRepeatedHapticPulse, (ControllerHandle_t controllerHandle, ESteamControllerPad__Enum eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags));
IL2CPP_REGISTER_METHOD(0x027E9180, void, TriggerVibration, (ControllerHandle_t controllerHandle, uint16_t usLeftSpeed, uint16_t usRightSpeed));
IL2CPP_REGISTER_METHOD(0x027E9260, void, SetLEDColor, (ControllerHandle_t controllerHandle, uint8_t nColorR, uint8_t nColorG, uint8_t nColorB, uint32_t nFlags));
IL2CPP_REGISTER_METHOD(0x027E9360, bool, ShowBindingPanel, (ControllerHandle_t controllerHandle));
IL2CPP_REGISTER_METHOD(0x027E9420, ESteamInputType__Enum, GetInputTypeForHandle, (ControllerHandle_t controllerHandle));
IL2CPP_REGISTER_METHOD(0x027E94E0, ControllerHandle_t, GetControllerForGamepadIndex, (int32_t nIndex));
IL2CPP_REGISTER_METHOD(0x027E9590, int32_t, GetGamepadIndexForController, (ControllerHandle_t ulControllerHandle));
IL2CPP_REGISTER_METHOD(0x027E9650, String *, GetStringForXboxOrigin, (EXboxOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x027E9710, String *, GetGlyphForXboxOrigin, (EXboxOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x027E97D0, EControllerActionOrigin__Enum, GetActionOriginFromXboxOrigin, (ControllerHandle_t controllerHandle, EXboxOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x027E98A0, EControllerActionOrigin__Enum, TranslateActionOrigin, (ESteamInputType__Enum eDestinationInputType, EControllerActionOrigin__Enum eSourceOrigin));
IL2CPP_REGISTER_METHOD(0x027E9960, bool, GetControllerBindingRevision, (ControllerHandle_t controllerHandle, int32_t * pMajor, int32_t * pMinor));
}
