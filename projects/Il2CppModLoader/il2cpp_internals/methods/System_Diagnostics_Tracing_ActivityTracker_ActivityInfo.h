#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::ActivityTracker_ActivityInfo {
IL2CPP_REGISTER_METHOD(0x01746930, void, __ctor, (app::ActivityTracker_ActivityInfo * this_ptr, app::String * name, int64_t unique_id, app::ActivityTracker_ActivityInfo * creator, app::Guid activity_i_d_to_restore, app::EventActivityOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x01746A40, Guid, get_ActivityId, (app::ActivityTracker_ActivityInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01746A50, String *, Path, (app::ActivityTracker_ActivityInfo * activity_info));
IL2CPP_REGISTER_METHOD(0x01746B20, String *, ToString, (app::ActivityTracker_ActivityInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01746DA0, String *, LiveActivities, (app::ActivityTracker_ActivityInfo * list));
IL2CPP_REGISTER_METHOD(0x01746E70, bool, CanBeOrphan, (app::ActivityTracker_ActivityInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01746E80, void, CreateActivityPathGuid, (app::ActivityTracker_ActivityInfo * this_ptr, app::Guid * id_ret, app::int32_t * activity_path_guid_offset));
IL2CPP_REGISTER_METHOD(0x01746F70, void, CreateOverflowGuid, (app::ActivityTracker_ActivityInfo * this_ptr, app::Guid * out_ptr));
IL2CPP_REGISTER_METHOD(0x01746FF0, int32_t, AddIdToGuid, (app::Guid * out_ptr, int32_t where_to_add_id, uint32_t id, bool overflow));
IL2CPP_REGISTER_METHOD(0x01747140, void, WriteNibble, (app::uint8_t * * ptr, app::uint8_t * end_ptr, uint32_t value));
}
