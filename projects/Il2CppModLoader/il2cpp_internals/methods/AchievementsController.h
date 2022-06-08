#include <interception_macros.h>

namespace app::methods::AchievementsController {
IL2CPP_REGISTER_METHOD(0x004B4190, ReadOnlyCollection_1_Achievement_ *, get_UnlockedAchievements, ());
IL2CPP_REGISTER_METHOD(0x004B43B0, ReadOnlyCollection_1_Achievement_ *, get_LockedAchievements, ());
IL2CPP_REGISTER_METHOD(0x004B45D0, ReadOnlyCollection_1_Achievement_ *, get_SecretAchievements, ());
IL2CPP_REGISTER_METHOD(0x004B47F0, ReadOnlyCollection_1_Challenge_ *, get_UnlockedChallenges, ());
IL2CPP_REGISTER_METHOD(0x004B4A10, ReadOnlyCollection_1_Challenge_ *, get_LockedChallenges, ());
IL2CPP_REGISTER_METHOD(0x004B4C30, ReadOnlyCollection_1_Challenge_ *, get_SecretChallenges, ());
IL2CPP_REGISTER_METHOD(0x004B4E50, void, FixedUpdate, (AchievementsController * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Destroy, (AchievementsController * __this));
IL2CPP_REGISTER_METHOD(0x004B53A0, void, AwardAchievement, (AchievementAsset * achievement));
IL2CPP_REGISTER_METHOD(0x004B5CE0, void, UpdateAchievementProgress, (AchievementAsset * achievement, int32_t progress));
IL2CPP_REGISTER_METHOD(0x004B5E90, void, AddAchievementToDisplay, (String * text, Texture * icon));
IL2CPP_REGISTER_METHOD(0x004B6010, void, ClearAchievementsQueue, ());
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AchievementsController * __this));
IL2CPP_REGISTER_METHOD(0x004B6130, void, __cctor, ());
}
