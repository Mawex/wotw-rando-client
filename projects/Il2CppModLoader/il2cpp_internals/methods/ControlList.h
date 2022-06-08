#include <interception_macros.h>

namespace app::methods::ControlList {
IL2CPP_REGISTER_METHOD(0x011E94F0, void, Awake, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011E9500, void, Initialize, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011E9940, void, OnNavigate, (ControlList * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F0A8, ControlList_OnNavigate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E99F0, void, Populate, (ControlList * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C198, ControlList_Populate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011EA640, void, SetKeyBinding, (ControlList * __this, ControlItem * control, int32_t subIndex, KeyCode__Enum code));
IL2CPP_REGISTER_METHOD(0x011EA680, void, RemoveBinding, (ControlList * __this, ControlItem * control, KeyCode__Enum code));
IL2CPP_REGISTER_METHOD(0x011EA750, void, ClearBinding, (ControlList * __this, ControlItem * control, int32_t subIndex));
IL2CPP_REGISTER_METHOD(0x011EA780, List_1_ControlItem_ *, CurrentKeyBindingsForCode, (ControlList * __this, KeyCode__Enum incomingKey));
IL2CPP_REGISTER_METHOD(0x011EAAC0, void, OnItemPressed, (ControlList * __this, ControlUIItem * item));
IL2CPP_REGISTER_METHOD(0x011EAF90, void, ResetToDefault, (ControlList * __this));
IL2CPP_REGISTER_METHODINFO(0x047083E8, ControlList_ResetToDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011EB160, void, ResetControlToDefault, (ControlList * __this, ControlItem * control));
IL2CPP_REGISTER_METHOD(0x011EB190, void, RevertControlToLast, (ControlList * __this, ControlItem * control));
IL2CPP_REGISTER_METHOD(0x011EB2E0, void, UpdateAllBindingText, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EB420, void, HandleInput, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EB620, void, OnEnable, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EBA10, void, OnDisable, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EBD40, void, FixedUpdate, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EBD70, void, AssignKey, (ControlList * __this, ControlItem * control, int32_t index, KeyCode__Enum pressedKey));
IL2CPP_REGISTER_METHOD(0x011EC100, void, ReadNextKey, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EC6F0, void, SetPressedItem, (ControlList * __this, ControlUIItem * control, int32_t index));
IL2CPP_REGISTER_METHOD(0x011EC960, void, __ctor, (ControlList * __this));
IL2CPP_REGISTER_METHOD(0x011EDB50, void, _Initialize_b__12_0, (ControlList * __this, GameObject * x));
IL2CPP_REGISTER_METHODINFO(0x0476EB18, ControlList__Initialize_b__12_0__MethodInfo);
}
