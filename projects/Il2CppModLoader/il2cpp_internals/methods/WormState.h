#include <interception_macros.h>

namespace app::methods::WormState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (WormState * __this, WormEnemy * worm));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (WormState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (WormState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (WormState * __this));
IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (WormState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (WormState * __this));
}
