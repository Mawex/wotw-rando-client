#include <interception_macros.h>

namespace app::methods::Moon_Timeline::ScenariosParticleSystemAnimator {
IL2CPP_REGISTER_METHOD(0x01E81F20, Transform *, get_TransformTarget, (app::ScenariosParticleSystemAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E81FB0, GameObject *, get_ExternalTarget, (app::ScenariosParticleSystemAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ScenariosParticleSystemAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E82060, Transform *, get_EffectiveTransform, (app::ScenariosParticleSystemAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartPlayback, (app::ScenariosParticleSystemAnimator * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::ScenariosParticleSystemAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateEntity, (app::ScenariosParticleSystemAnimator * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x01E82170, bool, GetCurrentValueAssociatedWithCurve, (app::ScenariosParticleSystemAnimator * this_ptr, app::String * curve, app::float * value));
IL2CPP_REGISTER_METHOD(0x01E82180, void, __ctor, (app::ScenariosParticleSystemAnimator * this_ptr));
}
