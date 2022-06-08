using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::Achievements::SteamAchievements {
IL2CPP_REGISTER_METHOD(0x0052E6A0, String *, get_Name, (SteamAchievements * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronising, (SteamAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_HasSynchronised, (SteamAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_HasSynchronised, (SteamAchievements * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052E720, bool, get_Disable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0052E7A0, void, set_Disable, (bool value));
IL2CPP_REGISTER_METHOD(0x0052E830, void, __ctor, (SteamAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052EBB0, void, OnAchievementStored, (SteamAchievements * __this, UserAchievementStored_t param));
IL2CPP_REGISTER_METHODINFO(0x0470E0A0, SteamAchievements_OnAchievementStored__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052EE20, void, OnUserStatsStored, (SteamAchievements * __this, UserStatsStored_t param));
IL2CPP_REGISTER_METHODINFO(0x04730E28, SteamAchievements_OnUserStatsStored__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052F0C0, void, OnUserStatsReceived, (SteamAchievements * __this, UserStatsReceived_t param));
IL2CPP_REGISTER_METHODINFO(0x047792C0, SteamAchievements_OnUserStatsReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, CacheData__Array *, AwardedOnServer, (SteamAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052F3F0, void, AwardOnServer, (SteamAchievements * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x0052F660, void, UpdateFromServer, (SteamAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052F670, void, Clear, (SteamAchievements * __this));
}
