using namespace app;

namespace app::methods::Moon::AlertBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_TargetPosition, (AlertBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (AlertBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01337C80, void, OnInitialize, (AlertBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01337E50, void, OnExecute, (AlertBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (AlertBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01338010, void, OnEndBehaviour, (AlertBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (AlertBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00996540, bool, ContinuePlaying, (AlertBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (AlertBehaviour * __this));
}
