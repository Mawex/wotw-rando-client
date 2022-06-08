#include <interception_macros.h>

namespace app::methods::RaceLeaderboardScreen {
IL2CPP_REGISTER_METHOD(0x00E9FCC0, RaceLeaderboardEntry *, get_SelectedEntry, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x0065FBC0, Action_2_String_Boolean_ *, get_OnSelected, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_OnSelected, (RaceLeaderboardScreen * __this, Action_2_String_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x0065FBE0, Action *, get_OnCancelDownload, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_OnCancelDownload, (RaceLeaderboardScreen * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00E9FDE0, CleverMenuItemSelectionManager *, get_SelectionManager, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00E9FEC0, void, Awake, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA01A0, void, OnDestroy, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA04E0, void, OnCancelDownloadPressed, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04701ED8, RaceLeaderboardScreen_OnCancelDownloadPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA05F0, void, SetSyncing, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA0600, void, Setup, (RaceLeaderboardScreen * __this, IEnumerable_1_Moon_Race_LeaderBoardEntry_ * leaderboard, RaceContentType__Enum raceContentType));
IL2CPP_REGISTER_METHOD(0x00EA08B0, void, Setup, (RaceLeaderboardScreen * __this, IEnumerable_1_Moon_Race_LeaderBoardEntry_ * leaderboard, RaceContentType__Enum raceContentType, int32_t * entriesCount));
IL2CPP_REGISTER_METHOD(0x00EA0970, void, SetTitle, (RaceLeaderboardScreen * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x00EA0A60, void, CreateEntries, (RaceLeaderboardScreen * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x00EA0E70, void, ClearEntries, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA11B0, void, SetDownloadingPopup, (RaceLeaderboardScreen * __this, bool state));
IL2CPP_REGISTER_METHOD(0x00EA1320, void, OnPressed, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B8D0, RaceLeaderboardScreen_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA1470, void, OnSpectatePressed, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA15C0, void, OnViewCardPressed, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA16B0, void, SetupEntries, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA2260, void, RefreshLegendCaptions, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA2770, void, EnableGhostInputs, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA2AC0, void, DisableGhostInputs, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA2E10, MessageProvider *, GetLeaderboardToggleMessage, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA2F30, MessageProvider *, GetLeaderboardFocusMessage, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowScoreCard, (RaceLeaderboardScreen * __this, String * userID));
IL2CPP_REGISTER_METHOD(0x00EA3050, bool, CanShowScoreCard, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHOD(0x00EA3130, void, RefreshShowScoreCardLegend, (RaceLeaderboardScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x047638A0, RaceLeaderboardScreen_RefreshShowScoreCardLegend__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA3310, void, __ctor, (RaceLeaderboardScreen * __this));
}
