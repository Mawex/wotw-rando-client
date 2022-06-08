using namespace app;

namespace app::methods::ScenariosParticleSystemPlugin {
IL2CPP_REGISTER_METHOD(0x00934FD0, void, StartTracking, (ParticleSystem * particleSystem, ScenariosParticleSystemPlugin_TrackingID * trackingiD));
IL2CPP_REGISTER_METHOD(0x009350F0, void, StopTracking, (ParticleSystem * particleSystem));
IL2CPP_REGISTER_METHOD(0x009352F0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (ScenariosParticleSystemPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x00935560, void, RecordCycle, (ScenariosParticleSystemPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (ScenariosParticleSystemPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (ScenariosParticleSystemPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00935710, void, __cctor, (MethodInfo * method));
}
