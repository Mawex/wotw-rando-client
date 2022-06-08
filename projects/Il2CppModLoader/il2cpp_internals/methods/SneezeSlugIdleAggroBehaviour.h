using namespace app;

namespace app::methods::SneezeSlugIdleAggroBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (SneezeSlugIdleAggroBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDF690, void, OnExecute, (SneezeSlugIdleAggroBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (SneezeSlugIdleAggroBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00EDF7E0, void, OnUpdateBehaviour, (SneezeSlugIdleAggroBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDFAB0, void, OnEndTurningBehaviourEvent, (SneezeSlugIdleAggroBehaviour * __this, IEntityBehaviour * behaviour, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (SneezeSlugIdleAggroBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (SneezeSlugIdleAggroBehaviour * __this));
}
