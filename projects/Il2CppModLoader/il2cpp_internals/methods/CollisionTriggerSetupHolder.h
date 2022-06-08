#include <interception_macros.h>

namespace app::methods::CollisionTriggerSetupHolder {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (CollisionTriggerSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x012D29E0, CollisionTriggerSetupData *, get_NewState, (CollisionTriggerSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x012D2A90, void, CacheSetupStates, (CollisionTriggerSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x012D2B70, void, StopTimelines, (CollisionTriggerSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x012D2C70, void, Perform, (CollisionTriggerSetupHolder * __this, CollisionTriggerSetupData * state));
IL2CPP_REGISTER_METHOD(0x012D2E30, void, __ctor, (CollisionTriggerSetupHolder * __this));
}
