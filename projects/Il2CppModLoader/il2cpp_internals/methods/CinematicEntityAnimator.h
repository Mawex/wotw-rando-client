using namespace app;

namespace app::methods::CinematicEntityAnimator {
IL2CPP_REGISTER_METHOD(0x010C76D0, bool, get_IsTargetPlaceholder, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323B00, bool, get_IsTargetEntity, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C76D0, bool, IsTargetPlaceholderMethod, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323B00, bool, IsTargetEntityMethod, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323B10, Entity *, get_EffectiveEntity, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323B40, GameObject *, get_ExternalTarget, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323B80, MoonAnimation *, get_EffectiveAnimation, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323C90, GameObject *, get_PreviewRig, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323CF0, void, OnStartPlayback, (CinematicEntityAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01323E50, void, OnStopPlayback, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (CinematicEntityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01323E90, void, __ctor, (CinematicEntityAnimator * __this));
}
