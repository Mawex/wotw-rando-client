using namespace app;

namespace app::methods::Moon::Setups::ChangeStateSetupHolder {
IL2CPP_REGISTER_METHOD(0x00E253C0, String *, get_NewStateName, (ChangeStateSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (ChangeStateSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00E25440, ChangeStateSetupData *, get_NewState, (ChangeStateSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00E254F0, void, CacheSetupStates, (ChangeStateSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00E255E0, bool, Perform, (ChangeStateSetupHolder * __this, ChangeStateSetupData * state));
IL2CPP_REGISTER_METHOD(0x00CA1C10, void, __ctor, (ChangeStateSetupHolder * __this));
}
