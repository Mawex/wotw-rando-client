using namespace app;

namespace app::methods::SwarmAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x01814510, void, OnEnter, (SwarmAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01814660, BehaviourStatus__Enum, OnExecute, (SwarmAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01814C30, void, OnExit, (SwarmAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01814D20, void, LockTarget, (SwarmAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01814EA0, Vector3, GetAfterAttackPosition, (SwarmAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugTempMarkPoint, (SwarmAttackBehaviour * __this, Vector3 point, Color color));
IL2CPP_REGISTER_METHOD(0x01815F70, void, SetAfterAttackTarget, (SwarmAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01816120, bool, LaunchAttackingAgents, (SwarmAttackBehaviour * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x018168A0, bool, LaunchAttackingAgent, (SwarmAttackBehaviour * __this, Vector3 raycastPoint, bool allowOvershoot));
IL2CPP_REGISTER_METHOD(0x01816C10, void, EndAttack, (SwarmAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01816D80, void, __ctor, (SwarmAttackBehaviour * __this));
}
