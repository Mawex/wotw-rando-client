using namespace app;

namespace app::methods::Moon::Wwise::WwiseSyncProcessor {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ActivePositionSyncs, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_MaxPositionSyncs, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_ActiveRTPCTasks, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_MaxRTPCTasks, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x022BF7E0, int32_t, get_ActiveListenerZones, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x022BF810, int32_t, get_MaxListenerZones, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x022BF840, int32_t, get_ActiveEmitterZones, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02717880, int32_t, get_MaxEmitterZones, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, UseZoneSyncProcessor, (WwiseSyncProcessor * __this, ZoneProcessor * processor));
IL2CPP_REGISTER_METHOD(0x002FBB00, IListenerSyncProcessor *, get_ListenerSyncProcessor, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, UseListenerProcessor, (WwiseSyncProcessor * __this, IListenerSyncProcessor * processor));
IL2CPP_REGISTER_METHOD(0x027178B0, void, Initialize, (WwiseSyncProcessor * __this, AkWwiseInitializationSettings * config));
IL2CPP_REGISTER_METHOD(0x02717FF0, void, RegisterRTPCSync, (WwiseSyncProcessor * __this, RTPC * target, Func_1_Single_ * getter, ISoundHost * host, int32_t frameQuantinization));
IL2CPP_REGISTER_METHOD(0x02718220, void, RegisterRTPCSync, (WwiseSyncProcessor * __this, RTPC * target, Func_1_Single_ * getter, int32_t frameQuantinization));
IL2CPP_REGISTER_METHOD(0x02718400, void, RegisterPositionSync, (WwiseSyncProcessor * __this, ISoundHost * host, int32_t frameQuantinization));
IL2CPP_REGISTER_METHOD(0x027187A0, void, RegisterListenerZoneSync, (WwiseSyncProcessor * __this, AudioListenerZone * zone, int32_t frameQuantization));
IL2CPP_REGISTER_METHOD(0x02718890, void, RegisterEmitterZoneSync, (WwiseSyncProcessor * __this, AudioEmitterZone * zone, int32_t frameQuantization));
IL2CPP_REGISTER_METHOD(0x02718980, void, RegisterListenerSync, (WwiseSyncProcessor * __this, SoundListener * soundListener));
IL2CPP_REGISTER_METHOD(0x02718AC0, void, ResetListenerTracking, (WwiseSyncProcessor * __this, SoundListener * listener));
IL2CPP_REGISTER_METHOD(0x02718AF0, void, DefragmentPositionTasks, (WwiseSyncProcessor * __this, PositionSyncTask__Array * argTasks, int32_t * validSize));
IL2CPP_REGISTER_METHOD(0x02718C60, void, Update, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02718DA0, void, UpdatePositionTasks, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02719150, void, UpdateRtpcTasks, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02719370, int32_t, ValidTasksCount, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x02719410, void, CommitPosition, (WwiseSyncProcessor * __this, ISoundHost * artificialSoundHost));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WwiseSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
