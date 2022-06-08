#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossFight1RainOfFeathersBehaviour {
IL2CPP_REGISTER_METHOD(0x017694F0, float, get_TimeBetweenProjectiles, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01769510, void, CopyData, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017695F0, void, OnEnter, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01769850, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x017699A0, void, OnExit, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01769B80, void, UpdateShooting, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01769C50, Vector3, RandomOffScreenPosition, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176A2F0, Vector3, RandomOffsetPosition, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176A620, void, OnShootEvent, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D510, PetrifiedOwlBossFight1RainOfFeathersBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0176A630, void, Shoot, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176A8D0, Projectile *, SpawnProjectile, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this, Vector2 shootPoint, Vector3 shootVelocity, ProjectileSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShoulStopAttack, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0176AC50, void, __ctor, (PetrifiedOwlBossFight1RainOfFeathersBehaviour * __this));
}
