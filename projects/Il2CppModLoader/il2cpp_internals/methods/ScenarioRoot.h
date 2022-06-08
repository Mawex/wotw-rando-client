using namespace app;

namespace app::methods::ScenarioRoot {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InvalidateParentTimelineCache, (ScenarioRoot * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InvalidateParentTimelineCache, (ScenarioRoot * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AddChildren, (ScenarioRoot * __this));
IL2CPP_REGISTER_METHOD(0x01E93870, MoonTimeline *, get_RootTimeline, (ScenarioRoot * __this));
IL2CPP_REGISTER_METHOD(0x01E93940, void, CreateTimelineParentEntity, (ScenarioRoot * __this, VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x01E93A00, List_1_ITimelineParentOwner_ *, GetOutsideOwners, (ScenarioRoot * __this));
IL2CPP_REGISTER_METHOD(0x01E93CD0, ITimelineParentOwner *, CollectOwner, (ScenarioRoot * __this, Transform * currentExternal));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ScenarioRoot * __this));
}
