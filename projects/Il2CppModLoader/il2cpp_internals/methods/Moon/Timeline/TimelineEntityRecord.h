#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineEntityRecord {
    IL2CPP_REGISTER_METHOD(0x01E85EE0, void, set_Parent, (app::TimelineEntityRecord * this_ptr, app::ITimelineEntityParent * value));
    IL2CPP_REGISTER_METHOD(0x01E85EF0, app::TimelineEntityRecord *, Copy, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E861D0, void, __ctor, (app::TimelineEntityRecord * this_ptr, app::EntityId id, app::MoonReference_1_Moon_Timeline_ITimelineEntity_ * entity));
    IL2CPP_REGISTER_METHOD(0x002FB970, app::EntityId, get_EntityId, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB980, void, SetEntityIdUnsafe, (app::TimelineEntityRecord * this_ptr, int32_t entity_id));
    IL2CPP_REGISTER_METHOD(0x01E86400, app::TimelineConstraint *, GetConstraint, (app::TimelineEntityRecord * this_ptr, app::Constraint__Enum constraint));
    IL2CPP_REGISTER_METHODINFO(0x0473AD78, TimelineEntityRecord_GetConstraint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E86500, void, Pause, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E865C0, void, Play, (app::TimelineEntityRecord * this_ptr, app::IContext * context, bool loop_context));
    IL2CPP_REGISTER_METHOD(0x01E86840, void, Reset, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E86850, void, Resume, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E86910, void, Stop, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E869D0, void, ResetConstrainedEntity, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04782528, TimelineEntityRecord_ResetConstrainedEntity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E86BB0, app::IConstrainedEntity *, AsConstrainedEntity, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04781D30, TimelineEntityRecord_AsConstrainedEntity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IConstrainedEntity *, AsCachedConstrainedEntity, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E87340, bool, HasStarted, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E87350, bool, HasFinished, (app::TimelineEntityRecord * this_ptr, int32_t event_id));
    IL2CPP_REGISTER_METHOD(0x01E87460, void, PostEvent_1, (app::TimelineEntityRecord * this_ptr, int32_t event_id));
    IL2CPP_REGISTER_METHOD(0x01E87500, void, PostEvent_2, (app::TimelineEntityRecord * this_ptr, app::ITimelineEntityParent * scope, app::EntityId id, int32_t event_id));
    IL2CPP_REGISTER_METHOD(0x01E875B0, void, PostRequest, (app::TimelineEntityRecord * this_ptr, int32_t event_id, app::TimelineEntity * entity));
    IL2CPP_REGISTER_METHOD(0x01E87650, app::Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_ *, get_EventHistory, (app::TimelineEntityRecord * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04764D48, TimelineEntityRecord_get_EventHistory__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0076C7B0, bool, GetEvent, (app::TimelineEntityRecord * this_ptr, int32_t event_id, float * time));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordEvent, (app::TimelineEntityRecord * this_ptr, int32_t event_id));
    IL2CPP_REGISTER_METHOD(0x01E876A0, void, ParentStopped, (app::TimelineEntityRecord * this_ptr));
}
