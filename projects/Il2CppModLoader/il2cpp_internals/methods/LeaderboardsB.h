#include <interception_macros.h>

namespace app::methods::LeaderboardsB {
IL2CPP_REGISTER_METHOD(0x015BA0C0, LeaderboardFilter__Enum, get_m_currentFilter, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BA160, void, set_m_currentFilter, (LeaderboardsB * __this, LeaderboardFilter__Enum value));
IL2CPP_REGISTER_METHOD(0x015BA200, LeaderboardRowUI *, get_CurrentRowUI, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_IsVisible, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BA230, void, set_IsVisible, (LeaderboardsB * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeEntered, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BA590, void, OnEnable, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BA900, void, OnOnlineStateChanged, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B208, LeaderboardsB_OnOnlineStateChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015BA940, void, OnDisable, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, get_IsActive, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BABF0, void, set_IsActive, (LeaderboardsB * __this, bool value));
IL2CPP_REGISTER_METHOD(0x015BAC00, void, UpdateHighlight, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_IsHighlightVisible, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BAC10, void, set_IsHighlightVisible, (LeaderboardsB * __this, bool value));
IL2CPP_REGISTER_METHOD(0x015BADB0, void, Awake, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BAE40, void, EnterInGroup, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BAE60, bool, OnMenuItemChangedInGroup, (LeaderboardsB * __this, CleverMenuItemGroup * group));
IL2CPP_REGISTER_METHOD(0x015BAF40, bool, get_Available, ());
IL2CPP_REGISTER_METHOD(0x015BAFF0, LeaderboardData *, GetLeaderboard, (LeaderboardB__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015BB1A0, LeaderboardData *, get_CurrentLeaderboardData, ());
IL2CPP_REGISTER_METHOD(0x015BB240, void, ClearTableUI, ());
IL2CPP_REGISTER_METHOD(0x015BB2E0, bool, UpdateLeaderboard, (Leaderboard__Enum leaderboard, LeaderboardFilter__Enum filter, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x015BB660, void, LeaderboardResultsObtained, (List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * list, Leaderboard__Enum leaderboard, DifficultyMode__Enum difficulty, LeaderboardFilter__Enum filter));
IL2CPP_REGISTER_METHOD(0x015BC4D0, void, ChangeState, (LeaderboardsB_LeaderboardQueryState__Enum newState));
IL2CPP_REGISTER_METHOD(0x015BC5A0, void, OnReadyEnter, ());
IL2CPP_REGISTER_METHOD(0x015BC830, void, OnFetchingDataEnter, ());
IL2CPP_REGISTER_METHOD(0x015BCAC0, void, ShowScoreCard, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanShowScoreCard, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BCB30, void, RefreshShowScoreCardLegend, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BCC50, void, HandleMouseMove, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BCFE0, void, FixedUpdate, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BDD40, void, NextLeaderboard, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BDE60, void, NextDifficulty, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BDF90, void, PreviousDifficulty, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BE0B0, void, RefreshTableUI, ());
IL2CPP_REGISTER_METHOD(0x015BE190, void, RefreshRowIndex, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BE430, void, RefreshUIStrings, ());
IL2CPP_REGISTER_METHOD(0x015BEC00, void, PreviousLeaderboard, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BED20, void, RowDown, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BF050, void, RowUp, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BF380, void, NextFilter, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BA900, void, DoDelayedLeaderboardGet, (LeaderboardsB * __this));
IL2CPP_REGISTER_METHOD(0x015BF470, void, __ctor, (LeaderboardsB * __this));
}
