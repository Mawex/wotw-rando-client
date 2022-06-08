using namespace app;

namespace app::methods::Moon::UI::MessageBox {
IL2CPP_REGISTER_METHOD(0x00D26F90, HashSet_1_Moon_ISuspendable_ *, GetSuspendables, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D271F0, void, add_OnMessageScreenHide, (MessageBox_1 * __this, Action_1_Moon_UI_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x00D272E0, void, remove_OnMessageScreenHide, (MessageBox_1 * __this, Action_1_Moon_UI_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x00D273D0, void, add_OnNextMessage, (MessageBox_1 * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00D274C0, void, remove_OnNextMessage, (MessageBox_1 * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00D275B0, void, OverrideLanuage, (MessageBox_1 * __this, Language__Enum language));
IL2CPP_REGISTER_METHOD(0x00D275C0, void, SetAvatar, (MessageBox_1 * __this, GameObject * avatarPrefab));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, SetAvatarArray, (MessageBox_1 * __this, GameObject__Array * avatarPrefabs));
IL2CPP_REGISTER_METHOD(0x00D27B70, void, HideMessageScreen, (MessageBox_1 * __this, MessageBox_HideAction__Enum_1 action));
IL2CPP_REGISTER_METHOD(0x00D27C30, void, Awake, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D27ED0, void, OnDestroy, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28170, void, Start, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28260, void, Update, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D282C0, void, RemoveMessageFade, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D282D0, void, SetMessageFade, (MessageBox_1 * __this, float time));
IL2CPP_REGISTER_METHOD(0x00D28530, void, SetMessage, (MessageBox_1 * __this, MessageDescriptor messageDescriptor));
IL2CPP_REGISTER_METHOD(0x00D285C0, void, RefreshText, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04708D70, MessageBox_1_RefreshText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28C20, void, SetMessageProvider, (MessageBox_1 * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x00D28C30, int32_t, get_MessageCount, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28C50, void, SetWaitDuration, (MessageBox_1 * __this, float duration));
IL2CPP_REGISTER_METHOD(0x002FBD40, String *, get_CurrentMessage, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x003FFBD0, EmotionType__Enum, get_CurrentEmotion, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x005B0220, Event_1 *, get_CurrentMessageSound, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28C70, void, FinishWriting, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28D80, bool, get_IsLastMessage, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28DA0, bool, get_FinishedWriting, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D28EB0, void, NextMessage, (MessageBox_1 * __this));
IL2CPP_REGISTER_METHOD(0x00D29030, void, __ctor, (MessageBox_1 * __this));
}
