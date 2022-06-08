using namespace app;

namespace app::methods::MinerPickaxeAttack {
IL2CPP_REGISTER_METHOD(0x0144E540, void, OnEntityInitialized, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHOD(0x0144E710, void, OnEnter, (MinerPickaxeAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144EBE0, void, OnExit, (MinerPickaxeAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144F080, void, SetToUnprotected, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EC00, MinerPickaxeAttack_SetToUnprotected__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144F0C0, void, SetToProtected, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B7D0, MinerPickaxeAttack_SetToProtected__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144F110, void, GroundHit, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x04717770, MinerPickaxeAttack_GroundHit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144F330, void, UpdateAnimBlend, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0475FCA8, MinerPickaxeAttack_UpdateAnimBlend__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144F3A0, void, CalculateSlope, (MinerPickaxeAttack * __this, float * slopeValue));
IL2CPP_REGISTER_METHOD(0x0144F7E0, void, SetAnimationBlendValue, (MinerPickaxeAttack * __this, float slopeValue));
IL2CPP_REGISTER_METHOD(0x0144F830, void, OnDrawGizmosSelected, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHOD(0x0144F9C0, void, OnDrawGizmos, (MinerPickaxeAttack * __this));
IL2CPP_REGISTER_METHOD(0x0144FAC0, void, __ctor, (MinerPickaxeAttack * __this));
}
