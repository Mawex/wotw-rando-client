using namespace app;

namespace app::methods::LeaderboardRowUI {
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_UserHandle, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8370, Rect, get_Bounds, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8540, void, SetContent, (LeaderboardRowUI * __this, LeaderboardData_Entry * entry));
IL2CPP_REGISTER_METHOD(0x014D9200, void, Awake, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x00443CC0, void, Show, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8A80, void, Highlight, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8AD0, void, Unhighlight, (LeaderboardRowUI * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LeaderboardRowUI * __this));
}
