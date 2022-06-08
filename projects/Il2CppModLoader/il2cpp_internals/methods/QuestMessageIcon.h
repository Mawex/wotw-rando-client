using namespace app;

namespace app::methods::QuestMessageIcon {
IL2CPP_REGISTER_METHOD(0x00E8B100, void, SetQuest, (QuestMessageIcon * __this, Quest * quest, QuestMessageIcon_QuestMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x00E8B460, void, SetIcon, (QuestMessageIcon * __this, Texture2D * icon));
IL2CPP_REGISTER_METHOD(0x00E8B510, void, SetName, (QuestMessageIcon * __this, MessageProvider * name));
IL2CPP_REGISTER_METHOD(0x00E8B5D0, void, SetDescription, (QuestMessageIcon * __this, MessageProvider * description));
IL2CPP_REGISTER_METHOD(0x00E8B6C0, void, SetDescription, (QuestMessageIcon * __this, MessageDescriptor descriptor));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (QuestMessageIcon * __this));
}
