using namespace app;

namespace app::methods::RaceMenuScreenNotificationSystem {
IL2CPP_REGISTER_METHOD(0x0070EBC0, void, __ctor, (RaceMenuScreenNotificationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0070EEA0, void, UpdateNotificationSystem, (RaceMenuScreenNotificationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0070EFE0, void, Initiate, (RaceMenuScreenNotificationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0070F090, void, CreateAndRunNotificationCheckers, (RaceMenuScreenNotificationSystem * __this, RaceSettings__Array * raceSettingsArray, UberStateValueStore * uberStateValueStore, int32_t saveSlotIndex));
IL2CPP_REGISTER_METHOD(0x0070F480, bool, ShouldShowNotification, (RaceMenuScreenNotificationSystem * __this, String * leaderboardsID, Action_1_Boolean_ * ShowNotificationAction));
IL2CPP_REGISTER_METHOD(0x0070F710, bool, IsThereAnyNotification, (RaceMenuScreenNotificationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0070F8A0, void, NotificationSeen, (RaceMenuScreenNotificationSystem * __this, String * leaderboardsID));
}
