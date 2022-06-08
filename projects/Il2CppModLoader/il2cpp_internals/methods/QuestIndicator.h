using namespace app;

namespace app::methods::QuestIndicator {
IL2CPP_REGISTER_METHOD(0x00E8A800, bool, get_HasActiveQuest, (QuestIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanShowQuest, (QuestIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowIndicator, (QuestIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00E8A8E0, Vector3, get_TargetPositon, (QuestIndicator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RotateIndicator, (QuestIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ScaleByDistance, (QuestIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00723FF0, void, __ctor, (QuestIndicator * __this));
}
