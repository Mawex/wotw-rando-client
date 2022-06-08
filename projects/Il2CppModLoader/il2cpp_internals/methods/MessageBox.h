#include <interception_macros.h>

namespace app::methods::MessageBox {
IL2CPP_REGISTER_METHOD(0x0158DA80, HashSet_1_Moon_ISuspendable_ *, GetSuspendables, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, SoundHost *, get_SoundHost, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_SoundHost, (MessageBox * __this, SoundHost * value));
IL2CPP_REGISTER_METHOD(0x0158DCE0, void, add_OnMessageScreenHide, (MessageBox * __this, Action_1_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x0158DDD0, void, remove_OnMessageScreenHide, (MessageBox * __this, Action_1_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x0158DEC0, void, add_OnNextMessage, (MessageBox * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0158DFB0, void, remove_OnNextMessage, (MessageBox * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0158E0A0, void, add_OnMessageDestroyed, (MessageBox * __this, Action_1_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x0158E190, void, remove_OnMessageDestroyed, (MessageBox * __this, Action_1_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x0158E280, void, OverrideLanuage, (MessageBox * __this, Language__Enum language));
IL2CPP_REGISTER_METHOD(0x0158E290, void, SetAvatar, (MessageBox * __this, GameObject * avatarPrefab));
IL2CPP_REGISTER_METHOD(0x0158E850, void, SetQuest, (MessageBox * __this, Quest * quest, QuestMessageIcon_QuestMode__Enum questMode));
IL2CPP_REGISTER_METHOD(0x0158E980, void, SetWisp, (MessageBox * __this, WispMessageIcon_Wisp__Enum wisp));
IL2CPP_REGISTER_METHOD(0x0158EC10, void, SetAbility, (MessageBox * __this, EquipmentType__Enum ability));
IL2CPP_REGISTER_METHOD(0x0158EFF0, void, SetShard, (MessageBox * __this, SpiritShardType__Enum shard));
IL2CPP_REGISTER_METHOD(0x0158F350, void, SetPickup, (MessageBox * __this, PickupContext * context));
IL2CPP_REGISTER_METHOD(0x0158F490, void, SetRaceData, (MessageBox * __this, float elapsedTime, bool showTrialReward));
IL2CPP_REGISTER_METHOD(0x002FBD50, void, SetAvatarArray, (MessageBox * __this, GameObject__Array * avatarPrefabs));
IL2CPP_REGISTER_METHOD(0x0158F5E0, void, HideMessageScreenImmediately, (MessageBox * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHOD(0x0158F730, void, HideMessageScreen, (MessageBox * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHOD(0x0158F890, void, ShowHidables, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0158F990, void, Awake, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0158FD00, void, OnDestroy, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01590040, void, Update, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01590130, void, RemoveMessageFade, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01590140, void, SetMessageFade, (MessageBox * __this, float time));
IL2CPP_REGISTER_METHOD(0x015908C0, void, SetMessage, (MessageBox * __this, MessageDescriptor messageDescriptor, String * replace, String * with));
IL2CPP_REGISTER_METHOD(0x01590A00, void, RefreshText, (MessageBox * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DFA8, MessageBox_RefreshText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01590AB0, void, RefreshText, (MessageBox * __this, String * replace, String * with));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01591640, void, SetMessageProvider, (MessageBox * __this, MessageProvider * messageProvider, String * replace, String * with));
IL2CPP_REGISTER_METHOD(0x01591660, int32_t, get_MessageCount, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x00D28C50, void, SetWaitDuration, (MessageBox * __this, float duration));
IL2CPP_REGISTER_METHOD(0x01591680, bool, HasFiniteDuration, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0065FBC0, String *, get_CurrentMessage, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01202580, EmotionType__Enum, get_CurrentEmotion, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x005FDE00, Event_1 *, get_CurrentMessageSound, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01591690, void, FinishWriting, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01591890, bool, get_IsLastMessage, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x015918C0, bool, get_FinishedWriting, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x015919D0, void, NextMessage, (MessageBox * __this));
IL2CPP_REGISTER_METHOD(0x01591B50, String *, GetPercentage, ());
IL2CPP_REGISTER_METHOD(0x01591CE0, bool, ShouldAddSpaceBeforePercentage, ());
IL2CPP_REGISTER_METHOD(0x01591E00, void, __ctor, (MessageBox * __this));
}
