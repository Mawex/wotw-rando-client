#include <interception_macros.h>

namespace app::methods::BombSlugEntity {
IL2CPP_REGISTER_METHOD(0x00D36680, bool, get_IsGoingToExplode, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D36690, void, OnFixedUpdate, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D36740, void, ResolveDamage, (BombSlugEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00D36810, void, ResetEntity, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D36870, void, OnMinerPullOut, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D369C0, void, OnMinerThrow, (BombSlugEntity * __this, Vector2 force, EnemyEntity * miner));
IL2CPP_REGISTER_METHOD(0x00D36A00, void, OnDied, (BombSlugEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00D36A70, bool, OnContactDamage, (BombSlugEntity * __this, GameObject * contactDamageReceiver));
IL2CPP_REGISTER_METHODINFO(0x0477DB28, BombSlugEntity_OnContactDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D36C30, void, SetState, (BombSlugEntity * __this, BombSlugEntity_BombSlugState__Enum state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitNormalState, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D36D80, void, ExitExplosionCountdownState, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitExplodedState, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D37120, void, EnterNormalState, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D37310, void, EnterExplosionCountdownState, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D373E0, void, EnterExplodedState, (BombSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D37610, void, __ctor, (BombSlugEntity * __this));
}
