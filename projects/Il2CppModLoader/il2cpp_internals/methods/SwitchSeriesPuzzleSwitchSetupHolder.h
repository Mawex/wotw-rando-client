#include <interception_macros.h>

namespace app::methods::SwitchSeriesPuzzleSwitchSetupHolder {
IL2CPP_REGISTER_METHOD(0x01835240, SwitchSeriesPuzzleSetupData *, get_DeactivatedState, (SwitchSeriesPuzzleSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x018352E0, SwitchSeriesPuzzleSetupData *, get_ActivatedState, (SwitchSeriesPuzzleSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01835380, void, CacheSetupStates, (SwitchSeriesPuzzleSwitchSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x018354B0, void, Perform, (SwitchSeriesPuzzleSwitchSetupHolder * __this, SwitchSeriesPuzzleSetupData * state));
IL2CPP_REGISTER_METHOD(0x01835620, void, StopTimelines, (SwitchSeriesPuzzleSwitchSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01835790, void, __ctor, (SwitchSeriesPuzzleSwitchSetupHolder * __this));
}
