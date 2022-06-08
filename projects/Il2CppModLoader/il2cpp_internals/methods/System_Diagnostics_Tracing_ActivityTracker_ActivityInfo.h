#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo {
IL2CPP_REGISTER_METHOD(0x01746930, void, __ctor, (ActivityTracker_ActivityInfo * __this, String * name, int64_t uniqueId, ActivityTracker_ActivityInfo * creator, Guid activityIDToRestore, EventActivityOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x01746A40, Guid, get_ActivityId, (ActivityTracker_ActivityInfo * __this));
IL2CPP_REGISTER_METHOD(0x01746A50, String *, Path, (ActivityTracker_ActivityInfo * activityInfo));
IL2CPP_REGISTER_METHOD(0x01746B20, String *, ToString, (ActivityTracker_ActivityInfo * __this));
IL2CPP_REGISTER_METHOD(0x01746DA0, String *, LiveActivities, (ActivityTracker_ActivityInfo * list));
IL2CPP_REGISTER_METHOD(0x01746E70, bool, CanBeOrphan, (ActivityTracker_ActivityInfo * __this));
IL2CPP_REGISTER_METHOD(0x01746E80, void, CreateActivityPathGuid, (ActivityTracker_ActivityInfo * __this, Guid * idRet, int32_t * activityPathGuidOffset));
IL2CPP_REGISTER_METHOD(0x01746F70, void, CreateOverflowGuid, (ActivityTracker_ActivityInfo * __this, Guid * outPtr));
IL2CPP_REGISTER_METHOD(0x01746FF0, int32_t, AddIdToGuid, (Guid * outPtr, int32_t whereToAddId, uint32_t id, bool overflow));
IL2CPP_REGISTER_METHOD(0x01747140, void, WriteNibble, (uint8_t * * ptr, uint8_t * endPtr, uint32_t value));
}
