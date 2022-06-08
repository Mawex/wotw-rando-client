using namespace app;

namespace app::methods::BehaviourTreeEvaluationSystem {
IL2CPP_REGISTER_METHOD(0x00998570, UpdateType__Enum, get_UpdateType, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F9B4D0, void, Awake, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F9B610, void, OnDestroy, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x009EDCD0, bool, IsHeuristicBased, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0063C780, bool, IsAllAtAInterval, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F9B6B0, void, RequestEvaluation, (BehaviourTreeEvaluationSystem * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00F9BA70, void, ClearRequestsForEntity, (BehaviourTreeEvaluationSystem * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00F9BB90, void, EvaluateTree, (BehaviourTreeEvaluationSystem * __this, BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * entry, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F9BC00, void, RemoveEnty, (BehaviourTreeEvaluationSystem * __this, BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * entry, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F9BDB0, int32_t, GetId, (BehaviourTreeEvaluationSystem * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00F9BDE0, BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum, CalculateAllowedSkips, (BehaviourTreeEvaluationSystem * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00F9BFB0, void, OnUpdate, (BehaviourTreeEvaluationSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00F9C120, void, AllAtAIntervalUpdate, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F9C270, void, HeuristicBasedUpdate, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F9BB90, void, AllEveryFrameOnRegister, (BehaviourTreeEvaluationSystem * __this, BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * entry, int32_t id));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AllAtAIntervalOnRegister, (BehaviourTreeEvaluationSystem * __this, BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * entry, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F9C4B0, void, HeuristicBasedOnRegister, (BehaviourTreeEvaluationSystem * __this, BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * entry, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F9C5C0, void, OnDrawGizmosSelected, (BehaviourTreeEvaluationSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F9CA50, void, __ctor, (BehaviourTreeEvaluationSystem * __this));
}
