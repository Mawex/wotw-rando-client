using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::DataProvider {
IL2CPP_REGISTER_METHOD(0x005332A0, bool, get_HasSynchronised, (DataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00533330, CacheData__Array *, get_Remote, (DataProvider * __this));
IL2CPP_REGISTER_METHOD(0x005333C0, CacheData__Array *, get_Local, (DataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00533450, void, __ctor, (DataProvider * __this, IServiceSynchronizer * serviceSynchronizer));
IL2CPP_REGISTER_METHOD(0x005335B0, void, SetUser, (DataProvider * __this, String * user));
IL2CPP_REGISTER_METHOD(0x00533670, void, Award, (DataProvider * __this, CacheData * data, bool forceUpdate));
IL2CPP_REGISTER_METHODINFO(0x04751918, DataProvider_Award__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00533AC0, void, SynchronizeWithServer, (DataProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04722330, DataProvider_SynchronizeWithServer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005340B0, void, ClearLocalCache, (DataProvider * __this));
IL2CPP_REGISTER_METHOD(0x005341A0, void, SerializeLocalData, (DataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00534260, void, BuildFor, (DataProvider * __this, String * user));
IL2CPP_REGISTER_METHOD(0x00534670, void, _BuildFor_b__17_0, (DataProvider * __this, Task_1_System_Byte_ * t));
IL2CPP_REGISTER_METHODINFO(0x0476BFB0, DataProvider__BuildFor_b__17_0__MethodInfo);
}
