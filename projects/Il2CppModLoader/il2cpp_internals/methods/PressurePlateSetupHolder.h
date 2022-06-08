#include <interception_macros.h>

namespace app::methods::PressurePlateSetupHolder {
IL2CPP_REGISTER_METHOD(0x00C73190, PressurePlateSetupData *, get_NotPressed, (PressurePlateSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00C73230, PressurePlateSetupData *, get_Pressed, (PressurePlateSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00C732D0, void, CacheSetupStates, (PressurePlateSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00C73400, void, Perform, (PressurePlateSetupHolder * __this, PressurePlateSetupData * state));
IL2CPP_REGISTER_METHOD(0x00C73570, void, Apply, (PressurePlateSetupHolder * __this, PressurePlateSetupData * setupData, Transform * transform));
IL2CPP_REGISTER_METHOD(0x00C735E0, void, StopTimelines, (PressurePlateSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00C73750, void, __ctor, (PressurePlateSetupHolder * __this));
}
