using namespace app;

namespace app::methods::SwarmChainAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (SwarmChainAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01816E30, void, OnEnter, (SwarmChainAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01816FE0, BehaviourStatus__Enum, OnExecute, (SwarmChainAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01817630, void, OnChainAttack, (SwarmChainAttackBehaviour * __this, SwarmAgent * agent));
IL2CPP_REGISTER_METHODINFO(0x04793040, SwarmChainAttackBehaviour_OnChainAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018177D0, void, OnExit, (SwarmChainAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x018179B0, Vector3, GetAfterAttackPosition, (SwarmChainAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugTempMarkPoint, (SwarmChainAttackBehaviour * __this, Vector3 point, Color color));
IL2CPP_REGISTER_METHOD(0x01818B70, void, LockTarget, (SwarmChainAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01818F70, void, SetAfterAttackTarget, (SwarmChainAttackBehaviour * __this, bool setSpin));
IL2CPP_REGISTER_METHOD(0x01819130, void, __ctor, (SwarmChainAttackBehaviour * __this));
}
