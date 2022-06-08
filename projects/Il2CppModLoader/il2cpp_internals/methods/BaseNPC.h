#include <interception_macros.h>

namespace app::methods::BaseNPC {
IL2CPP_REGISTER_METHOD(0x00F86A90, void, Awake, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F86B30, void, OnDestroy, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F86BD0, bool, MessageBoxHidden, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F86C70, void, StartInteraction, (BaseNPC * __this, InteractionSettings * interactionSettings, String * replace, String * with));
IL2CPP_REGISTER_METHOD(0x00F87110, void, PlayListenAnim, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F87220, void, ShowText, (BaseNPC * __this, MessageProvider * messageProvider, Action_1_MessageBox_HideAction_ * onMessageHide, String * replace, String * with));
IL2CPP_REGISTER_METHOD(0x00F875B0, void, HideCurrentMessageBox, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F87680, void, OnMessageScreenHide, (BaseNPC * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04737298, BaseNPC_OnMessageScreenHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F87850, void, AssertNPCScreenVisible, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F87940, void, HideNPCScreen, (BaseNPC * __this, bool stopAnim));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (BaseNPC * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsSuspended, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsSuspended, (BaseNPC * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (BaseNPC * __this));
IL2CPP_REGISTER_METHOD(0x00F87AC0, void, set_Mask, (BaseNPC * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x008C5E20, void, __ctor, (BaseNPC * __this));
}
