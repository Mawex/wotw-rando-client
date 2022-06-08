#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::BaseInput {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19C30, String *, get_compositionString, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19C80, IMECompositionMode__Enum, get_imeCompositionMode, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19CD0, void, set_imeCompositionMode, (BaseInput * __this, IMECompositionMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F19D20, Vector2, get_compositionCursorPos, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19D80, void, set_compositionCursorPos, (BaseInput * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F19DE0, bool, get_mousePresent, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19E30, bool, GetMouseButtonDown, (BaseInput * __this, int32_t button));
IL2CPP_REGISTER_METHOD(0x01F19E80, bool, GetMouseButtonUp, (BaseInput * __this, int32_t button));
IL2CPP_REGISTER_METHOD(0x01F19ED0, bool, GetMouseButton, (BaseInput * __this, int32_t button));
IL2CPP_REGISTER_METHOD(0x01F19F20, Vector2, get_mousePosition, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19F30, Vector2, get_mouseScrollDelta, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19F90, bool, get_touchSupported, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F19FE0, int32_t, get_touchCount, (BaseInput * __this));
IL2CPP_REGISTER_METHOD(0x01F1A030, Touch, GetTouch, (BaseInput * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F1A080, float, GetAxisRaw, (BaseInput * __this, String * axisName));
IL2CPP_REGISTER_METHOD(0x01F1A0D0, bool, GetButtonDown, (BaseInput * __this, String * buttonName));
}
