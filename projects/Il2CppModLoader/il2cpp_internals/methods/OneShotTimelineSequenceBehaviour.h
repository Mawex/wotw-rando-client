using namespace app;

namespace app::methods::OneShotTimelineSequenceBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (OneShotTimelineSequenceBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00614BE0, void, OnExecute, (OneShotTimelineSequenceBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x005B7700, void, FinishedNew, (OneShotTimelineSequenceBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D650, OneShotTimelineSequenceBehaviour_FinishedNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B7700, void, Finished, (OneShotTimelineSequenceBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047008A8, OneShotTimelineSequenceBehaviour_Finished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (OneShotTimelineSequenceBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00614F30, void, OnEndBehaviour, (OneShotTimelineSequenceBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, GetShouldPauseTree, (OneShotTimelineSequenceBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615270, bool, GetShouldPauseLocomotion, (OneShotTimelineSequenceBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (OneShotTimelineSequenceBehaviour * __this));
}
