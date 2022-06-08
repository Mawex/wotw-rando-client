using namespace app;

namespace app::methods::Moon::Timeline::WWiseSoundAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x00D1D730, GameObject *, get_ExternalTarget, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1D750, Transform *, get_EffectiveTransform, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1D830, SoundHost *, get_EffectiveSoundHost, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1D9F0, void, OnStartPlayback, (WWiseSoundAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1DD70, void, OnStopPlayback, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1DD90, void, OnUpdateEntity, (WWiseSoundAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00413160, bool, get_LoopContext, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00413170, void, set_LoopContext, (WWiseSoundAnimatorEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D1DE00, void, OnLoopExit, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1DE20, void, OnRootScopeStopped, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1DED0, void, ForceStopSound, (WWiseSoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1DF50, void, __ctor, (WWiseSoundAnimatorEntity * __this));
}
