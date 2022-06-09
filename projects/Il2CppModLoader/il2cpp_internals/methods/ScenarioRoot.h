#include <interception_macros.h>

namespace app::methods::ScenarioRoot {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InvalidateParentTimelineCache, (app::ScenarioRoot * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InvalidateParentTimelineCache, (app::ScenarioRoot * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AddChildren, (app::ScenarioRoot * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E93870, MoonTimeline*, get_RootTimeline, (app::ScenarioRoot * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E93940, void, CreateTimelineParentEntity, (app::ScenarioRoot * this_ptr, app::VirtualClipsBuilder* builder));
    IL2CPP_REGISTER_METHOD(0x01E93A00, List_1_ITimelineParentOwner_*, GetOutsideOwners, (app::ScenarioRoot * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E93CD0, ITimelineParentOwner*, CollectOwner, (app::ScenarioRoot * this_ptr, app::Transform* current_external));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::ScenarioRoot * this_ptr));
} // namespace app::methods::ScenarioRoot
