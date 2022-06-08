using namespace app;

namespace app::methods::Moon::ArriveBehaviour {
IL2CPP_REGISTER_METHOD(0x0133CA10, void, OnExecute, (ArriveBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x0133CD30, void, EndArriveBehaviour, (ArriveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B5A0, ArriveBehaviour_EndArriveBehaviour__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (ArriveBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (ArriveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00996540, bool, ContinuePlaying, (ArriveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C0A0, ArriveBehaviour_ContinuePlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133CEE0, void, __ctor, (ArriveBehaviour * __this));
}
