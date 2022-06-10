#pragma once
#include <interception_macros.h>

namespace app::methods::JumperEnemyFallState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyFallState * this_ptr, app::JumperEnemy * jumper_enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::JumperEnemyFallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58E10, void, OnEnter, (app::JumperEnemyFallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::JumperEnemyFallState * this_ptr))
}
