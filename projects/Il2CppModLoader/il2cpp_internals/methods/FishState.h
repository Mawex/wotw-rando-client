#include <interception_macros.h>

namespace app::methods::FishState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (FishState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (FishState * __this));
}
