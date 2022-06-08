#include <interception_macros.h>

namespace app::methods::NotificationChecker {
IL2CPP_REGISTER_METHOD(0x0060C330, void, __ctor, (NotificationChecker * __this, RaceSettings * settings, String * raceID, int32_t originalRank, LeaderBoardService * leaderBoardService, int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x0060C3F0, void, UpdateNotificationChecker, (NotificationChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060C400, void, RefreshCurrentLeaderboardPlace, (NotificationChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060C540, void, TryReadLeaderboardData, (NotificationChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060C9D0, bool, CheckIfPlayerWasBeaten, (NotificationChecker * __this, int32_t playerIndex));
IL2CPP_REGISTER_METHOD(0x0060C9F0, void, SavePlayerIndex, (NotificationChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, ShouldShowNotification, (NotificationChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060CCB0, void, ShowNotification, (NotificationChecker * __this, bool show));
}
