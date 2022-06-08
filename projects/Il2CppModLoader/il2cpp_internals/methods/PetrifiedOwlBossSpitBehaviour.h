using namespace app;

namespace app::methods::PetrifiedOwlBossSpitBehaviour {
IL2CPP_REGISTER_METHOD(0x0177E780, int32_t, get_ShotsLeft, (PetrifiedOwlBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177E790, void, CopyData, (PetrifiedOwlBossSpitBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x0177E990, void, OnEnter, (PetrifiedOwlBossSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177ED90, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177EFB0, void, OnExit, (PetrifiedOwlBossSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177F290, void, StartShootProcess, (PetrifiedOwlBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177F2C0, void, OnShootEvent, (PetrifiedOwlBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471FCF8, PetrifiedOwlBossSpitBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0177F430, Projectile *, SpawnProjectile, (PetrifiedOwlBossSpitBehaviour * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x0177F890, void, __ctor, (PetrifiedOwlBossSpitBehaviour * __this));
}
