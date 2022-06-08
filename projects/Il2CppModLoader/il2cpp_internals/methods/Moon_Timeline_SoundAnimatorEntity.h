#include <interception_macros.h>

namespace app::methods::Moon::Timeline::SoundAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x00D05230, GameObject *, get_ExternalTarget, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D05250, Transform *, get_EffectiveTransform, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D05320, void, OnStartPlayback, (SoundAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D05710, void, OnStopPlayback, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D05730, void, OnUpdateEntity, (SoundAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (SoundAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D05750, SoundDescriptor *, GetSoundDescriptor, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D05830, bool, HasFinished, (SoundAnimatorEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00D058F0, void, __ctor, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00A52470, void, _OnStartPlayback_b__17_0, (SoundAnimatorEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04718D70, SoundAnimatorEntity__OnStartPlayback_b__17_0__MethodInfo);
}
