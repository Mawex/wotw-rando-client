using namespace app;

namespace app::methods::TentacleDeathBehaviour {
IL2CPP_REGISTER_METHOD(0x00CEE830, void, OnCacheSerializedComponents, (TentacleDeathBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00CEE8F0, void, OnInitializeTask, (TentacleDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEEAD0, void, ModifyDeathKickbackForce, (TentacleDeathBehaviour * __this, Damage * damage, float minBoost, float minMagntiude, float minUpDirection));
IL2CPP_REGISTER_METHOD(0x00CEEDB0, void, OnEnterTask, (TentacleDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEEF40, BehaviourStatus__Enum, OnExecuteTask, (TentacleDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEEFA0, void, OnExitTask, (TentacleDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEF000, void, __ctor, (TentacleDeathBehaviour * __this));
}
