#pragma once
#include <interception_macros.h>

namespace app::methods::BatEnemy {
    IL2CPP_REGISTER_METHOD(0x00F8F610, app::BatSwarm *, get_Swarm, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8F640, bool, get_IsSeekingOri, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8F650, void, Awake, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F91770, void, OnDestroy, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F91A70, void, Start, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F91C80, void, FixedUpdate, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F91D70, void, OnDrawGizmos, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F91D90, void, UpdateBodyAndWings, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F92890, void, OnDeathEvent, (app::BatEnemy * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x0471CEA0, BatEnemy_OnDeathEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F929A0, void, OnModifyDamage, (app::BatEnemy * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x0473ED18, BatEnemy_OnModifyDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F92AF0, void, OnStickyMineStuck, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F92C30, bool, DidCollideWithSomething, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F92D20, void, OnIdleEnter, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789680, BatEnemy_OnIdleEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::BehaviourTreeStatus__Enum, OnIdleUpdate, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04768150, BatEnemy_OnIdleUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F92DF0, void, OnSeekEnter, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710048, BatEnemy_OnSeekEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F92F40, app::BehaviourTreeStatus__Enum, OnSeekUpdate, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x0477C8A0, BatEnemy_OnSeekUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F93010, void, OnSeekInterrupt, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775A60, BatEnemy_OnSeekInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F93020, void, OnAttackEnter, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751C00, BatEnemy_OnAttackEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F930A0, app::BehaviourTreeStatus__Enum, OnAttackUpdate, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04718E48, BatEnemy_OnAttackUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F931D0, bool, ShouldFlee, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F936B0, void, OnFleeEnter, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710C68, BatEnemy_OnFleeEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F93760, app::BehaviourTreeStatus__Enum, OnFleeUpdate, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x0474ED40, BatEnemy_OnFleeUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F937C0, void, OnFleeInterrupt, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704A40, BatEnemy_OnFleeInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F937F0, void, OnFrozenEnter, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047996B0, BatEnemy_OnFrozenEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F93A20, app::BehaviourTreeStatus__Enum, OnFrozenUpdate, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04766F90, BatEnemy_OnFrozenUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F93BA0, void, OnFrozenInterrupt, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785580, BatEnemy_OnFrozenInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F93CE0, app::BehaviourTreeStatus__Enum, OnFrozenShatter, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00F93F10, void, OnCarryStickyMineEnter, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708B38, BatEnemy_OnCarryStickyMineEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::BehaviourTreeStatus__Enum, OnCarryStickyMineUpdate, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04722138, BatEnemy_OnCarryStickyMineUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F94050, void, ctor, (app::BatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F941E0, bool, _Awake_b__29_0, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04728830, BatEnemy__Awake_b__29_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F92C30, bool, _Awake_b__29_1, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04789A88, BatEnemy__Awake_b__29_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F94200, app::BehaviourTreeStatus__Enum, _Awake_b__29_2, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04753140, BatEnemy__Awake_b__29_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, _Awake_b__29_3, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x0477C6A8, BatEnemy__Awake_b__29_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F94220, bool, _Awake_b__29_4, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04796058, BatEnemy__Awake_b__29_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F94230, bool, _Awake_b__29_5, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x0474E418, BatEnemy__Awake_b__29_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DCFC10, bool, _Awake_b__29_6, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x0477C800, BatEnemy__Awake_b__29_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F8F640, bool, _Awake_b__29_7, (app::BatEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHODINFO(0x04728508, BatEnemy__Awake_b__29_7__MethodInfo)
}
