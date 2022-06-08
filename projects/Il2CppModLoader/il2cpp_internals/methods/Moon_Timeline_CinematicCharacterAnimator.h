using namespace app;

namespace app::methods::Moon::Timeline::CinematicCharacterAnimator {
IL2CPP_REGISTER_METHOD(0x0040CCC0, float, get_CachedMoonAnimationDuration, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0040CCD0, void, set_CachedMoonAnimationDuration, (CinematicCharacterAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x005B0220, MoonAnimation *, get_CachedMoonAnimation, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_CachedMoonAnimation, (CinematicCharacterAnimator * __this, MoonAnimation * value));
IL2CPP_REGISTER_METHOD(0x010CACD0, bool, get_ShouldUseCurves, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE30, bool, ShowLerpToGroundDuration, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE40, bool, ShowForceUsingCurves, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FBE50, bool, ShowDisableColliderDurationOffset, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE50, bool, ShowAllowMountingOffset, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE50, bool, IsOriCharacter, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A9AA50, bool, get_PlaceOnGroundOnStart, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE60, bool, get_PlaceOnGroundOnEnd, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE30, bool, get_LerpToGroundAtEnd, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CAE70, float, get_Duration, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CB050, void, OnStartPlayback, (CinematicCharacterAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010CB160, void, OnStopPlayback, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CB170, void, OnUpdateEntity, (CinematicCharacterAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010CB460, void, PlaceOriOnGround, (CinematicCharacterAnimator * __this, float t));
IL2CPP_REGISTER_METHOD(0x010CB9C0, void, PrepareForStart, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CD2C0, void, PrepareForStop, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CD6B0, void, UpdateCachedAnimation, (CinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CD7B0, void, SynchronizeData, (CinematicCharacterAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x010CD950, void, __ctor, (CinematicCharacterAnimator * __this));
}
