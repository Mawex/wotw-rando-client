using namespace app;

namespace app::methods::SpiritLeashEffectPoseAnimator {
IL2CPP_REGISTER_METHOD(0x00D5C840, void, Awake, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5C850, void, Init, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5C9B0, void, OnPoolDespawned, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5CA70, void, EnsurePositionsArray, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5CB10, Vector3, get_TargetPosition, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5CC90, Transform *, get_HandTransform, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5CDA0, void, CustomUpdate, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5CF20, void, FixedUpdate, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5D0A0, void, OnDrawGizmos, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5D160, void, UpdateLeashEffect, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5E1D0, void, UpdateTargetCircleEffect, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5E520, void, UpdateLightPosition, (SpiritLeashEffectPoseAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D5E7B0, void, SetTarget, (SpiritLeashEffectPoseAnimator * __this, SeinCharacter * sein, IAttackable * target, Vector3 relativePosition, float effectDuration));
IL2CPP_REGISTER_METHOD(0x00D5E920, void, SetTarget, (SpiritLeashEffectPoseAnimator * __this, SeinCharacter * sein, Transform * target, Vector3 relativePosition, float effectDuration));
IL2CPP_REGISTER_METHOD(0x00D5EA90, void, __ctor, (SpiritLeashEffectPoseAnimator * __this));
}
