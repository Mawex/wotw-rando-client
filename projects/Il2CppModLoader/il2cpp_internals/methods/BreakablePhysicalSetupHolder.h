using namespace app;

namespace app::methods::BreakablePhysicalSetupHolder {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (BreakablePhysicalSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00D4E400, BreakablePhysicalSetupData *, get_NewState, (BreakablePhysicalSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00D4E4B0, void, CacheSetupStates, (BreakablePhysicalSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00D4E590, void, StopTimelines, (BreakablePhysicalSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00D4E690, void, Perform, (BreakablePhysicalSetupHolder * __this, BreakablePhysicalSetupData * state));
IL2CPP_REGISTER_METHOD(0x00D4E850, void, __ctor, (BreakablePhysicalSetupHolder * __this));
}
