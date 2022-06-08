using namespace app;

namespace app::methods::XboxOneAchievements {
IL2CPP_REGISTER_METHOD(0x00597000, Action_1_Achievement_ *, get_OnAchievementUnlocked, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x005970A0, void, set_OnAchievementUnlocked, (Action_1_Achievement_ * value));
IL2CPP_REGISTER_METHOD(0x00597150, Action_1_Challenge_ *, get_OnChallengeUnlocked, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x005971F0, void, set_OnChallengeUnlocked, (Action_1_Challenge_ * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AchievementsFetched, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, ReadOnlyCollection_1_Achievement_ *, get_UnlockedAchievements, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, ReadOnlyCollection_1_Achievement_ *, get_LockedAchievements, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, ReadOnlyCollection_1_Achievement_ *, get_SecretAchievements, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, ReadOnlyCollection_1_Challenge_ *, get_UnlockedChallenges, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, ReadOnlyCollection_1_Challenge_ *, get_LockedChallenges, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, ReadOnlyCollection_1_Challenge_ *, get_SecretChallenges, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x005972A0, bool, get_EnableAchievements, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597340, void, set_EnableAchievements, (bool value));
IL2CPP_REGISTER_METHOD(0x005973F0, bool, UpdateAchievements, (Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x00417870, bool, AwardAchievement, (String * achievementId, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneAchievements * __this));
IL2CPP_REGISTER_METHOD(0x00597480, void, __cctor, (MethodInfo * method));
}
