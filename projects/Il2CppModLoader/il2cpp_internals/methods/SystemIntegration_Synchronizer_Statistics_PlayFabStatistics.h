#include <interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics {
IL2CPP_REGISTER_METHOD(0x00535A80, String *, get_Name, (PlayFabStatistics * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronising, (PlayFabStatistics * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasSynchronised, (PlayFabStatistics * __this));
IL2CPP_REGISTER_METHOD(0x00535B00, void, __ctor, (PlayFabStatistics * __this, ISignInProvider * primarySignInProvider, ISignInProvider * secondarySignInProvider));
IL2CPP_REGISTER_METHOD(0x00535C70, CacheData__Array *, AwardedOnServer, (PlayFabStatistics * __this));
IL2CPP_REGISTER_METHOD(0x00535D00, void, AwardOnServer, (PlayFabStatistics * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFromServer, (PlayFabStatistics * __this));
IL2CPP_REGISTER_METHOD(0x005363A0, void, Clear, (PlayFabStatistics * __this));
IL2CPP_REGISTER_METHOD(0x00536450, void, GetStatistics, (PlayFabStatistics * __this, String * statisticName, LeaderboardFilter__Enum filter, bool forceIncludePlayer, Action_1_System_Collections_Generic_List_1__2 * onComplete));
IL2CPP_REGISTER_METHOD(0x00537DA0, void, GetStatisticsEntity, (PlayFabStatistics * __this, String * statisticName, LeaderboardFilter__Enum filter, Action_1_System_Collections_Generic_List_1__3 * onComplete));
}
