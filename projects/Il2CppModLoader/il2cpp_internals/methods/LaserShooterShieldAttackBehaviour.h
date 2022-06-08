using namespace app;

namespace app::methods::LaserShooterShieldAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x00F210E0, void, OnEntityInitialized, (LaserShooterShieldAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F21180, void, OnEnter, (LaserShooterShieldAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F211C0, void, OnExit, (LaserShooterShieldAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F21220, BehaviourStatus__Enum, OnExecute, (LaserShooterShieldAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F21320, void, ChangeState, (LaserShooterShieldAttackBehaviour * __this, LaserShooterShieldAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F217E0, void, UpdateAnticPull, (LaserShooterShieldAttackBehaviour * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F21A60, void, UpdateAnticHold, (LaserShooterShieldAttackBehaviour * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F21AB0, void, UpdateAnticShooting, (LaserShooterShieldAttackBehaviour * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F21AD0, void, ApplyOscilation, (LaserShooterShieldAttackBehaviour * __this, float strength));
IL2CPP_REGISTER_METHOD(0x00F21C60, void, __ctor, (LaserShooterShieldAttackBehaviour * __this));
}
