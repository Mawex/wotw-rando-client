#include <interception_macros.h>

namespace app::methods::Game::PoleSetupHolder {
IL2CPP_REGISTER_METHOD(0x01526DD0, PoleSetupData *, get_ReleasedState, (PoleSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01526E70, PoleSetupData *, get_PulledState, (PoleSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01526F10, void, CacheSetupStates, (PoleSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x01527040, void, Perform, (PoleSetupHolder * __this, PoleSetupData * state));
IL2CPP_REGISTER_METHOD(0x015271B0, void, StopTimelines, (PoleSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01527320, void, __ctor, (PoleSetupHolder * __this));
}
