#include <interception_macros.h>

namespace app::methods::UnityEngine::Event {
IL2CPP_REGISTER_METHOD(0x029D52C0, void, __ctor, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5320, void, __ctor, (Event * __this, int32_t displayIndex));
IL2CPP_REGISTER_METHOD(0x029D5380, void, __ctor, (Event * __this, Event * other));
IL2CPP_REGISTER_METHODINFO(0x0471A110, Event__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029D5480, EventType__Enum, get_rawType, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D54D0, Vector2, get_mousePosition, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5540, Vector2, get_delta, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D55B0, int32_t, get_button, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5600, EventModifiers__Enum, get_modifiers, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5650, void, set_modifiers, (Event * __this, EventModifiers__Enum value));
IL2CPP_REGISTER_METHOD(0x029D56B0, int32_t, get_clickCount, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5700, uint16_t, get_character, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5750, void, set_character, (Event * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x029D57B0, KeyCode__Enum, get_keyCode, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5800, void, set_keyCode, (Event * __this, KeyCode__Enum value));
IL2CPP_REGISTER_METHOD(0x029D5860, void, set_displayIndex, (Event * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x029D58C0, EventType__Enum, get_type, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5910, void, set_type, (Event * __this, EventType__Enum value));
IL2CPP_REGISTER_METHOD(0x029D5970, String *, get_commandName, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D59C0, void, Internal_Use, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5A10, void *, Internal_Create, (int32_t displayIndex));
IL2CPP_REGISTER_METHOD(0x029D5A60, void, Internal_Destroy, (void * ptr));
IL2CPP_REGISTER_METHOD(0x029D5AB0, void *, Internal_Copy, (void * otherPtr));
IL2CPP_REGISTER_METHOD(0x029D5B00, EventType__Enum, GetTypeForControl, (Event * __this, int32_t controlID));
IL2CPP_REGISTER_METHOD(0x029D5B60, bool, PopEvent, (Event * outEvent));
IL2CPP_REGISTER_METHOD(0x029D5BB0, void, Internal_SetNativeEvent, (void * ptr));
IL2CPP_REGISTER_METHOD(0x029D5C00, void, Internal_MakeMasterEventCurrent, (int32_t displayIndex));
IL2CPP_REGISTER_METHOD(0x029D5E90, void, Finalize, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D5FB0, bool, get_shift, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D6010, bool, get_control, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D6070, bool, get_alt, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D60D0, Event *, get_current, ());
IL2CPP_REGISTER_METHOD(0x029D6150, bool, get_isKey, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D61C0, bool, get_isMouse, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D6240, Event *, KeyboardEvent, (String * key));
IL2CPP_REGISTER_METHOD(0x029D78F0, int32_t, GetHashCode, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D7A10, bool, Equals, (Event * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x029D7BE0, String *, ToString, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D86D0, void, Use, (Event * __this));
IL2CPP_REGISTER_METHOD(0x029D8940, void, get_mousePosition_Injected, (Event * __this, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x029D89A0, void, get_delta_Injected, (Event * __this, Vector2 * ret));
}
