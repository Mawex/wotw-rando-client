using namespace app;

namespace app::methods::Moon::LizardGroundChaseBehaviour {
IL2CPP_REGISTER_METHOD(0x0074B530, float, get_ChasingTime, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074B540, void, set_ChasingTime, (LizardGroundChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x01104710, Vector3, get_TargetPostion, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_ChaseDirection, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01104910, void, set_ChaseDirection, (LizardGroundChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x011049E0, void, OnEnter, (LizardGroundChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01104BD0, void, RestartTarget, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01104E00, void, AssignLocomotionData, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01105280, BehaviourStatus__Enum, OnExecute, (LizardGroundChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011055A0, bool, CheckMovementBehaviourEndCondition, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01105620, void, OnDrawGizmos, (LizardGroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01016970, void, OnExit, (LizardGroundChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01105890, bool, IsBlockingInterruption, (LizardGroundChaseBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x01105900, void, __ctor, (LizardGroundChaseBehaviour * __this));
}
