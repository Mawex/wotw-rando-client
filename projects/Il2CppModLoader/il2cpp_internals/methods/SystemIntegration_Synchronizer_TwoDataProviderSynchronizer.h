using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::TwoDataProviderSynchronizer {
IL2CPP_REGISTER_METHOD(0x00CDA2A0, bool, get_HasSynchronised, (TwoDataProviderSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (TwoDataProviderSynchronizer * __this, IDataProvider * playFabAchievementProvider, IDataProvider * platformAchievementProvider));
IL2CPP_REGISTER_METHOD(0x00CDA360, CacheData__Array *, get_Local, (TwoDataProviderSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x00CDA3F0, CacheData__Array *, get_Remote, (TwoDataProviderSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Award, (TwoDataProviderSynchronizer * __this, CacheData * data, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x00CDA480, void, SynchronizeWithServer, (TwoDataProviderSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearLocalCache, (TwoDataProviderSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildFor, (TwoDataProviderSynchronizer * __this, String * user));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetUser, (TwoDataProviderSynchronizer * __this, String * user));
}
