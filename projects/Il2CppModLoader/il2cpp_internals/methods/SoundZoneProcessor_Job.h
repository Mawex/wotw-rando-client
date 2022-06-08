using namespace app;

namespace app::methods::SoundZoneProcessor_Job {
IL2CPP_REGISTER_METHOD(0x00EEFC40, PositionSyncTask__Array *, get_PositionTasks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EEFD10, int32_t, get_PositionTasksCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EEFDE0, void, set_PositionTasksCount, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00EEFEB0, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array *, get_ListenerZoneTasks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EEFF80, int32_t, get_ListenerZoneTasksCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EF0050, void, set_ListenerZoneTasksCount, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00EF0120, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array *, get_EmitterZoneTasks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EF01F0, int32_t, get_EmitterZoneTasksCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EF02C0, void, set_EmitterZoneTasksCount, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00EF0390, List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array *, get_Events, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00120BA0, void, __ctor, (SoundZoneProcessor_Job__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00EF0470, void, Execute, (ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * listenerZoneTasks, int32_t validListenerZoneTasksSize, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * emitterZoneTasks, int32_t validEmitterZoneTasksSize, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x00120BC0, JobHandle, ExecuteInternal, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * listenerZoneTasks, int32_t validListenerZoneTasksSize, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * emitterZoneTasks, int32_t validEmitterZoneTasksSize, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x00120C20, void, Execute, (SoundZoneProcessor_Job__Boxed * __this, int32_t positionIndex));
IL2CPP_REGISTER_METHOD(0x00120C30, bool, IsTracked, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00120C40, bool, IsTracked, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00120C50, bool, IsTrackable, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00120C60, bool, IsTrackable, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00120C70, bool, IsPointInZone, (SoundZoneProcessor_Job__Boxed * __this, AudioZoneShape2D__Enum zoneShape, Bounds zoneData, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00120CB0, Vector2, GetTrackableDistances, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00120CC0, Vector2, GetTrackableDistances, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos));
IL2CPP_REGISTER_METHOD(0x00120CD0, void, Track, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, List_1_SoundZoneProcessor_Job_PositionZoneEvent_ * events, int32_t zoneIndex));
IL2CPP_REGISTER_METHOD(0x00120CE0, void, Track, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, List_1_SoundZoneProcessor_Job_PositionZoneEvent_ * events, int32_t zoneIndex));
IL2CPP_REGISTER_METHOD(0x00120CF0, void, Untrack, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, List_1_SoundZoneProcessor_Job_PositionZoneEvent_ * events, int32_t zoneIndex));
IL2CPP_REGISTER_METHOD(0x00120D00, void, Untrack, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, List_1_SoundZoneProcessor_Job_PositionZoneEvent_ * events, int32_t zoneIndex));
IL2CPP_REGISTER_METHOD(0x00120D10, void, UntrackIfPossible, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, List_1_SoundZoneProcessor_Job_PositionZoneEvent_ * events, int32_t zoneIndex));
IL2CPP_REGISTER_METHOD(0x00120D20, void, UntrackIfPossible, (SoundZoneProcessor_Job__Boxed * __this, ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * task, PositionSyncTask * pos, List_1_SoundZoneProcessor_Job_PositionZoneEvent_ * events, int32_t zoneIndex));
IL2CPP_REGISTER_METHOD(0x00EF3530, void, __cctor, (MethodInfo * method));
}
