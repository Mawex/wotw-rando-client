#pragma once
#include <interception_macros.h>

namespace app::methods::SpitterEnemySpiritLeashedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemySpiritLeashedState * this_ptr, app::SpitterEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x009A0D50, void, OnEnter, (app::SpitterEnemySpiritLeashedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A0F20, void, UpdateState, (app::SpitterEnemySpiritLeashedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F810, void, OnExit, (app::SpitterEnemySpiritLeashedState * this_ptr))
}
