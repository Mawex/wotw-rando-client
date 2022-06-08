#include <interception_macros.h>

namespace app::methods::QuestIconUI {
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_WorldMapDepth, (QuestIconUI * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_WorldMapDepth, (QuestIconUI * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E87DB0, bool, IsQuestLive, (QuestIconUI * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetQuest, (QuestIconUI * __this, RuntimeQuest * runtimeQuest));
IL2CPP_REGISTER_METHOD(0x00E87E80, void, UpdateIcon, (QuestIconUI * __this, QuestIconMode__Enum IconMode));
IL2CPP_REGISTER_METHOD(0x00E880E0, void, ShowIcon, (QuestIconUI * __this));
IL2CPP_REGISTER_METHOD(0x00443C10, void, HideIcon, (QuestIconUI * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (QuestIconUI * __this));
}
