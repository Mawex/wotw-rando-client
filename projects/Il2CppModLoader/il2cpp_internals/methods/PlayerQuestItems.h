using namespace app;

namespace app::methods::PlayerQuestItems {
IL2CPP_REGISTER_METHOD(0x014287B0, void, AddItem, (PlayerQuestItems * __this, QuestItemType__Enum item));
IL2CPP_REGISTER_METHOD(0x01428880, bool, HasItem, (PlayerQuestItems * __this, QuestItemType__Enum item));
IL2CPP_REGISTER_METHOD(0x01428950, void, SetReferenceToSein, (PlayerQuestItems * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x01428970, void, __ctor, (PlayerQuestItems * __this));
}
