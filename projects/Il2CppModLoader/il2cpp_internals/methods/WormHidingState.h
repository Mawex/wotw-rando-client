#include <interception_macros.h>

namespace app::methods::WormHidingState {
IL2CPP_REGISTER_METHOD(0x0058D710, void, __ctor, (WormHidingState * __this, WormEnemy * worm, TextureAnimationWithTransitions * hiding, PrefabSpawner * hidingEffect, SoundSource * hidingSound));
IL2CPP_REGISTER_METHOD(0x0058DE00, void, OnEnter, (WormHidingState * __this));
}
