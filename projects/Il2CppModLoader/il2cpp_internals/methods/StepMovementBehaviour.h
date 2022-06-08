using namespace app;

namespace app::methods::StepMovementBehaviour {
IL2CPP_REGISTER_METHOD(0x006505D0, void, OnInitialize, (StepMovementBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00650790, void, OnExecute, (StepMovementBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (StepMovementBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006507A0, void, OnEndBehaviour, (StepMovementBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (StepMovementBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (StepMovementBehaviour * __this));
}
