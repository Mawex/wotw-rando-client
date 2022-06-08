#include <interception_macros.h>

namespace app::methods::UnityEngine::GUIUtility {
IL2CPP_REGISTER_METHOD(0x029F7D30, float, get_pixelsPerPoint, ());
IL2CPP_REGISTER_METHOD(0x029F7D80, int32_t, get_guiDepth, ());
IL2CPP_REGISTER_METHOD(0x029F7DD0, void, set_mouseUsed, (bool value));
IL2CPP_REGISTER_METHOD(0x029F7E20, void, set_textFieldInput, (bool value));
IL2CPP_REGISTER_METHOD(0x024C46F0, String *, get_systemCopyBuffer, ());
IL2CPP_REGISTER_METHOD(0x024C4740, void, set_systemCopyBuffer, (String * value));
IL2CPP_REGISTER_METHOD(0x029F7E70, int32_t, GetControlID, (int32_t hint, FocusType__Enum focusType, Rect rect));
IL2CPP_REGISTER_METHOD(0x029F7EE0, int32_t, Internal_GetHotControl, ());
IL2CPP_REGISTER_METHOD(0x029F7F30, int32_t, Internal_GetKeyboardControl, ());
IL2CPP_REGISTER_METHOD(0x029F7F80, void, Internal_SetHotControl, (int32_t value));
IL2CPP_REGISTER_METHOD(0x029F7FD0, void, Internal_SetKeyboardControl, (int32_t value));
IL2CPP_REGISTER_METHOD(0x029F8020, Object *, Internal_GetDefaultSkin, (int32_t skinMode));
IL2CPP_REGISTER_METHOD(0x029F8070, void, Internal_ExitGUI, ());
IL2CPP_REGISTER_METHOD(0x029F80C0, void, MarkGUIChanged, ());
IL2CPP_REGISTER_METHOD(0x029F8150, int32_t, GetControlID, (FocusType__Enum focus));
IL2CPP_REGISTER_METHOD(0x029F81B0, int32_t, GetControlID, (FocusType__Enum focus, Rect position));
IL2CPP_REGISTER_METHOD(0x029F8210, int32_t, GetControlID, (int32_t hint, FocusType__Enum focus));
IL2CPP_REGISTER_METHOD(0x029F8280, Object *, GetStateObject, (Type * t, int32_t controlID));
IL2CPP_REGISTER_METHOD(0x029F8330, void, set_guiIsExiting, (bool value));
IL2CPP_REGISTER_METHOD(0x029F7EE0, int32_t, get_hotControl, ());
IL2CPP_REGISTER_METHOD(0x029F7F80, void, set_hotControl, (int32_t value));
IL2CPP_REGISTER_METHOD(0x029F83C0, void, TakeCapture, ());
IL2CPP_REGISTER_METHOD(0x029F8450, void, RemoveCapture, ());
IL2CPP_REGISTER_METHOD(0x029F7F30, int32_t, get_keyboardControl, ());
IL2CPP_REGISTER_METHOD(0x029F7FD0, void, set_keyboardControl, (int32_t value));
IL2CPP_REGISTER_METHOD(0x029F84E0, GUISkin *, GetDefaultSkin, ());
IL2CPP_REGISTER_METHOD(0x029F85C0, bool, ProcessEvent, (int32_t instanceID, void * nativeEventPtr));
IL2CPP_REGISTER_METHOD(0x029F8680, void, BeginGUI, (int32_t skinMode, int32_t instanceID, int32_t useGUILayout));
IL2CPP_REGISTER_METHOD(0x029F8880, void, EndGUI, (int32_t layoutType));
IL2CPP_REGISTER_METHOD(0x029F8C20, bool, EndGUIFromException, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x029F8D20, bool, EndContainerGUIFromException, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x029F8DC0, void, ResetGlobalState, ());
IL2CPP_REGISTER_METHOD(0x029F8F00, bool, IsExitGUIException, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x029F8F00, bool, ShouldRethrowException, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x029F8FC0, void, CheckOnGUI, ());
IL2CPP_REGISTER_METHODINFO(0x04798660, GUIUtility_CheckOnGUI__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029F90A0, void, ScaleAroundPivot, (Vector2 scale, Vector2 pivotPoint));
IL2CPP_REGISTER_METHOD(0x029F9690, int32_t, GetControlID_Injected, (int32_t hint, FocusType__Enum focusType, Rect * rect));
}
