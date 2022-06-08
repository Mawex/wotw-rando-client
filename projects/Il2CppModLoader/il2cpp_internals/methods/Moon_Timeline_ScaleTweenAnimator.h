#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ScaleTweenAnimator {
IL2CPP_REGISTER_METHOD(0x01E80FB0, Transform *, get_TransformTarget, (ScaleTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E81040, GameObject *, get_ExternalTarget, (ScaleTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ScaleTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E810F0, Transform *, get_EffectiveTransform, (ScaleTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E811C0, void, OnStartPlayback, (ScaleTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E812A0, void, SetupInitialValues, (ScaleTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0475CE88, ScaleTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E81520, void, OnUpdateEntity, (ScaleTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E81800, void, OnDrawGizmos, (ScaleTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00601090, bool, HasFinished, (ScaleTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E81B60, void, __ctor, (ScaleTweenAnimator * __this));
}
