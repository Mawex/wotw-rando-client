using namespace app;

namespace app::methods::UberInteractionExplosionAnimator {
IL2CPP_REGISTER_METHOD(0x013F74A0, UberExplosionActor *, get_Actor, (UberInteractionExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013F7570, void, CacheOriginals, (UberInteractionExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013F7650, void, SampleValue, (UberInteractionExplosionAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x013F77F0, void, RestoreToOriginalState, (UberInteractionExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (UberInteractionExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (UberInteractionExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (UberInteractionExplosionAnimator * __this));
}
