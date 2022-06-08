#include <interception_macros.h>

namespace app::methods::MudkisserProjectileAttack {
IL2CPP_REGISTER_METHOD(0x00877830, void, Shoot, (MudkisserProjectileAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C3B8, MudkisserProjectileAttack_Shoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00877AC0, void, SpawnProjectile, (MudkisserProjectileAttack * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x00877D80, void, OnEntityInitialized, (MudkisserProjectileAttack * __this));
IL2CPP_REGISTER_METHOD(0x00877E20, BehaviourStatus__Enum, OnExecute, (MudkisserProjectileAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008780B0, void, OnEnter, (MudkisserProjectileAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008784C0, void, Aim, (MudkisserProjectileAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x04743450, MudkisserProjectileAttack_Aim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008785B0, void, DisableProjectile, (MudkisserProjectileAttack * __this));
IL2CPP_REGISTER_METHOD(0x008785D0, void, EnableProjectile, (MudkisserProjectileAttack * __this));
IL2CPP_REGISTER_METHOD(0x008785F0, void, PullOut, (MudkisserProjectileAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x047898C8, MudkisserProjectileAttack_PullOut__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008789B0, void, OnExit, (MudkisserProjectileAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00878EB0, void, __ctor, (MudkisserProjectileAttack * __this));
}
