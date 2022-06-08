#include <interception_macros.h>

namespace app::methods::DashableSwitchSetupHolder {
IL2CPP_REGISTER_METHOD(0x00DD3140, DashableSwitchSetupData *, get_DeactivatedState, (DashableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00DD31E0, DashableSwitchSetupData *, get_ActivatedState, (DashableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00DD3280, bool, get_IsAnyTransitionPlaying, (DashableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00DD3420, void, CacheSetupStates, (DashableSwitchSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00DD3550, void, Perform, (DashableSwitchSetupHolder * __this, DashableSwitchSetupData * state));
IL2CPP_REGISTER_METHOD(0x00DD36C0, void, StopTimelines, (DashableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00DD3830, void, __ctor, (DashableSwitchSetupHolder * __this));
}
