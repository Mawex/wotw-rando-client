#include <interception_macros.h>

namespace app::methods::Moon::Wwise::ExampleZoneProcessor {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessZoneTasks, (ExampleZoneProcessor * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array * listenerZoneTasks, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array * emitterZoneTasks, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetListenerTracking, (ExampleZoneProcessor * __this, SoundListener * listener, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array * listenerTasks, PositionSyncTask__Array * positionTasks));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DefragmentStructures, (ExampleZoneProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02709C50, void, __ctor, (ExampleZoneProcessor * __this));
}
