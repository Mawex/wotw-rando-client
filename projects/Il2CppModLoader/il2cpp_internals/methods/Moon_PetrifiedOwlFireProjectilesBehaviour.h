using namespace app;

namespace app::methods::Moon::PetrifiedOwlFireProjectilesBehaviour {
IL2CPP_REGISTER_METHOD(0x00C34050, void, OnStartBehaviour, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C34600, void, OnUpdateBehaviour, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C34720, void, OnEndBehaviour, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C34AD0, float, GetScore, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C33F90, bool, EndCondition, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetBehaviour, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C34B60, void, StartShooting, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475CCE8, PetrifiedOwlFireProjectilesBehaviour_StartShooting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00788D40, void, StopShooting, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04716810, PetrifiedOwlFireProjectilesBehaviour_StopShooting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C34BC0, void, Shoot, (PetrifiedOwlFireProjectilesBehaviour * __this, ProjectileSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x00C34D40, float, GetSpawnInterval, (PetrifiedOwlFireProjectilesBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C34D90, void, FlipSpawnerDirection, (PetrifiedOwlFireProjectilesBehaviour * __this, ProjectileSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x00C34DE0, bool, IsSeinToTheRight, (PetrifiedOwlFireProjectilesBehaviour * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x00C34F10, void, __ctor, (PetrifiedOwlFireProjectilesBehaviour * __this));
}
