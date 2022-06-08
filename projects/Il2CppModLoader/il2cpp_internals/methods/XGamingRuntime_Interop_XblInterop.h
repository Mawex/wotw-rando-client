#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XblInterop {
IL2CPP_REGISTER_METHOD(0x030B3F20, int32_t, XblAchievementsResultGetAchievements, (XblAchievementsResultHandle_1 resultHandle, void * * achievements, SizeT * achievementsCount));
IL2CPP_REGISTER_METHOD(0x030B3FD0, int32_t, XblAchievementsGetAchievementsForTitleIdAsync, (XblContextHandle_1 xboxLiveContext, uint64_t xboxUserId, uint32_t titleId, XblAchievementType__Enum type, bool unlockedOnly, XblAchievementOrderBy__Enum orderBy, uint32_t skipItems, uint32_t maxItems, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B40B0, int32_t, XblAchievementsGetAchievementsForTitleIdResult, (XAsyncBlockPtr asyncBlock, XblAchievementsResultHandle_1 * result));
IL2CPP_REGISTER_METHOD(0x030B4160, int32_t, XblAchievementsUpdateAchievementForTitleIdAsync, (XblContextHandle_1 xboxLiveContext, uint64_t xboxUserId, uint32_t titleId, Byte__Array * serviceConfigurationId, Byte__Array * achievementId, uint32_t percentComplete, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B4250, int32_t, XblContextCreateHandle, (XUserHandle_1 user, XblContextHandle_1 * context));
IL2CPP_REGISTER_METHOD(0x030B4300, void, XblContextCloseHandle, (XblContextHandle_1 xboxLiveContextHandle));
IL2CPP_REGISTER_METHOD(0x030B43A0, int32_t, XblWrapper_XblInitialize, (Byte__Array * scid, XTaskQueueHandle internalWorkQueue));
IL2CPP_REGISTER_METHOD(0x030B4450, int32_t, XblCleanupAsync, (XAsyncBlockPtr asyncBlock));
}
