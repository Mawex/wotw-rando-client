#include <interception_macros.h>

namespace app::methods::DoorSetupHolder {
IL2CPP_REGISTER_METHOD(0x00BDB0E0, DoorSetupData *, get_ClosedState, (DoorSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00BDB180, DoorSetupData *, get_OpenedState, (DoorSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00BDB220, void, CacheSetupStates, (DoorSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00BDB350, void, Apply, (DoorSetupHolder * __this, DoorSetupData * setupData, Transform * doorTransform, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00BDB420, void, Perform, (DoorSetupHolder * __this, DoorSetupData * state));
IL2CPP_REGISTER_METHOD(0x00BDB510, void, StopTimelines, (DoorSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00BDB680, void, __ctor, (DoorSetupHolder * __this));
}
