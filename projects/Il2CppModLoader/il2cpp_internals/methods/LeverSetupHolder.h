#include <interception_macros.h>

namespace app::methods::LeverSetupHolder {
IL2CPP_REGISTER_METHOD(0x01137C50, LeverSetupData *, get_LeftState, (LeverSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01137CF0, LeverSetupData *, get_RightState, (LeverSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x01137D90, void, CacheSetupStates, (LeverSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x01137EC0, void, Perform, (LeverSetupHolder * __this, LeverSetupData * state));
IL2CPP_REGISTER_METHOD(0x01138010, void, __ctor, (LeverSetupHolder * __this));
}
