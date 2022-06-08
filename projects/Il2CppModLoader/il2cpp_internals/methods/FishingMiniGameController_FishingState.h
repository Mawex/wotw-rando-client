#include <interception_macros.h>

namespace app::methods::FishingMiniGameController_FishingState {
IL2CPP_REGISTER_METHOD(0x0126E300, void, __ctor, (FishingMiniGameController_FishingState * __this, FishingMiniGameController * fishingGame));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (FishingMiniGameController_FishingState * __this));
IL2CPP_REGISTER_METHOD(0x0073DA30, void, OnEnter, (FishingMiniGameController_FishingState * __this));
IL2CPP_REGISTER_METHOD(0x0073DA40, void, UpdateState, (FishingMiniGameController_FishingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (FishingMiniGameController_FishingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSuspended, (FishingMiniGameController_FishingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUnsuspended, (FishingMiniGameController_FishingState * __this));
}
