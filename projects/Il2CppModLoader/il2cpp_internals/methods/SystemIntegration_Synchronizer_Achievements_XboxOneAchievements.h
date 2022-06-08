#include <interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::Achievements::XboxOneAchievements {
IL2CPP_REGISTER_METHOD(0x00532FC0, bool, get_Disable, ());
IL2CPP_REGISTER_METHOD(0x00533040, void, set_Disable, (bool value));
IL2CPP_REGISTER_METHOD(0x005330D0, String *, get_Name, (XboxOneAchievements_1 * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsSynchronising, (XboxOneAchievements_1 * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsSynchronising, (XboxOneAchievements_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00533160, bool, get_HasSynchronised, (XboxOneAchievements_1 * __this));
IL2CPP_REGISTER_METHOD(0x00533170, void, set_HasSynchronised, (XboxOneAchievements_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA280, CacheData__Array *, AwardedOnServer, (XboxOneAchievements_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AwardOnServer, (XboxOneAchievements_1 * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFromServer, (XboxOneAchievements_1 * __this));
IL2CPP_REGISTER_METHOD(0x00533180, void, Clear, (XboxOneAchievements_1 * __this));
IL2CPP_REGISTER_METHOD(0x00533210, void, __ctor, (XboxOneAchievements_1 * __this));
}
