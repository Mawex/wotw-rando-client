using namespace app;

namespace app::methods::Moon::Timeline::ParticleSystemAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E78090, ParticleSystem *, get_ResolvedParticleSystem, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E781A0, int32_t, get_Hash, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E78380, void, Awake, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E783A0, void, OnStartPlayback, (ParticleSystemAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E786D0, void, OnStopPlayback, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E78910, void, OnPausePlayback, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E78980, void, OnResumePlayback, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E789F0, void, OnUpdateEntity, (ParticleSystemAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E78B30, void, CheckAndCacheChildParticles, (ParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E78D90, void, __ctor, (ParticleSystemAnimator * __this));
}
