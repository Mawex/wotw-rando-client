using namespace app;

namespace app::methods::XGamingRuntime::SDK_XBL {
IL2CPP_REGISTER_METHOD(0x030B9230, int32_t, XblAchievementsResultGetAchievements, (XblAchievementsResultHandle * resultHandle, XblAchievement__Array * * achievements));
IL2CPP_REGISTER_METHOD(0x030B9520, void, XblAchievementsGetAchievementsForTitleIdAsync, (XblContextHandle * xboxLiveContext, uint64_t xboxUserId, uint32_t titleId, XblAchievementType__Enum type, bool unlockedOnly, XblAchievementOrderBy__Enum orderBy, uint32_t skipItems, uint32_t maxItems, SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B98F0, void, XblAchievementsUpdateAchievementAsync, (XblContextHandle * xboxLiveContext, uint64_t xboxUserId, uint32_t titleId, String * serviceConfigurationId, String * achievementId, uint32_t percentComplete, SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B9CD0, int32_t, XblInitialize, (String * scid));
IL2CPP_REGISTER_METHOD(0x030B9E30, void, XblCleanup, (SDK_XBL_XblCleanupResult * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030BA160, int32_t, XblContextCreateHandle, (XUserHandle * user, XblContextHandle * * context));
IL2CPP_REGISTER_METHOD(0x030BA390, void, XblContextCloseHandle, (XblContextHandle * xboxLiveContextHandle));
}
