using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::Achievements::GrdkAchievements {
IL2CPP_REGISTER_METHOD(0x0052BB80, String *, get_Name, (GrdkAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052BC00, bool, get_IsSynchronising, (GrdkAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052BCA0, bool, get_HasSynchronised, (GrdkAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052BD40, bool, get_Disable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0052BDC0, void, set_Disable, (bool value));
IL2CPP_REGISTER_METHOD(0x0052BE50, CacheData__Array *, AwardedOnServer, (GrdkAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C2C0, void, AwardOnServer, (GrdkAchievements * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x0052C3C0, void, UpdateFromServer, (GrdkAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C490, void, Clear, (GrdkAchievements * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GrdkAchievements * __this));
}
