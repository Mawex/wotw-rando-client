#include <interception_macros.h>

namespace app::methods::LeaderboardData {
IL2CPP_REGISTER_METHOD(0x002FC6D0, Leaderboard__Enum, get_Type, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, LeaderboardFilter__Enum, get_Filter, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Title, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x015B6850, int32_t, get_Count, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, uint32_t, get_TotalRowCount, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x015B68E0, void, __ctor, (LeaderboardData * __this, Leaderboard__Enum type, LeaderboardFilter__Enum filter, String * title, uint32_t totalRowCount, IEnumerable_1_LeaderboardData_Entry_ * entries));
IL2CPP_REGISTER_METHOD(0x015B6A90, bool, Update, (LeaderboardData * __this, LeaderboardData * newData));
IL2CPP_REGISTER_METHOD(0x015B6BB0, IEnumerator_1_LeaderboardData_Entry_ *, GetEnumerator, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x015B6BB0, IEnumerator *, IEnumerable_GetEnumerator, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x015B6C80, LeaderboardData_Entry *, get_Item, (LeaderboardData * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x015B6D30, String *, ToString, (LeaderboardData * __this));
IL2CPP_REGISTER_METHOD(0x015B6E70, LeaderboardData_Entry *, GetEntryByUserHandle, (LeaderboardData * __this, String * userHandle));
}
