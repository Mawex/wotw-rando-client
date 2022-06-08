#include <interception_macros.h>

namespace app::methods::SpikeSlugEntity {
IL2CPP_REGISTER_METHOD(0x011C9260, GroundPatrolDirectionMode__Enum, get_MovementPattern, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C9270, void, set_MovementPattern, (SpikeSlugEntity * __this, GroundPatrolDirectionMode__Enum value));
IL2CPP_REGISTER_METHOD(0x011C9280, bool, get_ShouldToogleMoveDirection, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C9290, bool, get_IsShelled, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C92A0, bool, get_ShouldIdleDuringPatrol, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C92B0, void, set_ShouldIdleDuringPatrol, (SpikeSlugEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, get_OwnerID, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C92C0, bool, WasShelled, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C92D0, EnemyPlatformMovement *, get_PlatformMovement, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C9390, void, EjectShell, (SpikeSlugEntity * __this, Vector3 impactPosition, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x011C9820, void, DestroyShell, (SpikeSlugEntity * __this, Vector3 impactPosition, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x011C9AE0, void, OnAwake, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011C9D10, void, SetShellParent, (SpikeSlugEntity * __this, ShellSlugShell * shell, Transform * parent));
IL2CPP_REGISTER_METHOD(0x011CA370, void, ResolveDamage, (SpikeSlugEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x011CA710, bool, get_ShouldPlayFootsteps, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CA890, SpikeSlugEntity_SpikeSlugShellState__Enum, get_ShellState, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CA8A0, void, set_ShellState, (SpikeSlugEntity * __this, SpikeSlugEntity_SpikeSlugShellState__Enum value));
IL2CPP_REGISTER_METHOD(0x011CB0F0, void, OnUpdate, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CBB00, void, AddSpringVelocity, (SpikeSlugEntity * __this, float velocity));
IL2CPP_REGISTER_METHOD(0x011CBB30, void, SetSpringVelocity, (SpikeSlugEntity * __this, float velocity));
IL2CPP_REGISTER_METHOD(0x011CBB50, void, ResetEntity, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CBCD0, void, ShowShell, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CBE10, void, HideShell, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CBF50, void, OnDied, (SpikeSlugEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x011CC180, Vector3, ModifyKickbackForce, (SpikeSlugEntity * __this, Vector3 force, Damage * damage, bool applyDeathModification));
IL2CPP_REGISTER_METHOD(0x011CC790, bool, get_IsSuspended, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CC7A0, void, set_IsSuspended, (SpikeSlugEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011CC800, void, OnSuspendedStay, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CC850, void, __ctor, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x011CCA30, void, _DestroyShell_b__49_0, (SpikeSlugEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04734780, SpikeSlugEntity__DestroyShell_b__49_0__MethodInfo);
}
