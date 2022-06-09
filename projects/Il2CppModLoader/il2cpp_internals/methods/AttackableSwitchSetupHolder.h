#include <interception_macros.h>

namespace app::methods::AttackableSwitchSetupHolder {
IL2CPP_REGISTER_METHOD(0x00855D30, AttackableSwitchSetupData *, get_DeactivatedState, (app::AttackableSwitchSetupHolder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00855DD0, AttackableSwitchSetupData *, get_ActivatedState, (app::AttackableSwitchSetupHolder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00855E70, void, CacheSetupStates, (app::AttackableSwitchSetupHolder * this_ptr, app::List_1_IIndexedItem_ * cache_to_populate));
IL2CPP_REGISTER_METHOD(0x00855FA0, void, Perform, (app::AttackableSwitchSetupHolder * this_ptr, app::AttackableSwitchSetupData * state));
IL2CPP_REGISTER_METHOD(0x00856130, void, StopTimelines, (app::AttackableSwitchSetupHolder * this_ptr));
IL2CPP_REGISTER_METHOD(0x008562A0, void, __ctor, (app::AttackableSwitchSetupHolder * this_ptr));
}
