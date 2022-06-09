#include <interception_macros.h>

namespace app::methods::UnityEngine_EventSystems::BaseInput {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19C30, String *, get_compositionString, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19C80, IMECompositionMode__Enum, get_imeCompositionMode, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19CD0, void, set_imeCompositionMode, (app::BaseInput * this_ptr, app::IMECompositionMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F19D20, Vector2, get_compositionCursorPos, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19D80, void, set_compositionCursorPos, (app::BaseInput * this_ptr, app::Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F19DE0, bool, get_mousePresent, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19E30, bool, GetMouseButtonDown, (app::BaseInput * this_ptr, int32_t button));
IL2CPP_REGISTER_METHOD(0x01F19E80, bool, GetMouseButtonUp, (app::BaseInput * this_ptr, int32_t button));
IL2CPP_REGISTER_METHOD(0x01F19ED0, bool, GetMouseButton, (app::BaseInput * this_ptr, int32_t button));
IL2CPP_REGISTER_METHOD(0x01F19F20, Vector2, get_mousePosition, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19F30, Vector2, get_mouseScrollDelta, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19F90, bool, get_touchSupported, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F19FE0, int32_t, get_touchCount, (app::BaseInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1A030, Touch, GetTouch, (app::BaseInput * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F1A080, float, GetAxisRaw, (app::BaseInput * this_ptr, app::String * axis_name));
IL2CPP_REGISTER_METHOD(0x01F1A0D0, bool, GetButtonDown, (app::BaseInput * this_ptr, app::String * button_name));
}
