#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ScenariosParticleSystemAnimator {
IL2CPP_REGISTER_METHOD(0x01E81F20, Transform *, get_TransformTarget, (ScenariosParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E81FB0, GameObject *, get_ExternalTarget, (ScenariosParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ScenariosParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E82060, Transform *, get_EffectiveTransform, (ScenariosParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartPlayback, (ScenariosParticleSystemAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (ScenariosParticleSystemAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateEntity, (ScenariosParticleSystemAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E82170, bool, GetCurrentValueAssociatedWithCurve, (ScenariosParticleSystemAnimator * __this, String * curve, float * value));
IL2CPP_REGISTER_METHOD(0x01E82180, void, __ctor, (ScenariosParticleSystemAnimator * __this));
}
