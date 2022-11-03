#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::ActivityTracker {
    IL2CPP_REGISTER_METHOD(0x01745360, void, OnStart, (app::ActivityTracker * this_ptr, app::String* provider_name, app::String* activity_name, int32_t task, app::Guid* activity_id, app::Guid* related_activity_id, app::EventActivityOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01745B00, void, OnStop, (app::ActivityTracker * this_ptr, app::String* provider_name, app::String* activity_name, int32_t task, app::Guid* activity_id))
    IL2CPP_REGISTER_METHOD(0x01746150, void, Enable, (app::ActivityTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01746380, app::ActivityTracker*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01746420, app::ActivityTracker_ActivityInfo*, FindActiveActivity, (app::ActivityTracker * this_ptr, app::String* name, app::ActivityTracker_ActivityInfo* start_location))
    IL2CPP_REGISTER_METHOD(0x017464A0, app::String*, NormalizeActivityName, (app::ActivityTracker * this_ptr, app::String* provider_name, app::String* activity_name, int32_t task))
    IL2CPP_REGISTER_METHOD(0x017465F0, void, ActivityChanging, (app::ActivityTracker * this_ptr, app::AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ args))
    IL2CPP_REGISTER_METHODINFO(0x04782F40, ActivityTracker_ActivityChanging__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ActivityTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017467D0, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Tracing::ActivityTracker
