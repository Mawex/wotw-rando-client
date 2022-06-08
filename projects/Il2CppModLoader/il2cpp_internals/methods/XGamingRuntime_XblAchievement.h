#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XblAchievement {
IL2CPP_REGISTER_METHOD(0x030BBB30, void, __ctor, (XblAchievement * __this, XblAchievement_1 interopAchievement));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Id, (XblAchievement * __this));
IL2CPP_REGISTER_METHOD(0x00654950, XblAchievementProgressState__Enum, get_ProgressState, (XblAchievement * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XblAchievementProgression *, get_Progression, (XblAchievement * __this));
}
