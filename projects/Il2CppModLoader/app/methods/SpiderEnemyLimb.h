#pragma once
#include <interception_macros.h>

namespace app::methods::SpiderEnemyLimb {
    IL2CPP_REGISTER_METHOD(0x011BC660, void, Awake, (app::SpiderEnemyLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BC690, void, OnTriggerEnter, (app::SpiderEnemyLimb * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x011BC720, bool, ShouldDetach, (app::SpiderEnemyLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BC9C0, void, LiftLimb, (app::SpiderEnemyLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BCCE0, void, LateUpdate, (app::SpiderEnemyLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BD360, void, ctor, (app::SpiderEnemyLimb * this_ptr))
}
