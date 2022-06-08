using namespace app;

namespace app::methods::SpiderlingEntity {
IL2CPP_REGISTER_METHOD(0x011C1220, GroundPatrolDirectionMode__Enum, get_MovementPattern, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1230, void, set_MovementPattern, (SpiderlingEntity * __this, GroundPatrolDirectionMode__Enum value));
IL2CPP_REGISTER_METHOD(0x011C1240, bool, get_ShouldToogleMoveDirection, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1250, bool, get_ShouldFollowOri, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C12F0, bool, get_IsInAttackRange, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1560, bool, get_ShouldIdleDuringPatrol, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1570, void, set_ShouldIdleDuringPatrol, (SpiderlingEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, get_OwnerID, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1580, void, OnAwake, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1620, void, ResolveDamage, (SpiderlingEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x011C1630, bool, get_ShouldPlayFootsteps, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C17B0, void, OnUpdate, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1900, void, ForceSpawningState, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB7040, void, OnDied, (SpiderlingEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x011C1910, void, OnDrawGizmosSelected, (SpiderlingEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C1E40, void, __ctor, (SpiderlingEntity * __this));
}
