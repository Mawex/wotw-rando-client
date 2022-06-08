using namespace app;

namespace app::methods::Moon::InteractionGraph::TimelineNode {
IL2CPP_REGISTER_METHOD(0x01993A90, List_1_Moon_Timeline_MoonTimeline_ *, get_ResolvedTimelines, (TimelineNode * __this));
IL2CPP_REGISTER_METHOD(0x01993D10, MoonTimeline *, get_CurrentTimeline, (TimelineNode * __this));
IL2CPP_REGISTER_METHOD(0x00B35B90, void, RefreshResolvedTimelines, (TimelineNode * __this));
IL2CPP_REGISTER_METHOD(0x01993DE0, void, OnEnter, (TimelineNode * __this));
IL2CPP_REGISTER_METHOD(0x019941B0, void, UpdateState, (TimelineNode * __this));
IL2CPP_REGISTER_METHOD(0x019942F0, void, OnExit, (TimelineNode * __this));
IL2CPP_REGISTER_METHOD(0x012AB620, void, Interrupt, (TimelineNode * __this));
IL2CPP_REGISTER_METHODINFO(0x04754D98, TimelineNode_Interrupt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056FAC0, void, __ctor, (TimelineNode * __this));
}
