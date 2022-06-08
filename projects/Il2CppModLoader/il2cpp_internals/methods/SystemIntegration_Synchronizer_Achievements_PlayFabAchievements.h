using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::Achievements::PlayFabAchievements {
IL2CPP_REGISTER_METHOD(0x0052C5D0, String *, get_Name, (PlayFabAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsSynchronising, (PlayFabAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsSynchronising, (PlayFabAchievements * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_HasSynchronised, (PlayFabAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_HasSynchronised, (PlayFabAchievements * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052C670, bool, get_Disable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0052C6F0, void, set_Disable, (bool value));
IL2CPP_REGISTER_METHOD(0x002FB930, CacheData__Array *, AwardedOnServer, (PlayFabAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C780, void, AwardOnServer, (PlayFabAchievements * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x0052CE00, void, CompletedAward, (PlayFabAchievements * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x0052D060, void, UpdateFromServer, (PlayFabAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052DC70, void, Clear, (PlayFabAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052DD00, void, __ctor, (PlayFabAchievements * __this));
}
