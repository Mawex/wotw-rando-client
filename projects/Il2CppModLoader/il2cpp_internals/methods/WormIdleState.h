#include <interception_macros.h>

namespace app::methods::WormIdleState {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (WormIdleState * __this, WormEnemy * worm, TextureAnimationWithTransitions * idle));
IL2CPP_REGISTER_METHOD(0x0058EE50, void, OnEnter, (WormIdleState * __this));
}
