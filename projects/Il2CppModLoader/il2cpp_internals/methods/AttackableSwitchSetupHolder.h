#include <interception_macros.h>

namespace app::methods::AttackableSwitchSetupHolder {
IL2CPP_REGISTER_METHOD(0x00855D30, AttackableSwitchSetupData *, get_DeactivatedState, (AttackableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00855DD0, AttackableSwitchSetupData *, get_ActivatedState, (AttackableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00855E70, void, CacheSetupStates, (AttackableSwitchSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00855FA0, void, Perform, (AttackableSwitchSetupHolder * __this, AttackableSwitchSetupData * state));
IL2CPP_REGISTER_METHOD(0x00856130, void, StopTimelines, (AttackableSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x008562A0, void, __ctor, (AttackableSwitchSetupHolder * __this));
}
