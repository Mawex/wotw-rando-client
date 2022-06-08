using namespace app;

namespace app::methods::SeinBowPuppet {
IL2CPP_REGISTER_METHOD(0x00DA2340, int32_t, get_Id, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2350, MoonTimeline__Array *, get_GroundTimelines, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA25A0, MoonTimeline__Array *, get_AirTimelines, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA27F0, MoonTimeline *, GetDrawTimeline, (SeinBowPuppet * __this, bool isOnGround, bool rapid));
IL2CPP_REGISTER_METHOD(0x00DA2820, MoonTimeline *, GetRecoverTimeline, (SeinBowPuppet * __this, bool isOnGround, bool rapid));
IL2CPP_REGISTER_METHOD(0x00DA2850, MoonTimeline *, GetDrawTimeline, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA2870, MoonTimeline *, GetDrawRapidTimeline, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA2890, MoonTimeline *, GetRecoverTimeline, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA28B0, MoonTimeline *, GetRecoverRapidTimeline, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA28D0, MoonTimeline *, GetPullChargeTimeline, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA28F0, MoonTimeline *, GetChargeRecoverTimeline, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA2910, MoonAnimation *, GetAimLoopAnimationBow, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00DA2930, MoonFloat *, GetArrowChargeAmount, (SeinBowPuppet * __this, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00B2A180, GameObject *, get_CurrentArrow, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2950, void, SetCurrentArrow, (SeinBowPuppet * __this, GameObject * arrow));
IL2CPP_REGISTER_METHOD(0x00DA2AC0, Transform *, get_ArrowTransform, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2BE0, Vector3, get_TargetRapidArrowScale, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2C00, Vector3, get_TargetArrowScale, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2C20, Vector3, get_TargetChargeArrowScale, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2C40, MoonAnimator *, get_WeaponAnimator, (SeinBowPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00DA2D20, void, __ctor, (SeinBowPuppet * __this));
}
