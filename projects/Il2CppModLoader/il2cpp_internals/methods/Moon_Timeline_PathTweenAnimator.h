using namespace app;

namespace app::methods::Moon::Timeline::PathTweenAnimator {
IL2CPP_REGISTER_METHOD(0x00778090, float, get_CurrentNormalizedPosition, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007780D0, GameObject *, get_ExternalTarget, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00778180, Transform *, get_EffectiveTransform, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00778240, void, OnStartPlayback, (PathTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00778590, void, OnStopPlayback, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007785A0, void, OnUpdateEntity, (PathTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, HasFinished, (PathTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00778D60, float, get_Duration, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00778DC0, Vector3, GetPoint, (PathTweenAnimator * __this, Matrix4x4 * worldToLocal, float time));
IL2CPP_REGISTER_METHOD(0x00778EC0, Matrix4x4, GetWorldToLocal, (PathTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00778F30, void, __ctor, (PathTweenAnimator * __this));
}
