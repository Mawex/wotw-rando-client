#include <interception_macros.h>

namespace app::methods::LeaderboardTableUI {
IL2CPP_REGISTER_METHOD(0x015B8B20, LeaderboardTableUI_LeaderboardMetaData *, get_CurrentMetaData, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8C90, LeaderboardRowUI *, GetRowByIndex, (LeaderboardTableUI * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x015B8D60, void, Awake, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8D70, void, GenerateTable, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B94C0, void, DestroyTable, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B97F0, void, UpdateTable, (LeaderboardTableUI * __this, LeaderboardData * data));
IL2CPP_REGISTER_METHOD(0x015B9CC0, void, ClearTable, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B8D60, void, OnInstantiate, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B9CD0, void, __ctor, (LeaderboardTableUI * __this));
IL2CPP_REGISTER_METHOD(0x015B9F00, bool, _get_CurrentMetaData_b__11_0, (LeaderboardTableUI * __this, LeaderboardTableUI_LeaderboardMetaData * x));
IL2CPP_REGISTER_METHODINFO(0x04783310, LeaderboardTableUI__get_CurrentMetaData_b__11_0__MethodInfo);
}
