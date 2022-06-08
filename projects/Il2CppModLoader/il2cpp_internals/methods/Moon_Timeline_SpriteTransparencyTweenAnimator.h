using namespace app;

namespace app::methods::Moon::Timeline::SpriteTransparencyTweenAnimator {
IL2CPP_REGISTER_METHOD(0x00D07AA0, GameObject *, get_ExternalTarget, (SpriteTransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (SpriteTransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, SpriteRenderer *, get_SpriteRenderer, (SpriteTransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D07B30, void, OnStartPlayback, (SpriteTransparencyTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D07DB0, void, SetupInitialValues, (SpriteTransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B608, SpriteTransparencyTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D07F20, void, OnUpdateEntity, (SpriteTransparencyTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D08300, void, UpdateTransparency, (SpriteTransparencyTweenAnimator * __this, float alpha));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, HasFinished, (SpriteTransparencyTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00D08420, void, SynchronizeData, (SpriteTransparencyTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00D086B0, bool, ApproximateEvent, (SpriteTransparencyTweenAnimator * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00D088B0, void, __ctor, (SpriteTransparencyTweenAnimator * __this));
}
