using namespace app;

namespace app::methods::QuestIconsUI {
IL2CPP_REGISTER_METHOD(0x00E88290, GameObject *, get_ObjectiveMarker, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E885B0, void, Awake, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E88640, void, FixedUpdate, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E88650, void, HighlightItem, (QuestIconsUI * __this, CleverMenuItem * cleverMenuItem));
IL2CPP_REGISTER_METHOD(0x00E88800, void, SetMarkerOnQuest, (QuestIconsUI * __this, Quest * quest));
IL2CPP_REGISTER_METHOD(0x00E88A80, void, UpdateIcons, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E88C50, void, BuildUI, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E88C70, void, AddIcons, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E890F0, QuestIconUI *, CreateIcon, (QuestIconsUI * __this, RuntimeQuest * quest, bool addToList));
IL2CPP_REGISTER_METHOD(0x00E897A0, void, ShowObjectiveMarker, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89960, void, HideObjectiveMarker, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89A60, void, DestroyAllIcons, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, IsVisible, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89C10, void, Reset, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89C70, void, Show, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89E60, Quest *, get_ActiveQuest, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89F10, void, Hide, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E89F50, void, UpdateQuestIcons, (QuestIconsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E8A320, void, __ctor, (QuestIconsUI * __this));
}
