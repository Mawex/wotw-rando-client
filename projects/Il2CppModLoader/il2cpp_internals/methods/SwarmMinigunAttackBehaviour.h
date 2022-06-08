using namespace app;

namespace app::methods::SwarmMinigunAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01821C70, void, Initialize, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01821FB0, void, OnEnter, (SwarmMinigunAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x018220E0, BehaviourStatus__Enum, OnExecute, (SwarmMinigunAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01822B50, void, LaunchBulletAgent, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01822DF0, void, OnExit, (SwarmMinigunAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01822E00, void, LockTarget, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01822F80, void, GetAttackingAgents, (SwarmMinigunAttackBehaviour * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x01823110, SwarmAgent *, GetLaunchAttackingAgent, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x018232D0, void, ShuffleAgentsList, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01823490, void, EndAttack, (SwarmMinigunAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01823680, void, __ctor, (SwarmMinigunAttackBehaviour * __this));
}
