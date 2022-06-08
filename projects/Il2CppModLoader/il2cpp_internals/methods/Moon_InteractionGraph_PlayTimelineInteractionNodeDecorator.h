using namespace app;

namespace app::methods::Moon::InteractionGraph::PlayTimelineInteractionNodeDecorator {
IL2CPP_REGISTER_METHOD(0x01990DE0, MoonTimeline *, get_ResolvedTimeline, (PlayTimelineInteractionNodeDecorator * __this));
IL2CPP_REGISTER_METHOD(0x01990EE0, MoonTimeline *, get_ResolvedChainedTimeline, (PlayTimelineInteractionNodeDecorator * __this));
IL2CPP_REGISTER_METHOD(0x01990FE0, void, OnDecoratedNodeEnter, (PlayTimelineInteractionNodeDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01991210, void, OnDecoratedNodeExit, (PlayTimelineInteractionNodeDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x019914B0, void, OnTimelineFinished, (PlayTimelineInteractionNodeDecorator * __this));
IL2CPP_REGISTER_METHODINFO(0x04790320, PlayTimelineInteractionNodeDecorator_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlayTimelineInteractionNodeDecorator * __this));
}
