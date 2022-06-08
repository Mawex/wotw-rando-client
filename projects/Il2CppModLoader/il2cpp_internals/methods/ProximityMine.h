using namespace app;

namespace app::methods::ProximityMine {
IL2CPP_REGISTER_METHOD(0x00C7FA90, SeinCharacter *, get_Sein, (ProximityMine * __this));
IL2CPP_REGISTER_METHOD(0x00C7FB20, void, OnAwake, (ProximityMine * __this));
IL2CPP_REGISTER_METHOD(0x00C7FF90, void, OnDestroy, (ProximityMine * __this));
IL2CPP_REGISTER_METHOD(0x00C80140, void, Update, (ProximityMine * __this));
IL2CPP_REGISTER_METHOD(0x00C803A0, void, Explode, (ProximityMine * __this));
IL2CPP_REGISTER_METHODINFO(0x04734588, ProximityMine_Explode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C80600, void, DisableMine, (ProximityMine * __this, bool disable));
IL2CPP_REGISTER_METHOD(0x00C80970, void, Reset, (ProximityMine * __this));
IL2CPP_REGISTER_METHOD(0x00C80970, void, OnRestoreCheckpoint, (ProximityMine * __this));
IL2CPP_REGISTER_METHODINFO(0x04779B48, ProximityMine_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C80990, void, OnRecieveDamage, (ProximityMine * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04733308, ProximityMine_OnRecieveDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C809A0, void, DealDamageInRadius, (ProximityMine * __this, float amount, float radius));
IL2CPP_REGISTER_METHOD(0x00C80EA0, void, __ctor, (ProximityMine * __this));
}
