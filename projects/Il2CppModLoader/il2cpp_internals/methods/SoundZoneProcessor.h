using namespace app;

namespace app::methods::SoundZoneProcessor {
IL2CPP_REGISTER_METHOD(0x00EEE370, void, ProcessZoneTasks, (SoundZoneProcessor * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * listenerZoneTasks, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * emitterZoneTasks, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x00EEEB00, bool, IsTracked, (SoundZoneProcessor * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00EEEBD0, void, Untrack, (SoundZoneProcessor * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, bool forceReset));
IL2CPP_REGISTER_METHOD(0x00EEECD0, void, UpdateTask, (SoundZoneProcessor * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, Vector2 distances, bool hasPositionChanged));
IL2CPP_REGISTER_METHOD(0x00EEEDC0, void, UpdateTask, (SoundZoneProcessor * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, Vector2 distances, bool hasPositionChanged));
IL2CPP_REGISTER_METHOD(0x00EEEE30, ListenerSoundZoneTaskData, InitializeListenerZoneTask, (SoundZoneProcessor * __this, ListenerSoundZoneTaskData data, AudioListenerZone * zone));
IL2CPP_REGISTER_METHOD(0x00EEF180, EmitterSoundZoneTaskData, InitializeEmitterZoneTask, (SoundZoneProcessor * __this, EmitterSoundZoneTaskData data, AudioEmitterZone * zone));
IL2CPP_REGISTER_METHOD(0x00EEF4D0, void, TearDownEmitterZoneTask, (SoundZoneProcessor * __this, EmitterSoundZoneTaskData data, AudioEmitterZoneReference zone, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x00EEF6D0, void, TearDownListenerZoneTask, (SoundZoneProcessor * __this, ListenerSoundZoneTaskData data, AudioListenerZoneReference zone, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x00EEF900, void, ResetListenerTracking, (SoundZoneProcessor * __this, SoundListener * listenerToReset, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * listenerZoneTasks, PositionSyncTask__Array * positionTasks));
IL2CPP_REGISTER_METHOD(0x00EEFB40, void, __ctor, (SoundZoneProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00EEFBC0, void, __cctor, (MethodInfo * method));
}
