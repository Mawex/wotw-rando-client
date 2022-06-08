#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineEntityRecord {
IL2CPP_REGISTER_METHOD(0x01E85EE0, void, set_Parent, (TimelineEntityRecord * __this, ITimelineEntityParent * value));
IL2CPP_REGISTER_METHOD(0x01E85EF0, TimelineEntityRecord *, Copy, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E861D0, void, __ctor, (TimelineEntityRecord * __this, EntityId id, MoonReference_1_Moon_Timeline_ITimelineEntity_ * entity));
IL2CPP_REGISTER_METHOD(0x002FB970, EntityId, get_EntityId, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, SetEntityIdUnsafe, (TimelineEntityRecord * __this, int32_t entityId));
IL2CPP_REGISTER_METHOD(0x01E86400, TimelineConstraint *, GetConstraint, (TimelineEntityRecord * __this, Constraint__Enum constraint));
IL2CPP_REGISTER_METHODINFO(0x0473AD78, TimelineEntityRecord_GetConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E86500, void, Pause, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E865C0, void, Play, (TimelineEntityRecord * __this, IContext * context, bool loopContext));
IL2CPP_REGISTER_METHOD(0x01E86840, void, Reset, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E86850, void, Resume, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E86910, void, Stop, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E869D0, void, ResetConstrainedEntity, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHODINFO(0x04782528, TimelineEntityRecord_ResetConstrainedEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E86BB0, IConstrainedEntity *, AsConstrainedEntity, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHODINFO(0x04781D30, TimelineEntityRecord_AsConstrainedEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9B0, IConstrainedEntity *, AsCachedConstrainedEntity, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E87340, bool, HasStarted, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E87350, bool, HasFinished, (TimelineEntityRecord * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E87460, void, PostEvent, (TimelineEntityRecord * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E87500, void, PostEvent, (TimelineEntityRecord * __this, ITimelineEntityParent * scope, EntityId id, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E875B0, void, PostRequest, (TimelineEntityRecord * __this, int32_t eventId, TimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E87650, Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_ *, get_EventHistory, (TimelineEntityRecord * __this));
IL2CPP_REGISTER_METHODINFO(0x04764D48, TimelineEntityRecord_get_EventHistory__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0076C7B0, bool, GetEvent, (TimelineEntityRecord * __this, int32_t eventId, float * time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordEvent, (TimelineEntityRecord * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E876A0, void, ParentStopped, (TimelineEntityRecord * __this));
}
