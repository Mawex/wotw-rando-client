using namespace app;

namespace app::methods::NPCMessageBox {
IL2CPP_REGISTER_METHOD(0x00880590, void, Awake, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00880650, void, OnDestroy, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x008806F0, void, UpdateWriting, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00880910, void, UpdateComplete, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00880CF0, void, EndMessageBox, (NPCMessageBox * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00880F20, void, Start, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00881060, void, ChangeState, (NPCMessageBox * __this, NPCMessageBox_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00881070, void, FixedUpdate, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00881110, void, LayoutButtons, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00881430, void, LayoutButton, (NPCMessageBox * __this, InteractionBinding * interactionBinding, GameObject * button));
IL2CPP_REGISTER_METHOD(0x008818C0, void, StartMessageSound, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00881B00, void, StopMessageSound, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsSuspended, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00603D70, void, set_IsSuspended, (NPCMessageBox * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00881B70, SuspendableMask__Enum, get_Mask, (NPCMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00881B80, void, set_Mask, (NPCMessageBox * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00881C40, void, __ctor, (NPCMessageBox * __this));
}
