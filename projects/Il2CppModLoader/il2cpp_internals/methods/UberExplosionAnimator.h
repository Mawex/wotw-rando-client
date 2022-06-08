using namespace app;

namespace app::methods::UberExplosionAnimator {
IL2CPP_REGISTER_METHOD(0x013E87A0, Transform *, get_Actor, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E8880, void, UpdateDirectionVector, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E8B40, void, OnUpdateEntity, (UberExplosionAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x013E8BA0, void, OnStartPlayback, (UberExplosionAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E8BE0, void, OnStartWhenPlaybackOrPreview, (UberExplosionAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopWhenPlaybackOrPreview, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E8C10, void, UpdateAtTime, (UberExplosionAnimator * __this, float timeValue));
IL2CPP_REGISTER_METHOD(0x013E8C70, void, ExplodeAtCurrentTime, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E8CD0, void, Explode, (UberExplosionAnimator * __this, float weight, float startTime, bool forcePlay));
IL2CPP_REGISTER_METHOD(0x013E90F0, bool, InArcMode, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E9100, void, OnDrawGizmosSelected, (UberExplosionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E93E0, void, __ctor, (UberExplosionAnimator * __this));
}
