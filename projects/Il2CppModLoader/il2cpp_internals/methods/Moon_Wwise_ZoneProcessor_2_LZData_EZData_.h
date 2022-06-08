using namespace app;

namespace app::methods::Moon::Wwise::ZoneProcessor_2_LZData_EZData_ {
IL2CPP_REGISTER_METHOD(0x02AF6B80, void, __ctor, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04719088, ZoneProcessor_2_LZData_EZData___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ActiveListenerZones, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x015B78B0, int32_t, get_MaxListenerZones, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_ActiveEmitterZones, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x023153B0, int32_t, get_MaxEmitterZones, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, EZData, InitializeEmitterZoneTask, (ZoneProcessor_2_LZData_EZData_ * __this, EZData zone, AudioEmitterZone * audioEmitterZone));
IL2CPP_REGISTER_METHOD(0x00417870, LZData, InitializeListenerZoneTask, (ZoneProcessor_2_LZData_EZData_ * __this, LZData data, AudioListenerZone * audioListenerZone));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TearDownListenerZoneTask, (ZoneProcessor_2_LZData_EZData_ * __this, LZData data, AudioListenerZoneReference zone, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TearDownEmitterZoneTask, (ZoneProcessor_2_LZData_EZData_ * __this, EZData data, AudioEmitterZoneReference zone, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x02AF52E0, void, Update, (ZoneProcessor_2_LZData_EZData_ * __this, PositionSyncTask__Array * positionTasks, int32_t validPositionTasksSize));
IL2CPP_REGISTER_METHOD(0x02AF5360, void, ResetFirstUpdateTask, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x02AF6D90, void, ClearInvalidTasks, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x02AF5940, void, ResetListener, (ZoneProcessor_2_LZData_EZData_ * __this, SoundListener * listener, PositionSyncTask__Array * positionTasks));
IL2CPP_REGISTER_METHOD(0x02AF5980, void, Initialize, (ZoneProcessor_2_LZData_EZData_ * __this, AkWwiseInitializationSettings * config));
IL2CPP_REGISTER_METHOD(0x02AF7270, void, RegisterListenerZoneTask, (ZoneProcessor_2_LZData_EZData_ * __this, AudioListenerZone * zone, int32_t frameQuantization));
IL2CPP_REGISTER_METHOD(0x02AF74C0, void, RegisterEmitterZoneTask, (ZoneProcessor_2_LZData_EZData_ * __this, AudioEmitterZone * zone, int32_t frameQuantization));
IL2CPP_REGISTER_METHOD(0x02AF6460, void, DefragmentStructures, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x02AF64C0, void, DefragmentEmitterZones, (ZoneProcessor_2_LZData_EZData_ * __this));
IL2CPP_REGISTER_METHOD(0x02AF6820, void, DefragmentListenerZones, (ZoneProcessor_2_LZData_EZData_ * __this));
}
