using namespace app;

namespace app::methods::Moon::Timeline::ScaleAxisTweenAnimator {
IL2CPP_REGISTER_METHOD(0x01E7F860, Transform *, get_TransformTarget, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7F8F0, Transform *, get_EffectiveTransform, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7F9C0, GameObject *, get_ExternalTarget, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7FA70, void, OnStartPlayback, (ScaleAxisTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E7FB40, void, SetupInitialValues, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C748, ScaleAxisTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7FD90, void, OnUpdateEntity, (ScaleAxisTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E801F0, void, OnStopPlayback, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E80200, bool, HasFinished, (ScaleAxisTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E80210, void, OnDrawGizmos, (ScaleAxisTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E80600, void, SynchronizeData, (ScaleAxisTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01E808E0, bool, ApproximateEvent, (ScaleAxisTweenAnimator * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x01E80B30, void, __ctor, (ScaleAxisTweenAnimator * __this));
}
