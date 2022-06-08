using namespace app;

namespace app::methods::Moon::Timeline::TrailAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (TrailAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F0E0, GameObject *, get_ExternalTarget, (TrailAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F190, MoonTrail *, get_EffectiveTrail, (TrailAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F250, void, OnStartPlayback, (TrailAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E8F390, void, OnStopPlayback, (TrailAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F490, void, __ctor, (TrailAnimatorEntity * __this));
}
