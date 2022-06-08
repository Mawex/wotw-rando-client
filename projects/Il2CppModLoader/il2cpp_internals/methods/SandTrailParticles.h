using namespace app;

namespace app::methods::SandTrailParticles {
IL2CPP_REGISTER_METHOD(0x0057AAC0, SuspendableMask__Enum, get_Mask, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_Mask, (SandTrailParticles * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C08D40, void, set_IsSuspended, (SandTrailParticles * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C08D60, void, Awake, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C08F10, void, OnEnable, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C08FB0, void, OnDisable, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C09050, void, OnDestroy, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C091F0, void, Stop, (SandTrailParticles * __this, int32_t frameDelay));
IL2CPP_REGISTER_METHOD(0x00C09380, void, StopParticlePlayback, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHODINFO(0x047680B0, SandTrailParticles_StopParticlePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C093F0, void, OnSuspended, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C09410, void, OnParticleSystemStopped, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHOD(0x00C09500, void, OnRestoreCheckpoint, (SandTrailParticles * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C820, SandTrailParticles_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C095F0, void, __ctor, (SandTrailParticles * __this));
}
